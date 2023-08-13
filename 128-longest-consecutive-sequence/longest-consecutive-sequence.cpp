class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st;
        if(nums.size()==0)
        {
            return 0;
        }
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        int ans=INT_MIN;
        for(auto it:st)
        {
            if(st.find(it-1)==st.end())
            {
                int cnt=1;
                int val=it;
                while(st.find(val+1)!=st.end())
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