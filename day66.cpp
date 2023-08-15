class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& h) {
       int n=names.size();
      vector<pair<int,string>>p;
        for(int i=0;i<n;i++){
           p.push_back({h[i],names[i]});
        }
        sort(p.begin(),p.end(), greater<pair<int,string>>());
    vector<string>res;
     for(int i=0;i<n;i++){
         res.push_back(p[i].second);
     }
     return res;
        }
   
};
