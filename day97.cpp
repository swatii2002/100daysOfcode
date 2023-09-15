class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        if(nums.empty() || q.empty())return {};
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int n = nums.size();
        int m = q.size();

        for(int i = 1 ; i < n ; i++){
            nums[i] = nums[i]+nums[i-1];
        }
       
        int i = 0 ;
     
        int j = n-1;


        while(i< m ){
         
            while(j>=0 && nums[j]>q[i]){
                j--;
            }

            if(j<0)ans.push_back(0);
            else ans.push_back(j+1);
            i++;
            j=n-1;

        }

        return ans;
        
    }
};
