class Solution {
public:
    int bitwiseComplement(int n) {
        
        if(n==0)
        {
            return 1;
        }
        int ans=0;
        int mul=1;
        while(n!=0)
        {
            int bit=n&1;
            n=n>>1;
            if(bit==0)
            {
                ans=ans+mul*1;
            }
            
            mul*=2;
        }
        return ans;
    }
};