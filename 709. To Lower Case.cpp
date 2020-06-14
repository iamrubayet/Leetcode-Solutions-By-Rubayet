class Solution {
public:
    string toLowerCase(string str) {
        
        string result;
        
        for (int i= 0; i < str.length(); i++)
        {
            if (str[i] >= 65 && str[i] <=90 )
            {
                str[i]+= 32;
                result.append(1,str[i]);
            }
            else
            {
               result.append(1,str[i]) ;
            }
        }
        return result;
        
    }
};