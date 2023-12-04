class Solution {
public:
    bool check(vector<int>& arr) {

        int n=arr.size();
        int cnt=0;
        for(int i=1;i<n;i++)
        {
           
            
                if(arr[i-1]>arr[i])
                {
                    cnt++;
                }
            
        }
        if(arr[n-1]>arr[0])
        {
            cnt++;
        }
        if(cnt<=1)
        {
            return 1;
        }
        else return 0;
        
    }
};