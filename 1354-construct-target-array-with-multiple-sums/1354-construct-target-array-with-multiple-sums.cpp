class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int> p;
        long long totalSum=0,n=target.size();
        if(n==1)
        {
            if(target[0]==1) return true;
            else return false;
        }
        for(int i=0;i<n;i++)
        {
            totalSum+=target[i];
            p.push(target[i]);
        }
        
        while(p.top()!=1)
        {
            long long remSum=totalSum-p.top();
            long long reqSum=p.top()-remSum;
            if(reqSum<=0) return false;
            if(p.top()%remSum) reqSum=p.top()%remSum;
            else reqSum=remSum;
            totalSum=totalSum-p.top()+reqSum;
            p.pop();
            p.push(reqSum);
        }
        return true;
    }
};