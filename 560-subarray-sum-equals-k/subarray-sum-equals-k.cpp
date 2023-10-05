class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        

        map<int,int> m;
        m[0]=1;
        int curr=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            curr+=nums[i];
            ans=ans+m[curr-k];
            m[curr]+=1;
        }
        return ans;
    }
};