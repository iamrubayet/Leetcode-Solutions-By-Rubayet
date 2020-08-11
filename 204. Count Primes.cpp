class Solution {
public:
    int countPrimes(int n) {
        vector<bool> primes(n,true);
        for(int i=2;i*i<primes.size();i++)
        {
            if(primes[i])
            {
                for(int j=i;j*i<primes.size();j++)
                {
                    primes[j*i]=false;
                }
            }
        }
        int count=0;
        for(int i=2;i<primes.size();i++)
        {
            if(primes[i])
            {
                count++;
            }
        }
        return count++;
        
        
    }
};