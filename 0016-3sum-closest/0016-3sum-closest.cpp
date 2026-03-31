class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int maxDiff = INT_MAX;
        int resultSum = 0;
        for(int i = 0; i < nums.size() - 2; i++){
            int left = i + 1;
            int right = nums.size() - 1;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                int diff = abs(sum - target);
                if(diff < maxDiff){
                    maxDiff = diff;
                    resultSum = sum;
                }
                if(sum == target){
                    return sum;
                }
                else if(sum < target){
                    left++;
                }
                else right--;

            }
        }
        return resultSum;
    }
};