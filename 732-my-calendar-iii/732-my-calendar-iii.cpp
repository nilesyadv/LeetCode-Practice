class MyCalendarThree {
public:
    MyCalendarThree() {
        
    }
    map<int, int> m;
    
    int book(int start, int end) {
        m[start]++;
        m[end]--;
        int booked = 0;
        int ans = 0;
        for(auto i: m)
        {
           booked += (i.second);
           ans = max(ans, booked);
        }
        return ans;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */