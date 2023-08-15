class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
            vector<vector<int>> ans;

        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i-1]==nums[i])
            {
                continue;
            }
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                long long target=nums[i];
                target+=nums[j];
                target+=nums[k];
                if(target==0)
                {
                    vector<int> temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                      j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])
                    {
                        j++;
                    } 
                    while(j<k && nums[k]==nums[k+1])
                    {
                        k--;
                    }
                }
                else if(target>0)
                {
                    k--;
                }
                else{
                    j++;
                }
              
            }
        }
            return ans;

    }
};