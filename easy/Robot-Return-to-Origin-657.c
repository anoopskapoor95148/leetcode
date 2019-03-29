class Solution {
public:
    bool judgeCircle(string moves) {
        int len = moves.size(), i=0;
        int x=0, y=0;
        while(i < len) {
            if (moves[i] == 'R') {
                x +=1;
            }
            if (moves[i] == 'L') {
                x -=1;
            }
            if (moves[i] == 'D') {
                y +=1;
            }
            if (moves[i] == 'U') {
                y -=1;
            }
            ++i;
        }
        if (x == 0 && y == 0)
            return true;
        return false;
    }
};
