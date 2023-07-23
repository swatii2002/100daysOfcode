class Solution {
public:
    int reverse(int x) {
               long long total = 0;
        
        while (x != 0) {
            long long number = (long long)x % 10; 
            total = (total * 10) + number; 
            x = x / 10; 
        }
      
        if (total > INT_MAX || total < INT_MIN) {
            return 0;
        }
        
        return total; 
 
    }
};
