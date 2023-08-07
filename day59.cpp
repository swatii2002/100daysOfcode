class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double Area = 0;
        double Maxi = -1;
        for(int i=0;i<points.size()-2;i++) {
            for(int j=i+1;j<points.size()-1;j++){
                for(int k=j+1;k<points.size();k++){
                    // A = (1/2) |x1(y2 − y3) + x2(y3 − y1) + x3(y1 − y2)|
                    int i1 = points[i][0];
                    int j1 = points[i][1];
                    int i2 = points[j][0];
                    int j2 = points[j][1];
                    int i3 = points[k][0];
                    int j3 = points[k][1];
                    
                    Area = ((1.0/2) * abs(i1*(j2-j3) + i2*(j3-j1) + i3*(j1-j2)));
                    // Area = ((1/2)* abs(i1*(j2-j3) + i2*(j3-j1) + i3*(j1-j2)));
                    Maxi = max(Maxi,Area);
                }
            }
        }       
        return Maxi;
    }
};
