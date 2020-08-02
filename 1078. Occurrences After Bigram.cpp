class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans;
        istringstream ss(text);
        string prev2,prev,word;
        while(ss >> word)
        {
            if(prev2==first && prev==second)
            {
                ans.push_back(word);
            }
            prev2 = prev;
            prev = word;
        }
        return ans;
        
    }
};

//another one
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> t;
        string tmp;
        for(auto &c:text)
        {
            if(c==' ')
            {
                t.push_back(tmp);
                tmp = "";
            }
            else
            {
                tmp+=c;
            }
        }
        t.push_back(tmp);
        vector<string> ans;
        for(int i=0;i< t.size()-2;i++)
        {
            if(t[i]==first && t[i+1]==second)
            {
                ans.push_back(t[i+2]);
            }
        }
        return ans;
        
    }
};