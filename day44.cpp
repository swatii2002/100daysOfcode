class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
          for(int i=0;i<nums.size();i=i+2)
        {
          for(int j=i+2;j<nums.size();j=j+2)
          {
              if(nums[j]<nums[i])
              swap(nums[j],nums[i]);
          }
        }
        for(int i=1;i<nums.size();i=i+2)
        {
          for(int j=i+2;j<nums.size();j=j+2)
          {
              if(nums[j]>nums[i])
              swap(nums[j],nums[i]);
          }
        }
        return nums; 
    }
};
