class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0 , bestbuy = prices[0];
        for(int i = 1;i<prices.size();i++){
            if(bestbuy < prices[i]){
                maxProfit = max(maxProfit , prices[i]-bestbuy);
            }
            bestbuy = min(bestbuy , prices[i]);
        }
        return maxProfit;
    }
};