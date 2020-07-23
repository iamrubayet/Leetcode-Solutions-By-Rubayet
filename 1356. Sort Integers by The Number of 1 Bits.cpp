class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,vector<int>> hash;
        vector<int> ans;
        for(auto &num:arr)
        {
            hash[bitnum(num)].push_back(num);
        }
        for(auto it=hash.begin();it!=hash.end();it++)
        {
            vector<int> temp(it->second);
            if(temp.size()) sort(temp.begin(),temp.end());
            ans.insert(ans.end(),temp.begin(),temp.end());
        }
        return ans;
        
        
    }
    int bitnum(int n)
    {
        int count=0;
        while(n!=0)
        {
            if(n%2==1) count++;
            n/=2;
        }
        return count++;
    }
};