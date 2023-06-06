class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
    int n = arr.size();
    if (arr.size()<= 2) return true;
    int min_val = INT_MAX, max_val = INT_MIN;
    for (int num : arr) {
        min_val = min(min_val, num);
        max_val = max(max_val, num);
    }
   if ((max_val - min_val) % (n - 1) !=0) return false;
   int d = (max_val - min_val) / (n - 1);
   int i = 0;
   while(i < n){
       if(arr[i] == min_val + i * d) i++;
       else if ((arr[i] - min_val) % d !=0) return false;
       else {
           int pos = (arr[i] - min_val) / d;
           if (pos < i ||  arr[pos] == arr[i]) return false;
           std::swap(arr[i], arr[pos]);

       }
   }
   return true;
    }

};
