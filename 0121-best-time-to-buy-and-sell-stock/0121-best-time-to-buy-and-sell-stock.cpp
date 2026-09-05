class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy = prices[0];
        int mx = 0 ;
        for(int i=1;i<prices.size();i++){
            mx = max(mx, prices[i]-bestbuy);
            if(prices[i]<bestbuy){
                bestbuy = prices[i];
            }
        }
        return mx;
    }
};