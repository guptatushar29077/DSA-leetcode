class Solution {
public:
    int bitwiseComplement(int n) {
        

        if(n==0)
        {
            return 1;
        }
        int mul=1;
        int ans=0;
        while(n!=0)
        {
            int last_bit=n&1;
            n=n>>1;
            if(last_bit==0)
            {
                ans=ans+mul;
            }
            mul=mul*2;
        }
        return ans;
    }
};