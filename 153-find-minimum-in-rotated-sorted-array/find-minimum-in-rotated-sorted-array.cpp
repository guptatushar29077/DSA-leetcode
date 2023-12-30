class Solution {
public:
    int findMin(vector<int>& arr) {

        int st=0;
        int ed=arr.size()-1;
        int mid;
        int pot=arr[0];
        while(st<=ed)
        {   

            mid=st+(ed-st)/2;
            if(arr[mid]>=arr[0])
            {
                st=mid+1;
            }
            else{
                pot=arr[mid];
                ed=mid-1;
            }

        }
        return pot;
        
    }
};