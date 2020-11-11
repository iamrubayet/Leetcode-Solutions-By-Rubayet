class Solution {
    void dfs(string s,string d,map<string,vector<pair<string,double>>> m,set<string> v,double &ans,double temp)
    {
        if(v.find(s)!=v.end()) return ;
        else
        {
            v.insert(s);
            if(s==d)
            {
                ans = temp;
                return ;
                
            }
            else
            {
                for(auto a: m[s])
                {
                    dfs(a.first,d,m,v,ans,temp*a.second);
                }
            }
            
        }
    }
public:
    vector<double> calcEquation(vector<vector<string>>& e, vector<double>& v, vector<vector<string>>& q) {
        
        map<string,vector<pair<string,double>>> m;
        
        for(int i=0;i<e.size();i++)
        {
            m[e[i][0]].push_back({e[i][1],v[i]});
            m[e[i][1]].push_back({e[i][0],1/v[i]});

        }
        vector<double> result;
        
        for(int i=0;i<q.size();i++)
        {
            string s = q[i][0];
            string d = q[i][1];
            set<string> visited;
            double ans = -1.0;
            if(m.find(s)!=m.end())
            dfs(s,d,m,visited,ans,1.0);
            result.push_back(ans);
        }
        return result; 
        
    }
};