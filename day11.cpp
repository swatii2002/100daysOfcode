class Solution {
public:
    double average(vector<int>& salary) {
       int x = 1e7, y = 0;
        double sum = 0;
        for(auto &i: salary){
            if(i<x){
                x = i;
            }
            if(i>y){
                y = i;
            }
            sum += i;
        }
        sum -= x+y;
        return sum/(salary.size()-2);  
    }
};
