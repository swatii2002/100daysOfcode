class Solution {
public:
    bool canConstruct(string ran, string mag) {
      sort(ran.begin(), ran.end());
        sort(mag.begin(), mag.end());
        int i = 0;
        int j = 0;
        int count = 0;
        while(j < mag.size()) {
            if(ran[i] == mag[j]) {
                count++;
                i++;
                j++;
            }
            else j++;
        }
        return count == ran.size();   
    }
};
