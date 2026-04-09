class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0;
        double sum = 0;
        int high = k-1;
        for(int i = low; i <= high; i++){
            sum += nums[i];
        }
        double res= sum / k;
        high++;
        while(high < n){
            sum += nums[high];
            sum -= nums[low];
            low++;
            high++;
            double avg = sum / k;
            res = max(res, avg);
        }
        return res;
    }
};