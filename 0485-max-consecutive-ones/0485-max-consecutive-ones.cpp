class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int i;
        int max_count=0;
        int n=nums.size();
        for(i=0;i<n;i++) {
            if(nums[i] == 1) {
                count++;
                if(count > max_count) {
                    max_count=count;
                }
            }
            else 
                count = 0;
        }
        return max_count;
    }
};