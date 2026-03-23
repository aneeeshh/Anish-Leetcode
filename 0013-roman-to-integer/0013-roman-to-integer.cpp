class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int sum = 0;
        unordered_map<char,int> roman = {
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},
            {'M',1000}
        };
        for(int i=n-1; i>=0; i--){
            if(i < n-1  && roman[s[i]] < roman[s[i+1]])
            sum -= roman[s[i]];
            else
            sum += roman[s[i]];
        }
        return sum;
    }
};