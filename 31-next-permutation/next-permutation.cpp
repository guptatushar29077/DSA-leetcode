class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int idx1=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i+1]>nums[i])
            {
                idx1=i;
                break;
            }
        }
        if(idx1==-1)
        {
            reverse(nums.begin(),nums.end());
            return ;
        }
        int idx2=0;
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]>nums[idx1])
            {
                idx2=i;
                break;
            }
        }
        swap(nums[idx1],nums[idx2]);
        reverse(nums.begin()+idx1+1,nums.end());
    }
};