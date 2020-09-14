class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        int max_sum = list1.size()+list2.size();
        
        unordered_map<string,int> hashmap1;
        unordered_map<string,int> hashmap2;
        
        vector<string> res;
        
        for(int i=0;i<list1.size();i++)
        {
            hashmap1.insert(make_pair(list1[i],i));
        }
        
        for(int i=0;i<list2.size();i++)
        {
            hashmap2.insert(make_pair(list2[i],i));
        }
        
        for(auto it:list1)
        {
            if(hashmap2.count(it) > 0 && hashmap1[it]+hashmap2[it] < max_sum)
            {
                max_sum = hashmap1[it]+hashmap2[it];
            }
        }
        
        
        for(auto it : list1)
        {
            if(hashmap2.count(it) > 0 && hashmap1[it]+hashmap2[it]==max_sum)
            {
                res.push_back(it);
            }
            
        }
        return res;
        
    }
};