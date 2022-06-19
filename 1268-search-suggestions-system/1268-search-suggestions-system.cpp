class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        // for(int i=0;i<products.size();i++) cout<<products[i]<<" ";
        // cout<<endl;
        vector<vector<string>> v;
        
        for(int i=1;i<=searchWord.size();++i)
        {
            string s=searchWord.substr(0,i);
            int cnt=0;
            vector<string> v1;
            for(int j=0;j<products.size();++j)
            {
                string p=products[j].substr(0,i);
                if(p==s){
                     v1.push_back(products[j]);
                     cnt++; 
                }
                if(cnt==3 || p>s) break;
            }
            v.push_back(v1);
        }
        return v;
    }
};