class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int least=prices[0], res=0;
        
        for(int i=0;i<prices.size();i++){
            least = min(least, prices[i]);
            res=max(res, prices[i]-least);
        }
        return res;
    }
};
