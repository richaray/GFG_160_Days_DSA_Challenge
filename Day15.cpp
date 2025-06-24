// User function template for C++
//Add Binary strings
class Solution {
  public:
    string trimzeroes(const string& s3){
        
        size_t firstOne = s3.find('1');
        return (firstOne == string::npos)? "0" : s3.substr(firstOne);
        
    }
    string addBinary(string& s1, string& s2) {
        // your code here
        s1=trimzeroes(s1);
        s2=trimzeroes(s2);
        
        int len1=s1.length();
        int len2=s2.length();
        
        if(len1<len2)
        return addBinary(s2,s1);
        
        int carry=0;
        int j=len2-1;
        int sum=0;
        
        for(int i=len1-1;i>=0;i--){
            int bit1=s1[i]-'0';
            sum=bit1+carry;
            
            
            if(j>=0){
              int bit2=s2[j]-'0';
              sum=sum+bit2;
              j--;
            }
            
            
            int bit = sum%2;
            carry = sum/2;
            
            s1[i] = (char)(bit+'0');
            
            
        }
        if(carry>0)
        s1='1'+s1;
        
        return s1;
        
        
    }
};
