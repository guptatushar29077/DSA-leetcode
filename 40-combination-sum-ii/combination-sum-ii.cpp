class Solution {
public:



    void combine(int idx,int target,vector<int> &arr,vector<int> &temp,vector<vector<int>> &ans)
    {
      if(target==0)
      {
          ans.push_back(temp);
          return ;
      }
      for(int i=idx;i<arr.size();i++)
      {
          if(i>idx && arr[i]==arr[i-1])
          {
              continue;
          }
          if(arr[idx]>target)
          {
              break;
          }
          temp.push_back(arr[i]);
          combine(i+1,target-arr[i],arr,temp,ans);
          temp.pop_back();
          
      }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {


        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        combine(0,target,candidates,temp,ans);
        return ans;   
    }
};