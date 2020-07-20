class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size())
        {
           return false; 
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
        {
            return true;
        }
        return false;
    }
};


/*2nd solution*/


class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int n = s.length();
        unordered_map<char, int> counts;
        for (int i = 0; i < n; i++) {
            counts[s[i]]++;
            counts[t[i]]--;
        }
        for (auto count : counts)
            if (count.second!=0) return false;
        return true;
    }
};


