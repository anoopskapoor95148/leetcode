// Need to rework and test

class Solution {
public:
    vector<string> vs;
    
    vector<string> generateParenthesis(int n) {
        if (n <=0)
            return vs;
        char s[n*2];
        
        generateParenthesis_int(n, n, s, 0);
        return vs;
        
    }
    void generateParenthesis_int(int left, int right, char *s, int index) {
        if (left < 0 || left > right)
            return;
        if (left ==0 && right == 0) {
            
            vs.push_back(s);
            
        } else {
        if (left > 0) {
            s[index] = '(';
            generateParenthesis_int(left-1, right, s, index+1);
        }
        if (right > left)
             generateParenthesis_int(left, right-1, s, index+1);
        }
        return;
    }
        
};
