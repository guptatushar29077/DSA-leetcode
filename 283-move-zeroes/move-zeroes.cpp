class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        

        int idx=-1;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {   
            if(arr[i]==0){
                idx=i;
                break;
            }

        }
        if(idx==-1)
        {
            return ;
        }
        for(int i=idx+1;i<n;i++)
        {
            if(arr[i]!=0)
            {
                swap(arr[i],arr[idx]);
                idx++;
            }
        }
        
    }
};