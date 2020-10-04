class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j  = s.size()-1;
        while(i<j)
        {
            while(i < s.size() && !isVowel(s[i]) ) i++;
            while( j && !isVowel(s[j])) j--;
            if(i<j) swap(s[i++],s[j--]);
            
        }
        return s;
        
    }
    
    bool isVowel(char c)
    {
        c = tolower(c);
        return (c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u');
    }
};