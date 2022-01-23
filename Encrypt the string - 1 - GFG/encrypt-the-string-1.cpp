// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string encryptString(string s){
    
    string ans;
    int cnt=1;
    for(int i=1;i<s.size();i++)
    {
      if(s[i]==s[i-1])
      {
          cnt++;
      }
      else
      {
          ans.push_back(s[i-1]);
          string s1;
          while(cnt)
          {
              int k=cnt%10;
              char c=k+48;
              s1+=c;
              cnt=cnt/10;
          }
          int a=0,b=s1.size()-1;
          while(a<=b) swap(s1[a++],s1[b--]);
          ans+=s1;
          cnt=1;
      }
    }
    ans.push_back(s[s.size()-1]);
    string s1;
          while(cnt)
          {
              int k=cnt%10;
              char c=k+48;
              s1+=c;
              cnt=cnt/10;
          }
          int a=0,b=s1.size()-1;
          while(a<=b) swap(s1[a++],s1[b--]);
          ans+=s1;
    //ans.push_back(cnt);
    int i=0,j=ans.size()-1;
    while(i<=j) swap(ans[i++],ans[j--]);
    return ans;
}
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
	    string s;
		cin>>s;
		Solution ob;
		string ans = ob.encryptString(s);
		cout<<ans<<endl;
	}
}
  // } Driver Code Ends