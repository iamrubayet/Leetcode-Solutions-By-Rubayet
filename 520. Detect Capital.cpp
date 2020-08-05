class Solution {
public:
    bool detectCapitalUse(string word) {
        bool firstcaps = isupper(word[0]);
        bool allcaps = true;
        bool allsmall =true;
        for(int i=1;i<word.size();i++)
        {
            if(isupper(word[i]))
            {
                allsmall=false;
            }
            else
            {
                allcaps = false;
            }
        }
        return (firstcaps && allcaps ) || allsmall;
    }
};