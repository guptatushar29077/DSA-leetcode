class Solution {
public:
    int search(vector<int>& nums, int target) {
        

    
        int mid;
        int st=0;
        int ed=nums.size()-1;
        while(st<=ed)
        {   
            mid=st+(ed-st)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>=nums[0])
            {
                if(target>=nums[st] && target<=nums[mid])
                {
                    ed=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            else if(nums[mid]<nums[0]){
                if(nums[mid]<=target && target<=nums[ed])
                {
                    st=mid+1;
                }
                else{
                    ed=mid-1;
                }
            }
        }
        return -1;
    }
};