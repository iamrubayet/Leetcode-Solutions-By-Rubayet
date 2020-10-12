class Solution {
public:
    bool checkPerfectNumber(int num) {
        static unordered_set<int> n = {6, 28, 496, 8128, 33550336};
        return n.count(num);
        
    }
};