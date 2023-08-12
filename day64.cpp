class Solution {
public:
    int minTimeToType(string word) {
        int i, ascii_num=97, time=0;
        for(i=0 ; i<word.length() ; i++)
        {
            if(abs(word[i]-ascii_num)<=13)
                time += abs(word[i]-ascii_num)+1;
            else
                time += 26-abs(word[i]-ascii_num)+1;
            ascii_num = word[i];
        }
        return time;
    }
};
