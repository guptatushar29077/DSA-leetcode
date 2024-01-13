class Solution {
public:
bool is(vector<int> v)
{
    int n=v.size();
    if(n==2) return 1;
    int d=v[1]-v[0];
    for(int i=2;i<n;i++)
    {
        if(d!=v[i]-v[i-1])
        {
            return 0;
        }
    }
    return 1;
}
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n=l.size();
        vector<bool> ans;
        for(int i=0;i<n;i++)
        {
            vector<int> v;
            int a=l[i];
            int b=r[i];
            for(int j=a;j<=b;j++)
            {
                v.push_back(nums[j]);
            }
            sort(v.begin(),v.end());
            if(is(v))
            {
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
        
    }
};