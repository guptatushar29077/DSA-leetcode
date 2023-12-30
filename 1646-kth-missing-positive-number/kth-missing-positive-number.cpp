class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        

        int st=0;
        int ed=arr.size()-1;
        int pot=arr.size();
        int mid;
        while(st<=ed)
        {
            mid=st+(ed-st)/2;
            if(arr[mid]-mid-1 >=k)
            {
                pot=mid;
                ed=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return pot+k;
    }
};