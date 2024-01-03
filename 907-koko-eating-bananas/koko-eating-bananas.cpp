class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {


        int st=0;
        int ed=0;
        long long s=0;
        for(int i=0;i<piles.size();i++)
        {
            ed=max(ed,piles[i]);
            s+=piles[i];
        
        }
        st=s/h;
        int mid;
        int pot;
        if(st==0)
        {
            st=1;
        }
        while(st<=ed)
        {
            mid=st+(ed-st)/2;
            int ans=0;

            for(int i=0;i<piles.size();i++)
            {
                ans+=piles[i]/mid;
                if(piles[i]%mid)
                {
                    ans++;
                }
                
            }
            if(ans>h)
            {
                st=mid+1;
            }
            else{
                ed=mid-1;
                pot=mid;
            }
        }
        return pot;
        
    }
};