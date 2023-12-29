class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
        {
            return x;
        }
       int st=0;
       int ed=x;
       int mid;
       int pot;
       while(st<=ed)
       {
           int mid=st+(ed-st)/2;
           
           if(mid==x/mid)
           {
               return mid;
           }
           else if(mid>x/mid)
           {
               ed=mid-1;
           }
           else{
               st=mid+1;
               pot=mid;
           }
       }
       return pot;
        
    }
};