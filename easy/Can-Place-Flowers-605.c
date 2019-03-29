bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int i, count=1;
    if (n == 0)
        return true;
    if (flowerbedSize == 0)
        return false;
    for (i=0; i < flowerbedSize; ++i) {
        if (flowerbed[i] == 0) {
            ++count;
            if (count == 3) {
                --n;
                count = 1;
            }
        } else {
            count = 0;
        }
    }
    if (count == 2)
        --n;
    if (n <= 0)
        return true;
    return false;
}


/*
bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
     int i;
     if (n == 0)
         return true;
     if (flowerbedSize == 0)
         return false;

     for (i=0; i <flowerbedSize && n > 0;) {
          if (flowerbed[i]  == 0) {
              if ((i-1) >= 0 && flowerbed[i-1] == 1) {
                  ++i;
                  continue;
              }
              if ((i+1) < flowerbedSize && flowerbed[i+1] == 1) {
                  i +=3;
                  continue;
              }
              --n;
          }
          i += 2;
     }
     if (n == 0)
         return true;
    return false;
    
}
*/
