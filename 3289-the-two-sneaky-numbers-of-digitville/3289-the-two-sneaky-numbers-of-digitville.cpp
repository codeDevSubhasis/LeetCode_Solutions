class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        int num=0;
        int count;
        while(num<nums.size()){
            count = 0;
            for(int i = 0 ;i < nums.size();i++){
                if(num == nums[i] ){
                    count++;
                }
            }
            if(count>=2 && (ans.empty() || ans.back() != num)){
                ans.push_back(num);
            }
            num++;
        }
        return ans;
    }
};