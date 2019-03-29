int islandPerimeter_count(int** grid, int gridRowSize, 
                    int gridColSize, int i, int j) {
    int count=0;
    if ((j-1) < 0 || grid[i][j-1] == 0) //left side
        ++count;
    if ((j+1) >= gridColSize || grid[i][j+1] == 0) //right side
        ++count;
    
    if ((i-1) < 0 || grid[i-1][j] == 0) //up side
        ++count;
    if ((i+1) >= gridRowSize || grid[i+1][j] == 0) //down side
        ++count;
    
    return count;
}

int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
    if (gridRowSize <=0 || gridColSize <=0)
        return 0;
    int i,j, count=0;

    for (i=0; i < gridRowSize; ++i) {
        for (j=0; j < gridColSize; ++j) {
            if (grid[i][j] == 1) {
               count +=islandPerimeter_count(grid,gridRowSize, 
                                                    gridColSize,i,j);
            }
        }
    }
    return count;
}
