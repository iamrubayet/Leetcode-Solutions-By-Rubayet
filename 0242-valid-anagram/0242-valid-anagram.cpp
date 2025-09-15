class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
        {
            return false;
        }

        unordered_map<char,int> charmapone;
        unordered_map<char,int> charmaptwo;

        for(int i=0;i<s.length();i++)
        {
            charmapone[s[i]]++;
            charmaptwo[t[i]]++;
        }

        if (charmapone == charmaptwo)
        {
            return true;
        }

        return false;



    }
};