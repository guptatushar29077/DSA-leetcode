class Solution {
public:
    bool check(vector<int>& nums) {


        int pair=0;
        int n=nums.size();
        for(int i=1;i<nums.size();i++)
        {
            
          if(nums[i-1]>nums[i])
          {
                pair++;
          }
        }
        if(nums[0]<nums[n-1])
        {
            pair++;
        }
        if(pair>=2)
        {
            return 0;
        }
        else if(pair==1)
        {
            return 1;
        }
        
        return 1;
    }
};