class Solution {
public:
    int minPartitions(string n) {
        int size=n.size();
        char c=n[0];
        for(int i=1;i<size;i++) if(n[i]>c) c=n[i];
        return (int)(c-'0');
    }
};