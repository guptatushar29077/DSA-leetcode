class Solution {
public:

vector<int> help(int n)
{
    vector<int> ans;
    ans.push_back(1);
    int a=1;
    for(int i=1;i<n;i++)
    {
        a=a*(n-i);
        a/=(i);
        ans.push_back(a);
    }
    return ans;
}
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++)
        {
            vector<int> temp=help(i);
            ans.push_back(temp);
            
        }
        return ans;
        
    }
};