class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n<=0)
        {
            return 0;
        }
        while(n!=1)
        {
            int rem=n%2;
            if(rem==1)
            {
                return 0;
            }
            n/=2;
        }
        return 1;
    }
};