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
                  //  cout<<t<<" ";
                    map[t]=i+1;
                }
            }
            
          //  cout<<endl;
        }
    }

    int f(string prefix, string suffix) {
        string t=prefix+'|'+suffix;
        // cout<<endl;
        // cout<<t<<endl;
        //cout<<map[t]<<endl;
        if(map[t]==0) return -1;
        else return map[t]-1;
    }
};

// // ["WordFilter","f","f","f","f","f","f","f","f","f","f"]
// // [[["cabaabaaaa","ccbcababac","bacaabccba","bcbbcbacaa","abcaccbcaa","accabaccaa","cabcbbbcca","ababccabcb","caccbbcbab","bccbacbcba"]]
// ,["bccbacbcba","a"],["ab","abcaccbcaa"],["a","aa"],["cabaaba","abaaaa"],["cacc","accbbcbab"],["ccbcab","bac"],["bac","cba"],["ac","accabaccaa"],["bcbb","aa"],["ccbca","cbcababac"]]