class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n=boxTypes.size();
        priority_queue<pair<int,int>> p;
        for(int i=0;i<n;i++) p.push({boxTypes[i][1],boxTypes[i][0]});
        int units=0,boxes=0;
        while(p.size() && truckSize)
        {
            int k=min(truckSize,p.top().second);
            units+=k*p.top().first;
            p.pop();
            truckSize-=k;
        }
        return units;
    }
};