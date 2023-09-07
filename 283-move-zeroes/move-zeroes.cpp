class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        

        int n=nums.size();
        int idx=n;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                idx=i;
                break;
            }
        }
        for(int i=idx+1;i<n;i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[idx]);
                idx++;
            }
        }
    }
};