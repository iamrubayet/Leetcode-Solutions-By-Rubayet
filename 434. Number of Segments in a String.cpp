class Solution {
public:
    int countSegments(string s) {
        
        stringstream ss(s); int res = 0;
      while (ss >> s) ++res; return res;
        
    }
};