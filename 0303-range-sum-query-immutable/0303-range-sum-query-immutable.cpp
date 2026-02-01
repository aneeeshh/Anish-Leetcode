class NumArray {
public:
vector<int> res;
    NumArray(vector<int>& nums) {
        int sum = 0;
        for(auto num:nums) {
            sum += num;
            res.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        int diff;
        if (left == 0)
            return res[right];
        else {
            diff = res[right] - res[left - 1];
        }
        return diff;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */