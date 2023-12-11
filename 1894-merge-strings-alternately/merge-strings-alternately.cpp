class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string ans="";
        int i=0;
        int j=0;
        bool flag=true;
        while(i<word1.size() && j<word2.size())
        {
            if(flag)
            {
                ans+=word1[i];
                i++;
            }
            else{
                ans+=word2[j];
                j++;
            }
            flag=!flag;
        }
        while(i<word1.size())
        {
                ans+=word1[i];
                i++;
        }
        while(j<word2.size())
        {
            ans+=word2[j];
                j++;
        }
        return ans;

        
    }
};