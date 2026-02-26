class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> mp;
        mp[')'] = '(';
        mp['}'] = '{';
        mp[']'] = '[';

        for(auto ch:s){
            if(mp.count(ch)){
                if(st.empty() || st.top() != mp[ch]){
                    return false;
                    }
                st.pop();
            }
            else {
                st.push(ch);
            }
        }
        return st.empty();
    }
};