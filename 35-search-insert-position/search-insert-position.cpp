class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n=nums.size();
        if(target>nums[n-1])
        {
            return n;
        }
        int st=0;
        int ed=nums.size()-1;
        int mid;
        int pot;
        while(st<=ed)
        {
            mid=st+(ed-st)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]<target)
            {
                st=mid+1;
            }
            else{
                pot=mid;
                ed=mid-1;
            }
        }
        return pot;
    }
};