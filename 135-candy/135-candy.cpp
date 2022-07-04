class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size(),sum=0;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++) v.push_back({ratings[i],i});
        sort(v.begin(),v.end());
        vector<int> candies(n,1);
        for(int i=0;i<n;i++)
        {
            int currIndex=v[i].second;
            int prevIndex=currIndex-1,nextIndex=currIndex+1;
            if(prevIndex>=0 && ratings[currIndex]>ratings[prevIndex]) candies[currIndex]=max(candies[currIndex],candies[prevIndex]+1);
            if(nextIndex<n && ratings[currIndex]>ratings[nextIndex]) candies[currIndex]=max(candies[currIndex],candies[nextIndex]+1);
            sum+=candies[currIndex];
        }
        return sum;
    }
};