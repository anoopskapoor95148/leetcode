// m is size of coins array (number of different coins) 
int coinChange(int* coins, int coinsSize, int amount)
{ 
    // table[i] will be storing the minimum number of coins 
    // required for i value.  So table[V] will have result 
    int table[amount+1]; 
  
    // Base case (If given value V is 0) 
    table[0] = 0; 
  
    // Initialize all table values as Infinite 
    for (int i=1; i<=amount; i++) 
        table[i] = INT_MAX; 
  
    // Compute minimum coins required for all 
    // values from 1 to V 
    for (int i=1; i<=amount; i++) 
    { 
        // Go through all coins smaller than i 
        for (int j=0; j < coinsSize; j++) 
          if (coins[j] <= i) 
          { 
              int sub_res = table[i-coins[j]]; 
              if (sub_res != INT_MAX && sub_res + 1 < table[i]) 
                  table[i] = sub_res + 1; 
          } 
    }
    if (table[amount] == INT_MAX)
        return -1;
    return table[amount]; 
} 


