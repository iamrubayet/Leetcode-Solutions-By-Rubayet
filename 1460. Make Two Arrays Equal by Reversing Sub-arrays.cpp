class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> map;
        for(int t:target)
        {
           if(map.find(t)!=map.end())
           {
               map[t]+=1;
           }
            else
            {
                map.insert({t,1});
            }
        }
        for(int a:arr)
        {
           if(map.find(a)!=map.end() && map[a]>0) 
           {
               map[a]-=1;
           }
            else
            {
               return false; 
            }
        }
        return true;
        
    }
};