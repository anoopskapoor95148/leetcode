int mySqrt(int x) {
    unsigned i=1; 
    if (x == 0 || x == 1)
        return x;
    for (i=1; i*i <= x; ++i) {
          ;
    }
    return i-1;
    
}
