class Solution {
public:
int rev(int x)
{
    int ans=0;
        int rem;
        while(x!=0)
        {
            rem=x%10;
            x/=10;
            if((ans>INT_MAX/10)  || ans<INT_MIN/10)
            {
                return 0;
            }
            ans=ans*10+rem;
        }
        return ans;
}
    bool isPalindrome(int x) {

        if(x<0)
        {
            return 0;
        }
        if(x==0)
        {
            return 1;
        }
        int temp=rev(x);
        if(temp==0)
        {
            return 0;
        }
        if(temp==x)
        {
            return 1;
        }
        else{
            return 0;
        }

        
    }
};