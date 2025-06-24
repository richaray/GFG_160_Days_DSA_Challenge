//Search Pattern (KMP Algorithm)

class Solution {
  public:
    char nonRepeatingChar(string &s) {
        // Your code here
        unordered_map<char,int>freq;
        
        for(char c:s){
            freq[c]++;
        }
        for(char c : s){
            if(freq[c]==1)
            return c;
        }
        return '$';
    }
};
