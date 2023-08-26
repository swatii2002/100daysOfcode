class Solution {
public:
    int countPoints(string rings) {

        vector<set<char>> count(10);
        int ans = 0;
        for(int i = 1;  i < rings.size(); i+=2)
        {
            count[rings[i] - '0'].insert(rings[i-1]);
        }

        for(int i = 0; i < 10; i++)
        {
            if(count[i].size() == 3)
           ans++;
           // cout<<ans<< "  ";
        }
        return ans;
        
    }
};
