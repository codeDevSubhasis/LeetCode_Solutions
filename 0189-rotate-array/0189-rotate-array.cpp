class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n =nums.size();
        reverse(nums.begin(),nums.end());
        if(k>n){ // it denotes reaminimg k rotation 
            k=k%n;
        }
        for(int i =0;i<k/2;i++){
            swap(nums[i],nums[k-1-i]);
        }
        int j=1;
        for(int i =k;i<((n+k)/2);i++){
            swap(nums[i],nums[n-j]);
            j++;
        }
        
    }
};