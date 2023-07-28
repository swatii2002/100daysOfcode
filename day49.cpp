class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
       
        int m=*max_element(nums.begin(),nums.end());
        int mi=*min_element(nums.begin(),nums.end());
        return (m-mi-2*k)<0?0:(m-mi-2*k);
    }
};
