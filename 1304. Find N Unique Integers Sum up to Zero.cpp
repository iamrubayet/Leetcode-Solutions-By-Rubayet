class Solution {
public:
vector<int> sumZero(int n) {
vector<int> ans = {-(n - 2) * (n - 1) / 2};
for (int i = 0; i < n - 1; i++)
ans.push_back(i);
return ans;
}
};