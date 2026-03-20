class Solution {
public:
    bool rotateString(string s, string goal) {
        int i =0;
        int n = s.size();
        while(i<n){
            int temp = s[0];
            for(int j = 0; j < n - 1; j++){
                s[j] = s[j+1];
            }
            s[n-1] = temp;

            if(s == goal) return true;
            else i++;
        }
        return false;
    }
};