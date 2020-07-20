class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int min_val = A[0];
        int max_val = A[0];
        for(int i=0;i<A.size();i++)
        {
            min_val = min(min_val,A[i]);
            max_val = max(max_val,A[i]);
        }
        if(min_val+K >= max_val-K)
        {
            return 0;
        }
        else
        {
            return (max_val-K) - (min_val+K);
        }
    }
};