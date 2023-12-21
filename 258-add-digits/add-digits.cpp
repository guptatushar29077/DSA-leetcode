class Solution {
public:
int count(int n)
{
    int c=0;
    while(n!=0)
    {
        c++;
        n/=10;
    }
    return c;
}
    int addDigits(int num) {
        
        if(num==0)
        {
            return 0;
        }

        int ans;
        int temp=num;
        do
        {   
               ans=0;
            while(num!=0)
            {
                int last_digit=num%10;
                num/=10;
                ans=ans+last_digit;
            }
            num=ans;
            
        }while(count(ans)>1);
        
        return ans;
        
        
        
    }
};