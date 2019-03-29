class Solution {
public:
    int max = 0, submax=0, low=0;
    int maxProfit(vector<int>& prices) {
        int i;
        if (prices.size() <= 0)
            return 0;
        low = prices[0];
        for (i=0; i < prices.size(); ++i) {
            if (low > prices[i]) {
                add(prices[i]); 
            } else {
                if ((prices[i] - low) > submax) {
                    submax = (prices[i] - low);
                } else {
                    add(prices[i]);
                }
            }
        }
        return (max +=submax);   
    }
    void add(int x) {
        max    +=submax;
        submax  = 0;
        low     = x;
        //return;
    }
};
