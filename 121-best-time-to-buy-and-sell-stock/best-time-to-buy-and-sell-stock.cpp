class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int buy=nums[0];
        int profit=0,cost;
        for(int i=1;i<nums.size();i++)
        {
            cost=nums[i]-buy;
            buy=min(nums[i],buy);
            profit=max(profit,cost);
        }
        return profit;
        
    }
};