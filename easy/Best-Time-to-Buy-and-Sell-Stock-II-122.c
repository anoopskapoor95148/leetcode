int maxProfit(int* prices, int pricesSize) {
    
    int i, profit= 0,tmp_profit = 0, val=-1;
    for (i=0; i < pricesSize; ++i){
        if (val == -1) {
            val = prices[i];
            continue;
        }
        if (val > prices[i]) {
              val = prices[i];
              profit +=tmp_profit;
              tmp_profit = 0;
        } else {
                if (tmp_profit < (prices[i] - val)) {
                    tmp_profit = prices[i] - val;
                } else {
                    profit +=tmp_profit;
                    val = prices[i];
                    tmp_profit = 0;
                }
        } 
    }
    printf ("\n ANOOP profit %d\n", profit);
    profit +=tmp_profit;
    return profit;   
}
