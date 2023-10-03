class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        


        map<int,int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int val1=nums[i];
            int val2=target-nums[i];
            if(m.find(val2)!=m.end())
            {
                ans.push_back(m[val2]);
                ans.push_back(i);
                return ans;
            }
            m[val1]=i;
        }
        return ans;
    }
    
};