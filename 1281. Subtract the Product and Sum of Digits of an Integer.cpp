class Solution {
public:
    
    int product(int n)
    {
      int pod = 1;

      while(n!=0) 
      {
       pod = pod*(n%10);
       n = n/10;
      }
        return pod;
    }
    int sum(int n)
    {
        int res = 0;
        while(n!=0)
        {
          res = res+(n%10);
          n=n/10;
        }
        return res;
    }
    int subtractProductAndSum(int n) 
    {
       int pod = product(n);
       int res = sum(n);
       return  pod - res;
    }
    
    
};