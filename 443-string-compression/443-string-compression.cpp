class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0;
        int i=0,j=0;
        while(i<chars.size())
        {

            while(j<chars.size() && chars[j]==chars[i]) j++;
            
            int cnt=j-i;
            chars[index++]=chars[i];
            if(cnt>1)
            {
                string s=to_string(cnt);
                for(auto c: s) chars[index++]=c;
            }
            i=j;
        }
        return index;
    }
};