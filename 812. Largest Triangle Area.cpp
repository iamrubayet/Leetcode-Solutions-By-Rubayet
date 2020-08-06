class Solution {
public:
    double side(vector<int> a, vector<int> b){
        int x = a[0] - b[0];
        int y = a[1] - b[1];
        return sqrt(x * x + y * y);
    }
    
    double A(double a, double b, double c){
        double s = (a + b + c) / 2.0;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        return area;
    }
    
    bool isValid(double a, double b, double c){
        return (a + b > c && a + c > b && b + c > a);
    }
    
    double largestTriangleArea(vector<vector<int>>& points) {
        double result = 0.0;
        for(int i = 0;i<points.size();i++){
            for(int j = i + 1;j<points.size();j++){
                for(int k = j + 1;k<points.size();k++){
                    double a = side(points[i], points[j]);
                    double b = side(points[j], points[k]);
                    double c = side(points[i], points[k]);
                    
                    if(isValid(a, b, c)){
                        double area = A(a, b, c);

                        result = max(area, result);
                    }
                }
            }
        }
        return result;
    }
};