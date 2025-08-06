class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive, negative;
        
        // Separate positive and negative numbers
        for(int num : nums) {
            if(num > 0) positive.push_back(num);
            else negative.push_back(num);
        }
        
        vector<int> result;
        int n = positive.size();
        
        // Merge alternatively
        for(int i = 0; i < n; i++) {
            result.push_back(positive[i]);
            result.push_back(negative[i]);
        }
        
        return result;
    }
};
