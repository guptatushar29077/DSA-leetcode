class Solution {
public:

    vector<int> permu(int r)
    {
        vector<int> temp;
        temp.push_back(1);
        long long ans=1;
        for(int i=1;i<r;i++)
        {
            ans*=(r-i);
            ans/=(i);
            temp.push_back(ans);
        }
        return temp;

    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++)
        {   
            vector<int> help=permu(i);
                ans.push_back(help);
            
        }
    return ans;

    }
};