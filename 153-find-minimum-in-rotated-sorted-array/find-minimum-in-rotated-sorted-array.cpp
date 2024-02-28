class Solution {
public:
    int findMin(vector<int>& arr) {
        int pot=arr[0];
        int st=0;
        int n=arr.size();
        int ed=n-1;
        if(n==1)
        {
            return arr[0];
        }
        int mid;
        while(st<=ed)
        {
            mid=st+(ed-st)/2;
            if(arr[0]<=arr[mid])
            {
                st=mid+1;
            }
            else{
                ed=mid-1;
                pot=arr[mid];
            }
        }
        return pot;
    }
};