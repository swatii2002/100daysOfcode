class Solution {
public:
    int subtractProductAndSum(int n) {
         int s=0,p=1;
        while(n){
            int last = n%10;
            s += last;
            p*= last;
            n/=10;
        }
        return p-s;  
    }
};
