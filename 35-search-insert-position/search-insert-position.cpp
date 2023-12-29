class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        

        int st=0;
        int ed=nums.size()-1;
        int pot=nums.size();
        int mid;
        while(st<=ed)
        {
            mid=st+(ed-st)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                pot=mid;
                ed=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return pot;
    }
};