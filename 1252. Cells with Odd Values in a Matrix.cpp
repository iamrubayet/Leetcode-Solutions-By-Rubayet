class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        
     vector<int> cols(m);

     vector<int> rows(n);

    for (const auto& idx : indices) {

      rows[idx[0]] ^= 1;

      cols[idx[1]] ^= 1;           

    }

    int ans = 0;

    for (int i = 0; i < n; ++i)

      for (int j = 0; j < m; ++j)

        ans += rows[i] ^ cols[j];

    return ans;
        
    }
};