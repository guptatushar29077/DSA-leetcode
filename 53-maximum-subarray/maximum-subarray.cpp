class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        

        long long curr=0;
        long long mx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            curr+=nums[i];
            mx=max(curr,mx);
            if(curr<0)
            {
                curr=0;
            }
        }
        return (int)mx;
    }
};