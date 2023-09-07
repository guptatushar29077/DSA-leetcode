class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        

        int val=nums[0];
        int idx=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                val=nums[i];
                idx++;
                nums[idx]=nums[i];
            }
        }
        return idx+1;
    }
};