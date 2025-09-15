class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // unordered_map<int,int> countmap;
        // for(int i=0;i<nums.size();i++)
        // {
        //     countmap[nums[i]]++;
        // }

        // vector<pair<int,int>> sorted;
        // for(auto itr=countmap.begin();itr!=countmap.end();++itr)
        // {
        //     sorted.push_back({itr->second,itr->first});
        // }

        // sort(sorted.rbegin(),sorted.rend());

        // vector<int> res;
        // for(int i=0;i<k;++i)
        // {
        //     res.push_back(sorted[i].second);
        // }
        // return res;

        unordered_map<int,int> count;
        int n = nums.size();

        for(int i=0;i<n;i++)
        {
            count[nums[i]]++;
        }


        vector<pair<int,int>> revcount;

        for(auto itr=count.begin();itr!=count.end();itr++)
        {
            revcount.push_back({itr->second,itr->first});
        }


        sort(revcount.rbegin(),revcount.rend());

        vector<int> res;

        for(int i=0;i<k;i++)
        {
            res.push_back(revcount[i].second);
        }

        return res;



    }
};