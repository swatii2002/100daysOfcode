class Solution {
public:
    int numJewelsInStones(string jw, string st) {
        int count = 0;
        for(int i = 0; jw[i] != '\0'; i++){
            for(int j = 0; st[j] !='\0'; j++){
                if(jw[i] == st[j])
                    count++;
            }
        }
        return count;
    }
};
