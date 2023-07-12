class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int ans = 0;
        unordered_set<char> s = {'a','e','i','o','u'};
        for(int i = left; i<= right; i++){
            ans += (s.count(words[i][0]) && s.count(words[i][words[i].length()-1]));
        }
        return ans;
    }
};
