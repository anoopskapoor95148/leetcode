class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int i, profit= 0,val=-1;
    int pricesSize = prices.size();
    for (i=0; i < pricesSize; ++i){
        if (val == -1) {
            val = prices[i];
            continue;
        }
        if (val > prices[i]) {
              val = prices[i];
        } else {
            if ((prices[i] -val)  > profit) {
                profit = prices[i] -val;
            }
        } 
    }
    return profit;
}
  
    
};
