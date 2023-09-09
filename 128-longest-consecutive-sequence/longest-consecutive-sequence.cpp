class Solution {
public:
    int longestConsecutive(vector<int>& nums) {


            if(nums.size()==0)
            {
                return 0;
            }
            int c=1;
            int ans=0;
            unordered_set<int> st;
            for(int i=0;i<nums.size();i++)
            {
                st.insert(nums[i]);
            }
            for(auto it:st)
            {
                if(st.find(it-1)==st.end())
                {
                    int val=it+1;
                    c=1;
                    while(st.find(val)!=st.end())
                    {
                        c++;
                        val++;
                    }
                    ans=max(ans,c);
                }
            }

            return ans;

    }

};