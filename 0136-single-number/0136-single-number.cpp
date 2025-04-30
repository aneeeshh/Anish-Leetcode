class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //Brute approach
        int i,j;
        int n=nums.size();
        for(i=0;i<n;i++) {
            int num=nums[i];
            int count=0;
            for(j=0;j<n;j++) {
                if(num==nums[j])
                count++;
            }
        if(count == 1)
        return num;
        }
        return -1;
    }
};