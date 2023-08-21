class Solution {
public:
bool check(string str,int in,int ed)
{
    while(in<ed)
    {
        if(str[in]==str[ed])
        {
            in++;
            ed--;
        }
        else{
            return false;
        }
    }
    return true;
}


void get(string str,vector<vector<string>>&ans,vector<string> &help,int idx)
{
    if(idx==str.size())
    {
        ans.push_back(help);
        return ;
    }
    for(int i=idx;i<str.size();i++)
    {
        if(check(str,idx,i))
        {
            help.push_back(str.substr(idx,i-idx+1));
            get(str,ans,help,i+1);
            help.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        

        vector<vector<string>> ans;
        vector<string> help;
        get(s,ans,help,0);
        return ans;
    }
};