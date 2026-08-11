class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int max_consecutive=0;
       int curr_consecutive=0;
       for(int num:nums){
        if(num==1){
            curr_consecutive+=1;
        }else{
            curr_consecutive=0;
        }
        if(curr_consecutive>max_consecutive){
            max_consecutive=curr_consecutive;
        }

       }
       return max_consecutive;
    }
};