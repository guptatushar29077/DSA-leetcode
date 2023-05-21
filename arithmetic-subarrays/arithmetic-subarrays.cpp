class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        


        vector<bool> ans;
        for(int i=0;i<l.size();i++)
        {
            vector<int> help;
            for(int j=l[i];j<=r[i];j++)
            {
                help.push_back(nums[j]);
            }
            sort(help.begin(),help.end());
           int d=0;
            for(int j=1;j<help.size();j++)
            {
                if(j==1)
                {
                    d=help[j]-help[j-1];
                }
                else if(d!=help[j]-help[j-1])
                {
                    ans.push_back(false);
                    break;
                }
                 if(j+1==help.size())
                {
                    ans.push_back(true);
                }
            }
            
        
        }
        return ans;
    }
};