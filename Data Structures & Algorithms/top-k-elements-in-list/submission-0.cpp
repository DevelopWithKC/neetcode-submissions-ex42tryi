class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        // Step 1: Count frequency
        for(auto it : nums) {
            mp[it]++;
        }

        // Step 2: Convert map → vector
        vector<pair<int,int>> vec(mp.begin(), mp.end());

        // Step 3: Sort by frequency (descending)
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Step 4: Take top k elements
        vector<int> result;
        for(int i = 0; i < k; i++) {
            result.push_back(vec[i].first);
        }

        return result;
    }
};