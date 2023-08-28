class Solution {
public:
    int secondHighest(string s) {
        vector<int>v;
        set<int>ss;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                ss.insert(s[i]-'0');
            }
        }
        if(ss.size()<=1)return -1;
        for(auto it:ss)
        {
            v.push_back(it);
        }
        sort(v.begin(),v.end());
        return v[v.size()-2];
    }
};
