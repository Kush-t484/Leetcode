class Solution {
public:
    void printsubsets(vector<int>& arr, vector<int>& ans, int i, vector<vector<int>>& result) {
        if (i == arr.size()) {
            result.push_back(ans); 
            return;
        }
        ans.push_back(arr[i]);
        printsubsets(arr, ans, i + 1, result);
        ans.pop_back();
        printsubsets(arr, ans, i + 1, result);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        printsubsets(nums, ans, 0, result);
        return result;
    }
};
