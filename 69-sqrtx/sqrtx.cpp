class Solution {
public:
    int mySqrt(int x) {
        if(x==1)
        {
            return 1;
        }
        long long temp=1;
        while(temp*temp<=x)
        {
            temp++;
        }
        return temp-1;
        
    }
};