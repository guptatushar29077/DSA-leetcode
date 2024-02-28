class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int n=arr.size();
        if(n==1)
        {
            return 0;
        }
        if(arr[0]>arr[1])
        {
            return 0;
        }
        if(arr[n-1]>arr[n-2])
        {
            return n-1;
        }
        int st=1;
        int ed=n-2;
        int mid;
        while(st<=ed)
        {
            mid=st+(ed-st)/2;
            if(arr[mid]>arr[mid-1]  && arr[mid]>arr[mid+1])
            {
                return mid;
            }
            else if(arr[mid]>arr[mid-1])
            {
                st=mid+1;
            }
            else{
                ed=mid-1;
            }
        }
        return -1;
        
    }
};