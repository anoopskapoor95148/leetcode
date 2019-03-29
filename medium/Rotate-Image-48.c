void rotate(int** matrix, int matrixRowSize, int *matrixColSizes) {
    int row_top=0, row_bottom = matrixRowSize-1;
    int col_left = 0, col_right = *matrixColSizes-1;
    int tmp,i;
    
     while (row_top < row_bottom) {
         i=0;
         while (row_top +i < row_bottom) {
             tmp = matrix[row_bottom][col_left+i];
             matrix[row_bottom][col_left+i] = matrix[row_bottom -i][col_right];
             matrix[row_bottom -i][col_right] = matrix[row_top][col_right-i];
             matrix[row_top][col_right-i] = matrix[row_top+i][col_left];
             matrix[row_top+i][col_left] = tmp;
             ++i;
         }
         ++row_top;
         --row_bottom;
         ++col_left;
         --col_right;
     }
     return;
}
