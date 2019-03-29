int uniquePaths(int m, int n) {
    if (!m || !n)
        return 0;
    int i, j;
    int matrix[n];
    
    for (i=0; i < n; ++i) {
        matrix[i] = 1;
    }
    for (i=1; i <m; ++i) {
        for (j=1; j < n; ++j) {
            matrix[j] = matrix[j-1] + matrix[j];
        }
    }
    return matrix[n-1];
}
    
