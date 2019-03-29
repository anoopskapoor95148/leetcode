bool isValidSudoku(char** board, int boardRowSize, int boardColSize) {
    int row[9];
    int col[9];
    int square[9];
    int i,j;
    int value;
    if (boardRowSize < 0 || boardRowSize > 9  ||
        boardColSize < 0 || boardColSize > 9)
            return false;
    for (i=0;  i <9; ++i) {
        row[i] = 0;
        col[i] = 0;
        square[i] = 0;
    }
    printf ("\n Test start row %d col %d\n",
            boardRowSize, boardColSize);
    for (i=0; i < boardRowSize; ++i) {
        for (j=0; j < boardColSize; ++j) {
            if (board[i][j] == '.')
                continue;
            value = 1 << (board[i][j] - '1');
            if ((value & row[i]) ||
                (value & col[j]) ||
                (value & square[(3*(i/3)) + (j/3)])) {
                return false;
            }
            row[i] |= value;
            col[j] |= value;
            square[(3*(i/3)) + (j/3)] |= value;
        }
    }
    return true;  
}


