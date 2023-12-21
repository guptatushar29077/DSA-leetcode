class Solution {
public:
    bool isPalindrome(int x) {


        if(x<0)
        {
            return false;
        }
        int temp=x;
        int ans=0;
        while(x!=0)
        {
            int rem=x%10;
            x/=10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10)
            {
                return 0;
            }
            ans=ans*10+rem;
        }   
        if(ans==temp)
        {
        return 1;
        }
        return 0;
    }
    
};