class Solution {
public:
    int splitNum(int num) {
      priority_queue<int> pq;
      int i = 1, ans = 0;
      while(num) {
          int res = num % 10;
          pq.push(res);
          num /= 10;
      } 
      while(!pq.empty()) {
          int first = pq.top(), second = 0;
          pq.pop();
          if(!pq.empty()) {
              second = pq.top();
              pq.pop();
          }
          ans += (first+second) * i;
          i *= 10;
      }
      return ans;
    }

};
