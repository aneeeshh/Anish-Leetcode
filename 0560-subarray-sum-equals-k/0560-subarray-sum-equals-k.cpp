class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i,j;
        int count = 0;
        for(i = 0; i < nums.size(); i++) {
            int sum = 0;
            for(j = i; j < nums.size(); j++) {
                sum += nums[j];

                if(sum == k)
                count++;
            }
        }
        return count;
    }
};