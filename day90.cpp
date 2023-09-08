class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size(),m = s.size(),cnt = 0,i=0;
        priority_queue<int> pq1;
        for (int i = 0; i < n; i++) pq1.push(g[i]);
         priority_queue<int> pq2;
        for (int i = 0; i < m; i++) pq2.push(s[i]);
        while(i < g.size()){
        if (pq1.empty() || pq2.empty()) break;
        else if(pq1.top()<=pq2.top())cnt++,pq1.pop(),pq2.pop();
        else if(pq1.top()>pq2.top()) pq1.pop();
        i++;
    }
        return cnt;
    }
};
