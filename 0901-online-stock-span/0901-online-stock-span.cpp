class StockSpanner {
public:
    vector<pair<int, int>> v;
    StockSpanner() {

    }
    
    int next(int price) {
        if(v.size() == 0)
        {
            v.push_back({price, 1});
            return 1;
        }
        else
        {
            int cnt = 1;
            int index = v.size() - 1;
            while(true)
            {
                if(index < 0) break;
                if(v[index].first <= price)
                {
                    cnt += v[index].second;
                    index -= v[index].second;
                }
                else break;
            }
            v.push_back({price, cnt});
            return cnt;
        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */