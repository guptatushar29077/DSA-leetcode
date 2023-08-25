class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int x=0;
        int o=0;
        int t=nums.size()-1;
        while(o<=t)
        {
            if(nums[o]==0)
            {
                swap(nums[o],nums[x]);
                x++;
                o++;
            }
            else if(nums[o]==2)
            {
                swap(nums[o],nums[t]);
                t--;
            }
            else{
                o++;
            }
        }
    }
};