class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        int i,j;
        for(i=0 ; i<n ; i++) {
            for(j=i+1 ; j<n && j<=i+k ; j++) {
                if(nums[i] == nums[j]) 
                return true;
            }
        }
        return false;
    }
};