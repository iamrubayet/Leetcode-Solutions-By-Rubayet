class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
         vector<vector<int>> result;
        
        vector<int> path;
        
        dfs(graph,result,path,0);
        return result;
        
         
        
    }
    
    void dfs(vector<vector<int>>& graph,vector<vector<int>>& result,vector<int> path,int u)
    {
        path.push_back(u);
        if(u==graph.size()-1) result.push_back(path);
        else
            for(int v : graph[u]) dfs(graph,result,path,v);
        path.pop_back();
    }
};

//1st graph problem