class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int peak=0;
        int i=0;
        while(A[i+1]>A[i])
        {
          peak++;
          i++;
        }
        return peak;
        
    }
};