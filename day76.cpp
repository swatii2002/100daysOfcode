class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
      vector<string> morse{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        vector<string> code; //To store morse codes
        int count=1; // To count distinct codes
        for(auto i: words){
            int n;
            string str;
            for(int j=0;j<i.length();j++){
                n=i[j]-97; // To get index for each alphabet from morse array
                str+=morse[n];
            }
            code.push_back(str);
        }

        // Count distinct codes
        for (int i = 1; i < code.size(); i++) {
            int j;
            for (j = 0; j < i; j++)
                if (code[i] == code[j])
                    break;
            if (i == j) count++;
        }


        return count;   
    }
};
