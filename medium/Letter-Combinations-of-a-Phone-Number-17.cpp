class Solution {
public:
    vector<string> vs;
    string ss;
    bool flag = false;
    vector<string>_input = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxzy" };
    vector<string> letterCombinations(string digits) {
        if (digits.size() < 0)
            return vs;  
        letterCombinations_int((digits), 0, digits.size());
        return vs;
    }
    
    void letterCombinations_int(string digits, int index, int len) {
        int i;
        if (index == len) {
            if (!ss.empty()) {
                printf ("\n hello anoop\n");
                vs.push_back(ss);
                flag = true;
                return;
            }
        }    
        if (_input[digits[index]-'0'].empty())
                letterCombinations_int(digits, index+1, len);
        for (auto itr = _input[digits[index]-'0'].begin(); 
                   itr != _input[digits[index]-'0'].end(); ++itr) {
               // printf ("n ANOOP %c index %d\n",*itr, index);
                if (flag == false)
                    ss.push_back(*itr);
                else
                    ss[index] = *itr;
                letterCombinations_int(digits, index+1, len);
        }
        return;
    }
};



#if 0
class Solution {
public:
    vector<string> letterCombinations(string digits)
    {
        vector<string>_result;
        if (digits.size() < 1)
            return _result;
        vector<string>_input = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxzy" };

        int _size = digits.size();
        _result.push_back("");
        for (int i = 0; i < _size; i++)
        {
            int num = digits[i] - '1';
            string _str = _input[num];
            if (_str.empty())
                continue;
            std::vector<string > _tempresult;
            for (int j = 0; j < _str.size(); ++j)
            {
                for (int k = 0; k<_result.size(); ++k)
                {
                    _tempresult.push_back(_result[k] + _str[j]);
                }
            }
            _result.swap(_tempresult);
        }
        return _result;
    }
};

#endif
