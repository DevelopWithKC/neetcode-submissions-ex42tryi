class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n);
        int i = 0, j = 0;
        for(i; i < n; i++)
        {
            ans[i] = nums[i];
        }

        for(i; i < 2*n; i++, j++)
        {
            ans[i] = nums[j];
        }

        return ans;

    }
};