class Solution {
public:
    vector<int> sumZero(int n) {
             vector<int> ans(n, 0);
        int low=0, high= n-1;
        int t= n/2;
        while(low<high){
            ans[low++]=-t;
            ans[high--]=t;
            t--;
        }
        return ans;
    }
};
