class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int freq[100];
        int sum=0;
        // sort(nums.begin(),nums.end()); // dont matter in this case;
        for(int i=0;i<nums.size();i++){
            int val=nums[i]-1;
            freq[val]++;
        }
        for(int i =0;i<100;i++){
            if(freq[i] == 1){
                sum+=(i+1);
            }
        }

        return sum;
    }
};