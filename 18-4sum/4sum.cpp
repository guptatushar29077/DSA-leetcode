class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        

        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            for(int j=i+1;j<n;j++)
            {
                if(j!=i+1 && nums[j]==nums[j-1])
                {
                    continue;
                }
                int k=j+1;
                int l=n-1;
                while(k<l)
                {
                    long long sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum==target)
                    {
                        vector<int> help={nums[i],nums[j],nums[k],nums[l]};
                        k++;
                        l--;
                        ans.push_back(help);
                        while(k<l && nums[k]==nums[k-1])
                        {
                            k++;
                        }
                        while(k<l && nums[l]==nums[l+1])
                        {
                            l--;
                        }
                    }
                    else if(sum<target)
                    {
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        return ans;
    }
};