class Solution {
public:
    int search(vector<int>& arr, int target) {

        if( target==arr[0])
        {
            return 0;
        }
        int st=0;
        int ed=arr.size()-1;
        int mid;
        while(st<=ed)
        {
            mid=st+(ed-st)/2;
            if(arr[mid]==target)
            {
                return mid;
            }
            else if(arr[mid]>=arr[0])
            {
                if(target>=arr[st] && arr[mid]>target)
                {
                    ed=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            else 
            {
                if(target>arr[mid] && target<=arr[ed])
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