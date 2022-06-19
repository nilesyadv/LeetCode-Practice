class WordFilter {
    unordered_map<string,int> map;

   public:
    WordFilter(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            int wordSize=words[i].size();
            for(int j=0;j<wordSize;j++)
            {
                string p=words[i].substr(0,j+1);
                int m=p.size();
                for(int k=0;k<wordSize;k++)
                {
                    string s=words[i].substr(k);
                    string t=p+'|'+s;
                    map[t]=i+1;
                }
            }
        }
    }

    int f(string prefix, string suffix) {
        string t=prefix+'|'+suffix;
        if(map[t]==0) return -1;
        else return map[t]-1;
    }
};
