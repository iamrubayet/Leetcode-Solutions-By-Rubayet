class Solution {
public:
    int romanToInt(string s) {
        if(s.empty()) return 0;
        
         unordered_map<char, int> t = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
        int num = 0;
        
        for(int i=0;i<s.length()-1;i++)
        {
         if(t[s[i]]<t[s[i+1]])
         {
           num -=t[s[i]];  
         }
            else
            {
               num+=t[s[i]]; 
            }
        }
        num += t[s.back()];
        return num;
        
    }
};