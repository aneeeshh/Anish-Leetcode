class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int i = 0;
        int count = 0;
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[n-1];
        while(i < first.size() && i < last.size()){
            if(first[i] == last[i])
            {
            i++;
            count++;
            }
            else break;
        }
        return first.substr(0,count);
    }
};