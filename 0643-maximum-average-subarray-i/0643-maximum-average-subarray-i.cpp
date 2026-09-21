class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double sum=0;
       for(int i=0;i<k;i++){
        sum+= nums[i];
       }
       double maxsum = sum;
       int startindex = 0;
       int endindex = k;
       while(endindex < nums.size()){
        sum -= nums[startindex];
        startindex++;

        sum += nums[endindex];
        endindex++;
        maxsum = max(maxsum,sum);
       }
       return maxsum/k;
    }

};