class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0;
        int n = s.size();
        int res = 0;
        
        vector<int> f(26, 0);
        int maxFreq = 0;

        for(int high = 0; high < n; high++){
            f[s[high] - 'A']++;
            
            // track max frequency
            maxFreq = max(maxFreq, f[s[high] - 'A']);
            
            int len = high - low + 1;
            
            // shrink window if invalid
            while(len - maxFreq > k){
                f[s[low] - 'A']--;
                low++;
                len = high - low + 1;
            }
            
            res = max(res, len);
        }
        
        return res;
    }
};