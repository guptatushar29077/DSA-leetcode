class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        

        int ele1=INT_MIN,ele2=INT_MIN;
        int cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==ele1)
            {
                cnt1++;

            }
            else if(nums[i]==ele2)
            {
                cnt2++;
            }
            else if(cnt1==0)
            {
                cnt1=1;
                ele1=nums[i];
            }
            else if(cnt2==0)
            {
                cnt2=1;
                ele2=nums[i];
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
          
        int freq1=0,freq2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==ele1)
            {
                freq1++;
            }
            else if(nums[i]==ele2)
            {
                freq2++;
            }
        }
        vector<int> ans;
        int n=nums.size();
        if(freq1>(n/3))
        {
            ans.push_back(ele1);
        }
        if(freq2>(n/3))
        {
            ans.push_back(ele2);
        }
        return ans;
    }
};