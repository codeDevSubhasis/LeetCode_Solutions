class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int maxcount =INT_MIN;
        int val;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                count++;
            }
            else{
                maxcount = max(maxcount,count);
                if(maxcount==count){
                    val=nums[i-1];
                }
                count=1;
            }

        }
        maxcount = max(maxcount,count);
        if(maxcount==count){
            val=nums[nums.size()-1];
        }
        return val;
    }
};