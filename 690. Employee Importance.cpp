/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int,Employee*> mp;
        for(auto x:employees)
        {
            mp[x->id]=x;
        }
        int sum =0;
        dfs(mp,id,sum);
        return sum;
        
    }
    void dfs(unordered_map<int,Employee*>& mp,int id,int &sum)
    {
        sum +=mp[id]->importance;
        for(auto x:mp[id]->subordinates)
        {
            dfs(mp,x,sum);
        }
        
    }
};