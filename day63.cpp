class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        for(int i=0;i<boxTypes.size();i++){
            swap(boxTypes[i][0],boxTypes[i][1]);
        }
        sort(boxTypes.begin(),boxTypes.end());
        int ans=0;
        for(int i=boxTypes.size()-1;i>=0;i--){
            if(boxTypes[i][1]<=truckSize){
                truckSize-=boxTypes[i][1];
                ans+=(boxTypes[i][1]*boxTypes[i][0]);
            }
            else if(truckSize!=0 && boxTypes[i][1]>truckSize){
                ans+=(truckSize*boxTypes[i][0]);
                truckSize=0;
                break;

            }
        }
        return ans;
        
    }
};
