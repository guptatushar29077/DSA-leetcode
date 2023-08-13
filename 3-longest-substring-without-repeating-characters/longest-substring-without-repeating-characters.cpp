class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int ans=0;
        int low=0;
        int high=0;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(m.find(ch)!=m.end())
            {
                int val=m[ch];
                low=max(low,val+1);
            }
            ans=max(ans,(high-low+1));
            high++;
            m[ch]=i;
        }
        return ans;
    }
};