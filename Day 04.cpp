class Solution {
  public:

    // Function to rotate an array by d elements in 0counter-clockwise direction.
    void reverse(vector<int>&arr, int start, int end){
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        if(n==0)return;
        d=d%n;
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
    }
};
