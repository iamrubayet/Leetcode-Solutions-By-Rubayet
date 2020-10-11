class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int a = 1;
        int b;
        
        while(1)
        {
            b = n-a;
            if(to_string(a).find('0')==string::npos && to_string(b).find('0')==string::npos )
            {
                return {a,b};
            }
            a++;
        }
        
    }
};