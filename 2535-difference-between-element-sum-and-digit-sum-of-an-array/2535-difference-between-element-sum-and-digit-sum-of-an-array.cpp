class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n =nums.size();
        int eleSum=0;
        int digSum=0;
        for(int i=0;i<n;i++){
            eleSum=eleSum+nums[i];
            int k =nums[i];
            while(k>0){
                int lastD=k%10;
                digSum=digSum+lastD;
                k=k/10;
            }

        }
        return abs(eleSum-digSum);
        
    }
};