class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s.size() != t.size()) return false;
        for(int i=0,j=0; i< s.size(); i++,j++){
            if(s[i] != t[j])
            return false;
        }
        return true;
    }
};