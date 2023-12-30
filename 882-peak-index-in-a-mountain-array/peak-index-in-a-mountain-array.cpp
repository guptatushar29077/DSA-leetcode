class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {


        int st=0;
        int ed=arr.size()-1;
        int mid;
        while(st<=ed)
        {   
            mid=ed+(st-ed)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                return mid;
            }
            else if(arr[mid-1]<arr[mid])
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