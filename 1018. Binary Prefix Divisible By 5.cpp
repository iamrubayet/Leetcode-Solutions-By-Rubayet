class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A, vector<bool> a = {}, int num = 0) {
  for (auto i : A) {
    num = (num * 2 + i) % 5;
    a.push_back(!num);
  }
  return a;
}
};