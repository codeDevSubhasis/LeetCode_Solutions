class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleSum=0;
        int doubleSum=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>9){
                doubleSum+=nums[i];
            }
            else{
                singleSum+=nums[i];
            }
        }
        if(doubleSum>singleSum || singleSum>doubleSum){
            return true;
        }
        return false;
        
    }
};