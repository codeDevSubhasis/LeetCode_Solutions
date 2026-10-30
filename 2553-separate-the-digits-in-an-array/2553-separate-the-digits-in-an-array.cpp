class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>9){
                string s=to_string(nums[i]);
                for(int j=0;j<s.size();j++){
                    int val=s[j]-'0';
                    ans.push_back(val);
                }
            }
            else if(nums[i]<=9){
                    ans.push_back(nums[i]);
            }
            
        }
        return ans;
        
    }
};