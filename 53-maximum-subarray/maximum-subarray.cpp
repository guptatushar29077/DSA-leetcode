class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        

        int curr=0;
        int mx=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            curr+=nums[i];
            mx=max(mx,curr);
            if(curr<0)
            {
                curr=0;
            }
        }
    return mx;
    }
};