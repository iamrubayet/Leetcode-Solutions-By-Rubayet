class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& p) {
        int result = 0;
        unordered_map<int, int> umap;
        for(int i=0; i<p.size() ; i++){
            for(int j=0 ; j<p.size() ; j++){
                int d = pow(p[j][1] - p[i][1], 2) + pow(p[j][0] - p[i][0], 2);
                result += 2 * umap[d]++;
            }
            umap.clear();
        }
        return result;
    }
    
};