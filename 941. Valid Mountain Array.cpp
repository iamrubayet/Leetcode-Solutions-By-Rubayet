class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int N = A.size();
        int i=0;
        //walk up
        while(i<N && i+1<N && A[i] < A[i+1])
        {
            i++;
        }
        
        //peak cant be first or last
        if(i==0 || i==N-1)
            return false;
        
        //walk down
        
        while(i < N && i+1<N )
        {
            if(A[i]<=A[i++ + 1 ])
                return false;
        }
        return true;
        
    }
};