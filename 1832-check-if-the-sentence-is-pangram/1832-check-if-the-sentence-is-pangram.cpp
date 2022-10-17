class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> alphabet(26, 0);
        int cnt = 0;
        for(int i = 0; i < sentence.size(); i++)
        {
            if(alphabet[sentence[i] - 'a'] == 0)
            {
                cnt++;
                alphabet[sentence[i] - 'a']++;
            }
        }
        return cnt == 26;
    }
};