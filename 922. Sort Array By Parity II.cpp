class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> even,odd,res;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0)
            {
                even.push_back(A[i]);
            }
            else
            {
               odd.push_back(A[i]); 
            }
        }
        for(int i=0;i<A.size();i++)
        {
            if(i%2==0)
            {
              res.push_back(even.back());
              even.pop_back();
            }
            else
            {
               res.push_back(odd.back());
               odd.pop_back();
            }
        }
        return res;
    }
};