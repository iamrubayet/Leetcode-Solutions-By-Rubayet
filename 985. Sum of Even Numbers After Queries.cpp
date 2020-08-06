class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> result(queries.size());
        int even_sum = 0;
        for(int val:A)
        {
            if(val%2==0)
            {
                even_sum +=val;
            }
        }
        
        
        
        for(int i=0;i<queries.size();i++)
        {
            int index = queries[i][1];
            int value = queries[i][0];
            
            if(A[index]%2==0)
            {
                even_sum -=A[index];
            }
            
            A[index]+= value;
            
            if(A[index]%2==0)
            {
                even_sum +=A[index];
            }
            result[i]=even_sum;
            
        }
        
        
        
        
        return result;
        
    }
};