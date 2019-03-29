int
max (int a, int b) {
    if (a >= b)
        return a;
    return b;
}

int
min (int a, int b) {
    if (a <= b)
        return a;
    return b;
}

int maxArea(int* height, int heightSize) 
{ 
    int l = 0; 
    int r = heightSize -1; 
    int area = 0; 
      
    while (l < r) 
    { 
        // Calculating the max area 
        area = max(area, min(height[l], 
                        height[r]) * (r - l)); 
                          
            if (height[l] < height[r]) 
                l += 1; 
                  
            else
                r -= 1; 
    } 
    return area; 
} 
