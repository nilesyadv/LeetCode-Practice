#define sp " "
class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n=heights.size();
        priority_queue<int> p;
        
        for(int i=1;i<n;i++)
        {
            int k=heights[i]-heights[i-1];
            if(k>0) p.push(-k);
            if(p.size()>ladders) {bricks+=p.top(); p.pop();}
            if(bricks<0) return i-1;
        }
        
        return n-1;
        
    }
};