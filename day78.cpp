class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int temp;
        for  (int i=0; i<s.size(); i++)
        {
            int count=0;
            for (int j=0; j<s.size(); j++)
            {
                if (s[i]==s[j]) count++;
            }
            if (i==0) temp=count;
            if (temp!=count) return false;

        }
        return true;
    }
};
