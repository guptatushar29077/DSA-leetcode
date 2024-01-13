class Solution {
public:
    int countPrimes(int n) {
        
        int c=0;
        vector<bool> prime(n+1,true);
        prime[1]=false;
        for(int i=2;i*i<=n;i++)
        {
            if(i>2 && i%2==0)
            {
                continue;
            }
            if(prime[i])
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    prime[j]=false;
                }
            }
            
            
           
        }
        for(int i=1;i<n;i++)
            {
                if(prime[i])
                {
                    c++;
                }
            }
         return c;
    }
};