class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxp = 0;
        for(int i=1;i<n;i++){
            int minel = *min_element(prices.begin(), prices.begin()+i);
            int currp = prices[i] - minel;
            maxp = max(currp, maxp);
        }
        return maxp;
    }
};
