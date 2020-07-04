class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int mintime=0;
        for(int i=1;i<points.size();i++)
        {
            mintime+=timetovisit(points[i-1],points[i]);
        }
        return mintime;
        
    }
    int timetovisit(const vector<int>& p1,const vector<int>& p2)
    {
     int dx= abs(p1[0]-p2[0]);
     int dy= abs(p1[1]-p2[1]);
     return max(dx,dy);
    }
};