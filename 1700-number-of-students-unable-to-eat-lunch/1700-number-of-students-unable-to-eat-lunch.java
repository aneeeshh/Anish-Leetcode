class Solution {
    public int countStudents(int[] students, int[] sandwiches) {
        int count0=0;
        int count1=0;
        
        for(int i : students)
        {
            if(i==0) count0++;
            else count1++;
        }
        for( int j=0; j<sandwiches.length; j++)
        {
            if(sandwiches[j]==0)
            {
                if(count0==0)
                {
                    return count1;
                }
                else count0--;
            }
            if(sandwiches[j]==1)
            {
                if(count1==0)
                {
                    return count0;
                }
                else count1--;
            }
        }
        return 0;

    }
}