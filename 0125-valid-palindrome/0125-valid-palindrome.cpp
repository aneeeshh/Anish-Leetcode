class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i = 0; i < s.size() - 1; i++) {
            char c = s[i];
            int ascii = (int)c;
            if(ascii >= 33 && ascii <= 47 || ascii >= 58 && ascii <= 64 ||  ascii >=91 && ascii <= 96 ||  ascii >= 123 && ascii <= 126)
                continue;
            else
                str.push_back(s[i]);
        }
        int i = 0;
        int j = str.size()-1;
        while(i<=j){
            if(str[i] != str[j])
            return false;
            else {
                i++;
                j--;
            }
        }
        return true;
    }
};