class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> sumcountmap;
        sumcountmap[0] = 1;
        int result = 0;
        int prefixsum = 0;

        for(int num : nums) {
            prefixsum += num;
            if(sumcountmap.find(prefixsum - k) != sumcountmap.end()) {
                result += sumcountmap[prefixsum - k];
            }
            sumcountmap[prefixsum]++;
        }

        return result;
    }
};
