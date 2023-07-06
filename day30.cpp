class Solution {
public:
    string decodeMessage(string key, string message) {
      unordered_map <char, char> hash;

      char ch = 'a';

      for(auto& c : key){
          if(c == ' '){
              continue;
          }
          if(!hash.count(c)){
              hash[c] = ch++;
          }
      } 
      for(auto& c : message){
          if(hash.count(c)){
              c = hash[c];
          }
      }
      return message;
    }

};
