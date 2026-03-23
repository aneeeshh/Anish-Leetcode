class Solution {
public:
    int maxDepth(string s) {
        if (s=="") return 0;

        int count = 0;
        int ans = 0;
        for(char c : s){
            if(c == '(') {
                count++;
                ans = max(count, ans);
            }
            else if (c == ')') count--;    
            else continue;
        }
        return ans;
    }
};