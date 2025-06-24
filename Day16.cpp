//Anagram
class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        int n=s1.length();
        int m=s2.length();
        
        if(m!=n)
        return false;
        
        unordered_map<char,int>freq;
        
        for(char c:s1){
            freq[c]+=1;
        }
        
        for(char c : s2){
            freq[c]-=1;
        }
        
        for(auto& pair : freq){
            if(pair.second!=0)
            return false;
        }
        return true;
    }
};
