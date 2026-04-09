class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) {
            return strs[0];
        }

        sort(strs.begin(), strs.end());
        int mini = min(strs[0].length(), strs.back().length());
        for (int i = 0; i < mini; i++) {
            if (strs[0][i] != strs.back()[i]) {
                return strs[0].substr(0, i);
            }
        }
        return strs[0];
    }
};