class Solution {
public:
    vector <int> v, v1;
    vector<int> plusOne(vector<int>& digits) {
        int tmp=1, carry=1;
        for (auto itr = digits.rbegin(); itr != digits.rend(); ++itr) {
            tmp  = (*itr) + carry;
            carry = tmp/10;
            tmp   = tmp%10;
            v.push_back(tmp);
        }
        if (carry !=0)
            v.push_back(carry);
        for (auto itr = v.rbegin(); itr != v.rend(); ++itr) {
            v1.push_back(*itr); 
        }
        return v1;
    }
};
