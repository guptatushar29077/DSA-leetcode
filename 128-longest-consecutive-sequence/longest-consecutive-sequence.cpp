class Solution {
public:
    int longestConsecutive(vector<int>& nums) {


        if(nums.size()==0)
        {
            return 0;
        }   
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        int ans=0;
       for(auto it:st)
       {
           if(st.find(it-1)==st.end())
           {
               int cnt=1;
              int val=it+1;
               while(st.find(val)!=st.end())
               {
                   val=val+1;
                   cnt++;
               }
               ans=max(ans,cnt);
           }
       }
       return ans;
    }
};