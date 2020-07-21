class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> st;
        for(int candy:candies)
        {
            st.insert(candy);
        }
        return min(st.size(),candies.size()/2);
        
    }
};