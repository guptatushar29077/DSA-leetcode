class Solution {
public:

void get(vector<int> &arr,int idx,vector<int> &ds,vector<vector<int>>&ans)
{
    ans.push_back(ds);
    for(int i=idx;i<arr.size();i++)
    {
        if(i>idx && arr[i]==arr[i-1])
        {
            continue;
        }
        ds.push_back(arr[i]);
        get(arr,i+1,ds,ans);
        ds.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        get(nums,0,ds,ans);
        return ans;
    }
};