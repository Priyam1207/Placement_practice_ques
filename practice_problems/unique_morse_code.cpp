class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> res; 
        for(int i=0; i<words.size(); i++)
        {
            string str  = ""; 
            for(int j =0; j<words[i].size(); j++)
            {
                str += arr[words[i][j] - 'a']; 
            }
            res.insert(str); 
        }
        return res.size(); 
    }
};
