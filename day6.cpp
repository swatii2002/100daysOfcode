class Solution {
public:
    int thirdMax(vector<int>& nums) {
 int n = nums.size(); 
             int fir, sec,i; // dummy variables
             int mx[3]= {INT_MIN,INT_MIN,INT_MIN};// declare the minimum elements 
             int cnt =0; // unique elements found count =0
             bool flag =1; // flag =1 means true 
             for(int i =0; i<n; i++){
                 if (nums[i]==mx[0]||nums[i]==mx[1]||nums[i]==mx[2]) 
                 {if(nums[i]==INT_MIN&& flag){
                   flag =0; 
                   cnt++; // increase count cnt = 1
               }
               continue; // set return back and again loop run // mx = int_min
                 
        }
                 if (nums[i]>mx[0])
                 { 
                     cnt++;
                     // if so then increase the count
                     fir =mx[0]; // int_min
                     sec= mx[1]; // int_min
                     mx[0]=nums[i]; // 3 
                     mx[1]=fir;
                     mx[2]=sec;
        }
          
                  else if(nums[i]>mx[1]){
                      cnt++;
                      fir =mx[1];
                      mx[1]=nums[i];
                      mx[2]=fir;
        }
                  else if(nums[i]>mx[2]){
                      cnt++;
                      mx[2]=nums[i];
        }
}



if (cnt<=2){
    return mx[0];
    }
else
    {
    return mx[2];
    }
    
}
};
