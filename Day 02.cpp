// User function template for C++
//Move All Zeroes to End
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int index=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0)
            arr[index++]=arr[i];
        }
        while(index<arr.size()){
            arr[index++]=0;
        }
    }
};
