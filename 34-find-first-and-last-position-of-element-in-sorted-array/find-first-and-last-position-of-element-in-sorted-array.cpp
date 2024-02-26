class Solution {
public:
int first(vector<int> arr,int n,int target)
{
    int st=0;
    int mid;
    int ed=n-1;
    int pot=-1;
    while(st<=ed)
    {   
        mid=st+(ed-st)/2;
        if(arr[mid]==target)
        {
            pot= mid;
            ed=mid-1;
        }
        else if(arr[mid]<target){
            st=mid+1;
        }
        else{
            ed=mid-1;
        }
    }
    return pot;
}
int last(vector<int> arr,int n,int target)
{
    int st=0;
    int mid;
    int ed=n-1;
    int pot=-1;
    while(st<=ed)
    {   
        mid=st+(ed-st)/2;
        if(arr[mid]==target)
        {
            pot= mid;
            st=mid+1;
        }
        else if(arr[mid]>target){
            ed=mid-1;;
        }
        else{
            st=mid+1;
        }
        
    }
    return pot;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n=nums.size();
        return {first(nums,n,target),last(nums,n,target)};

    }
};