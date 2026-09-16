class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int validcount=0;
        int n=nums.size();
       long long totalsum=0;
        for(int i=0;i<n;i++)
        {
            totalsum+=nums[i];
        }
        long long sum1=0;
        for(int i=0;i<n/2;i++)
        {
            sum1+=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            long long sum2 = totalsum-sum1;
            if(sum1>sum2) validcount++;
            sum1 = sum1 - nums[i] + nums[(i+n/2)%n];
        }
        return validcount;
    }
};