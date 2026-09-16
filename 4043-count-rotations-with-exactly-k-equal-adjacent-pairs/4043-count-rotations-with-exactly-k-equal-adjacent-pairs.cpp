class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.length();
        int validcount=0;
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n-1;j++)
            {
                if(s[(i+j)%n] == s[(i+j+1)%n])
                {
                    count++;
                }
            }
            if(count == k) validcount++;
        }
        return validcount;
    }
};