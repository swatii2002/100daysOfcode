class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> S;
        int score = 0, maxScore = 0;

        for (int l = 0, r = 0; r < nums.size(); r++) {
            while (S.find(nums[r]) != S.end()) {
                S.erase(nums[l]);
                score -= nums[l++];
            }
            S.insert(nums[r]);
            score += nums[r];
            maxScore = max(score, maxScore);
        }

        return maxScore;
    }

};
