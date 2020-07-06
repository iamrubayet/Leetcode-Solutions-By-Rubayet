class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int num=0;
        sort(A.begin(),A.end());
        for(int i=0;i<A.size()-1;i++)
        {
            if(A[i]==A[i+1]){
                num= A[i];
            }
        }
        return num;
        
    }
};