class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        vector <int> v;
        int len = A.size();
        int i;
        if (!(A.size()) ||  (A.size() != B.size())) {
            return v;
        }
        unordered_map<int,int>hash;
        for (i=0; i < len; ++i) {
            hash[B[i]] = i;
        }
        for (i=0; i < len; ++i) {
            v.push_back(hash[A[i]]);
        }
        return v;
    }
};
