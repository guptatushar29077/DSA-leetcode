class Solution {
public:


    int first(vector<int> arr,int target)
    {
        int st=0;
        int ed=arr.size()-1;
        int mid;
        int first=-1;
        while(st<=ed)
        {
            mid=st+(ed-st)/2;
            if(arr[mid]==target)
            {
                first=mid;
                ed=mid-1;
            }
            else if(arr[mid]>target)
            {
                ed=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return first;
    }
     int last(vector<int> arr,int target)
    {
        int st=0;
        int ed=arr.size()-1;
        int mid;
        int first=-1;
        while(st<=ed)
        {
            mid=st+(ed-st)/2;
            if(arr[mid]==target)
            {
                first=mid;
                st=mid+1;
            }
            else if(arr[mid]>target)
            {
                ed=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return first;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(first(nums,target));
        ans.push_back(last(nums,target));
        return ans;
        
    }
};