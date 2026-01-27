class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0;
        int rightSum = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            rightSum += nums[i];
        }
        int pivot = 0;
        int i = 0;
        while( i < nums.size()){
            leftSum += nums[i];
            if(leftSum == rightSum) 
                return pivot;
            else {
                rightSum -= nums[i];
                pivot++;
                i++;
            }
        }
        return -1;
    }
};