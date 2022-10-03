class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int totalCost = neededTime[0], maxCost = neededTime[0], totalMaxCost = neededTime[0];
        
        for(int i = 1; i < neededTime.size(); i++){
            if(colors[i] != colors[i-1]){
                maxCost = neededTime[i];
                totalCost += neededTime[i];
                totalMaxCost += maxCost;
                continue;
            }
            totalCost += neededTime[i];
            totalMaxCost -= maxCost;
            maxCost = max(maxCost, neededTime[i]);
            totalMaxCost += maxCost;
        }
        return totalCost - totalMaxCost;
    }
};