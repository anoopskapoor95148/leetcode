// Function to calculate hamming distance 
int hammingDistance(int n1, int n2) 
{ 
    int x = n1 ^ n2; 
    int setBits = 0; 
  
    while (x) {
        x = x & (x-1);
        ++setBits;
    }
  
    return setBits; 
} 
