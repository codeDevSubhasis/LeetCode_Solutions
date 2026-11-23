class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int>s;
        vector<int>dis(n);
        vector<int>fval(n);
        dis[n - 1] = -1;
        s.push(prices[n-1]);

        for(int i = n-2; i >= 0;  i--){
            int val = prices[i];

            while(!s.empty() && s.top()>val ){
                s.pop();
            }
            if(s.empty()){
                dis[i] = -1;
            }
            else{
                dis[i] = s.top();
            }
            s.push(val);
        }

        for(int i=0;i<n;i++){
            if(dis[i] == -1){
                fval[i] = prices[i];
            }
            else{
                fval[i] = prices[i] - dis[i];
            }
        }
        return fval;
    }
};