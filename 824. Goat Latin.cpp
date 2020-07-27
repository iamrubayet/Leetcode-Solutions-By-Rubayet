class Solution {
    const unordered_set<char> vowels ={'a','e','i','o','u','A','E','I','O','U'};
public:
    string toGoatLatin(string S) {
        string ans,tok,suff;
        istringstream ss(S);
        
        while(ss >> tok)
        {
            suff+='a';
            if(vowels.count(tok[0])<=0)
            {
                tok = tok.substr(1)+tok[0];
            }
            ans += tok+"ma"+suff+' ';
            
        }
        ans.pop_back();
        return ans;
        
    }
};