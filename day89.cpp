class Solution {
    int dp[1001];
    int solve(vector<int>& cost, int i){
        if(i==0 || i==1){
            return 0;
        }
        if(dp[i] != -1){
            return dp[i];
        }
        int c1=cost[i-1]+solve(cost, i-1);
        int c2=cost[i-2]+solve(cost, i-2);
        return dp[i]=min(c1, c2);

    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp, -1, sizeof(dp));
        return solve(cost, cost.size());
    }
};
