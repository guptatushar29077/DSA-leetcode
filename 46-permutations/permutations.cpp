class Solution {
public:
void get(vector<vector<int>> &ans,vector<int> &ds,int arr[],int n,vector<int>&nums)
{
    if(ds.size()==n)
    {
        ans.push_back(ds);
        return ;
    }
    for(int i=0;i<nums.size();i++)
    {
        if(arr[i]==0)
        {
            ds.push_back(nums[i]);
            arr[i]=1;
            get(ans,ds,arr,n,nums);
            arr[i]=0;
            ds.pop_back();
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
      int n=nums.size();
      vector<vector<int>> ans;
      int arr[n];
      for(int i=0;i<n;i++)
      {
          arr[i]=0;
      }
      vector<int> help;
      get(ans,help,arr,n,nums);
      return ans;  
    }
};