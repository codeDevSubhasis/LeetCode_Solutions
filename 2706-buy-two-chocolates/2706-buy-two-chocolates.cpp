class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int n = prices.size();

        for(int i =0; i<n-1; i++) {
            int val = prices[i] + prices[i+1];
            if(val == money){
                return 0;
            }
            else if(val < money){
                money = money - val;
                break;

            }
            else if(val > money) {
                break;
            }

        }
        return money;
    }
};