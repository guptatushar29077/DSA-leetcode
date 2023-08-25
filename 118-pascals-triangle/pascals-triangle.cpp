class Solution {
public:

vector<int> get(int n)
{
    vector<int> ans;
    ans.push_back(1);
    int val=1;
    for(int i=1;i<n;i++)
    {
        val*=(n-i);
        val/=i;
        ans.push_back(val);
    }
    return ans;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++)
        {
            vector<int> temp=get(i);
            ans.push_back(temp);
        }
        return ans;
        
    }
};