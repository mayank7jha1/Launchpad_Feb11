class MedianFinder {
public:
    priority_queue<int>maxi;
    priority_queue<int, vector<int>, greater<int>>mini;

    MedianFinder() {

    }

    void addNum(int num) {
        maxi.push(num);
        mini.push(maxi.top());
        maxi.pop();

        if (mini.size() > maxi.size()) {
            maxi.push(mini.top());
            mini.pop();
        }
    }


    double findMedian() {

        if ((maxi.size() + mini.size()) % 2 == 0) {
            double ans = (double)((maxi.top() + mini.top()) / 2);
            return ans;
        }

        return maxi.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */