class Solution {
public:
    string addStrings(string num1, string num2) {
        string s;
        int tmp, carry=0;
        auto itr = num1.rbegin(), itr1 =num2.rbegin();
        for (;itr != num1.rend() && itr1 != num2.rend(); ++itr, ++itr1) {
            tmp   = (carry + (*itr - '0') + (*itr1 - '0'));
            carry = tmp/10;
            tmp   = tmp%10;
            s.push_back(('0' + tmp));
        }
        while (itr != num1.rend()) {
            tmp   = (carry + (*itr - '0'));
            carry = tmp/10;
            tmp   = tmp%10;
            s.push_back(('0' + tmp));
            ++itr;
        }
        while (itr1 != num2.rend()) {
            tmp   = (carry + (*itr1 - '0'));
            carry = tmp/10;
            tmp   = tmp%10;
            s.push_back(('0' + tmp));
            ++itr1;
        }
        if (carry !=0)
            s.push_back(('0' + carry));
        reverse(s.begin(), s.end()); 
        return s;
    }
};
