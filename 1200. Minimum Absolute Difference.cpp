class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> v;
        int n = arr.size();
        int min = INT_MAX;
        for(int i=1;i<n;i++)
        {
            int diff = arr[i]-arr[i-1];
            if(min==diff)
            {
               v.push_back({arr[i-1],arr[i]}); 
            }
            else if(min > diff)
            {
                v.clear();
                min = diff;
                v.push_back({arr[i-1],arr[i]});
                
            }
        }
        return v;
        
    }
};