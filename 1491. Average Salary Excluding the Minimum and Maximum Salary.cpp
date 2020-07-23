class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int sum=0;
        double av=0;
        for(int i=1;i<salary.size()-1;i++)
        {
            sum+=salary[i];
            

        }
        av = sum/((salary.size()-2)*1.0);
        return av;
        
        
    }
};