class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=1;
        int suff=1;
        int max_prod = INT_MIN;
        if(nums.size()==1) 
            return nums[0];

        for(int i=0;i<nums.size();i++){
            if(pre==0) pre=1;
            if(suff==0) suff=1;
            pre=pre*nums[i];
            suff=suff*nums[nums.size()-i-1];
            max_prod=max(max_prod,max(pre,suff));
        }
        return max_prod;
    }
};