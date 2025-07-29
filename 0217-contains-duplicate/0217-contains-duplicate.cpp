class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int num:nums) {
            if(seen.count(num))     //If  element already in set, return true
                return true;
            seen.insert(num);       //If element not in set, then insert it
        }
        return false;        
    }
};