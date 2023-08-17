class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>v(26,0);
        for(char c:sentence){
            v[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(v[i]==0){
                return false;
            }
        }
        return true;
    }
};
