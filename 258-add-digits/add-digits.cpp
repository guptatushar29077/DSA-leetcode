class Solution {
public:
    int sum(int n)
    {
        int cnt=0;
        while(n!=0)
        {
            cnt+=n%10;
            n/=10;
        }
        return cnt;
    }
    int addDigits(int num) {

        if(num==0)
        {
            return 0;
       
        }
    
        while(num>9)
        {
            int cnt=sum(num);
            num=cnt;
            
        }
        return num;
    }
};