class MedianFinder {
public:
    priority_queue<int> left, right;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(left.size() == 0 && right.size() == 0) left.push(num);
        else if(left.size() && right.size() == 0)
        {
            if(left.top() > num)
            {
                right.push(-1*left.top());
                left.pop();
                left.push(num);
            }
            else right.push(-1*num);
        }
        else
        {
            if(num <= left.top())
            {
                if(left.size() <= right.size()) left.push(num);
                else 
                {
                    right.push(-1*left.top());
                    left.pop();
                    left.push(num);
                }
            }
            else if(num >= -1*right.top())
            {
                if(right.size() <= left.size()) right.push(-1*num);
                else 
                {
                    left.push(-1*right.top());
                    right.pop();
                    right.push(-1*num);
                }
            }
            else
            {
                if(left.size() <= right.size()) left.push(num);
                else
                {
                    right.push(-1*num);
                }
            }
        }
    }
    
    double findMedian() {
        if(left.size() > right.size()) return left.top();
        else if(right.size() > left.size()) return -1*right.top();
        else return (left.top() + (-1*right.top())) / 2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */