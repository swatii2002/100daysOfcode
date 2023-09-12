class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1, 0);
        for(int i=1; i<=n; i<<=1){
            int i2=min(i<<1, n);
            for(int j=i; j<=i2; j++)
                ans[j]=ans[j-i]+1;
        }
        return ans;
    }
};
