class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int n=arr.size();
        int left=1;
        int maxleft=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            left*=arr[i];
            maxleft = max(left, maxleft);
            
            if(left==0)left=1;
        }
        
        int right=1;
        int max_right=INT_MIN;
        
        for(int i=n-1;i>=0;i--){
            right*=arr[i];
            max_right=max(right, max_right);
            if(right==0)right=1;
        }
        
        return max(maxleft, max_right);
    }
};
