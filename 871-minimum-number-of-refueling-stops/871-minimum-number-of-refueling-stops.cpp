class Solution {
    //minStops()
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> p;
        int stationsNeeded = 0, xCurrent = startFuel;
        stations.push_back({target, 0});
        
        for(int i = 0; i < stations.size(); i++)
        {
            int xNextStation = stations[i][0];
            int fuelAtStation = stations[i][1];
            while(xCurrent < xNextStation)
            {
                if(p.size() == 0) return -1;
                xCurrent += p.top();
                p.pop();
                stationsNeeded ++;
            }
            p.push(fuelAtStation);
        }
        return stationsNeeded;
        
    }
}; 