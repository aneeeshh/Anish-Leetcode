class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> res;
        int sum = 0;
        res.push_back(sum);
        for(auto num : gain) {
            sum += num;
            res.push_back(sum);
        }
        int ans = *max_element(res.begin(), res.end());
        return ans;
    }
};