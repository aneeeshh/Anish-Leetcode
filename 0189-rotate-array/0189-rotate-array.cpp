class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;
        k = k % n; // Handle k > n
        if(k>0)
        {
        reverse(nums.begin(),nums.end()); //Reverse the entire array
        reverse(nums.begin(),nums.begin() + k); 
        reverse(nums.begin() +k, nums.end());
        }
        
    }
};