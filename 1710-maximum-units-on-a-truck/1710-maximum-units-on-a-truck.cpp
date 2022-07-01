class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        int n=boxTypes.size();
        vector<int> v(1001,0);
        
        for(int i=0;i<n;i++) v[boxTypes[i][1]]+=boxTypes[i][0];
        //for(int i=10;i>=0;i--) cout<<i<<" "<<v[i]<<endl;
        int units=0;
        
        for(int i=1000;i>=0;i--)
        {
            int k=min(truckSize,v[i]);
            units+=i*k;
            truckSize-=k;
            if(truckSize==0) break;        
        }
        return units;
    }
};