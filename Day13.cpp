//Smallest Positive Missing
class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        
        for(int i=0; i<n ; i++){
        while(arr[i]>=1 && arr[i]<=n && arr[i]!=arr[arr[i]-1]){
            
            int t = arr[arr[i]-1];
            arr[arr[i]-1] = arr[i];
            arr[i] = t;
        }
        }
        for(int i=1;i<=n;i++){
            if(i!=arr[i-1])
            return i;
        }
        return n+1;
    }
};
