class Solution {
public:
    string defangIPaddr(string address) {
        
        string result;
        
        for (int i = 0; i < address.length();i++){
            
            
            if (address[i]=='.')
            {
                result.append("[.]");
            }
            else
            {
               result.append(1,address[i]) ;
            }
        }
        return result;
        
    }
};