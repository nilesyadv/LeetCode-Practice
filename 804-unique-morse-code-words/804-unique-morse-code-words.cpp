class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> vect{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        //cout<<vect[0]<<" "<<vect[25]<<endl;
        set<string> set;
        for(int i = 0; i < words.size(); i++)
        {
            string s = words[i];
            string morse = "";
            for(int j = 0; j < s.size(); j++) morse += vect[s[j]-'a'];
            if(morse.size() > 0) set.insert(morse);
        }
        
        return set.size();
    }
};