class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int num_lines = 1;
        int width = 0;
        vector<int> res(2);
        for(auto c: S)
        {
            int char_width = widths[c-'a'];
            if(char_width+width> 100)
            {
                num_lines++;
                width=0;
            }
            width+=char_width;
        }
        res[0]=num_lines;
        res[1]=width;
        return res;
    }
};