class Solution {
public:
    int trap(vector<int>& height) {
        

        int n=height.size();
        if(n==0)
        {
            return 0;
        }
        int left=0;
        int right[n];
        right[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],height[i]);
        }
        int qty=0;
        for(int i=0;i<n;i++)
        {
            left=max(left,height[i]);
            int mm=min(left,right[i]);
            qty=qty+(mm-height[i]);
        }
        return qty;
    }
};