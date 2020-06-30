class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> bag;
        for(const string& word: words)
        {
           string code = " ";
            for(char c:word)
             code+=morse[c-'a'];
             bag.insert(code);
            
        }
        return bag.size();

        
    }
};