class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int profit=0;
        int sell;
        int cost;
        for(int i=1;i<prices.size();i++)
        {
            sell=prices[i];
            cost=sell-buy;
            profit=max(profit,cost);
            buy=min(buy,prices[i]);
        }
        return profit;
    }
};