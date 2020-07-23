class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string,int> data;
        for(int i=0;i<cpdomains.size();i++)
        {
           string eachval = cpdomains[i];
           size_t space = eachval.find(" ");
           int number = stoi(eachval.substr(0,space-0+1));
           string rest = eachval.substr(space+1);
            
           size_t current = rest.find(".");
           while(current!=std::string::npos)
           {
               data[rest]+=number;
               rest = rest.substr(++current);
               current = rest.find(".");
           }
            data[rest]+=number;
        }
        vector<string> toReturn;
        
        for(auto &elem:data)
        {
            string toAdd = to_string(elem.second)+" "+(elem.first);
            toReturn.push_back(toAdd);
        }
        return toReturn;
        
    }
};