class Solution {
public:
    int distMoney(int money, int n) {
        if(money < n) return -1;
        int ans = 0;
        vector<int>v(n, 1);
        money -= n;
        
        for(int i=0; i<n; i++) {
            if(money >= 7) v[i] += 7, money -= 7;
            else v[i] += money, money = 0;
        }
        if(money) v.back() += money;
        
        for(int &i : v) {
            if(i == 4) {
                for(int &j : v) {
                    if(j != 4 && j != 8) j++, i--;
                }
            }
        }
        for(int i : v) {
            if(i == 4) ans--;
            if(i == 8) ans++;
        }
        return max(0, ans);
    }
};
