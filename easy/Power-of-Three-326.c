/* Function to check if x is power of 3*/
bool isPowerOfThree(int n) 
{ 
  if (n == 0) 
    return 0; 
  while (n != 1) 
  { 
      if (n%3 != 0) 
         return 0; 
      n = n/3; 
  } 
  return 1; 
} 
