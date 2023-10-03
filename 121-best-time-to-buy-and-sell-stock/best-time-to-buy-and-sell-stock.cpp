class Solution {
public:
    int maxProfit(vector<int>& prices) {
        

        int buy=prices[0];
        int sell;
        int profit=0;

        for(int i=1;i<prices.size();i++)
        {
            
        
            profit=max(profit,prices[i]-buy);
            buy=min(buy,prices[i]);
        }
        return profit;
    }
};