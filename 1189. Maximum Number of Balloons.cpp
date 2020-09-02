class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int> M;
        for(auto ch : text) M[ch]++;
        return min({M['b'], M['a'], M['l']/2, M['o']/2, M['n']});
    }
};