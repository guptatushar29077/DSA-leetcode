class Solution {
public:
    int maxDistance(vector<int>& stalls, int k) {
        

        sort(stalls.begin(),stalls.end());
        int st=1;
        int n=stalls.size();
        int ed=stalls[n-1]-stalls[0];
        int mid;
        int pot;
        while(st<=ed)
        {
            mid=st+(ed-st)/2;
            int count=1;
            int pos=stalls[0];
            for(int i=1;i<stalls.size();i++)
            {
                if(pos+mid<=stalls[i])
                {
                
                    pos=stalls[i];
                    count++;
                }
            }
            if(count<k)
            {
                ed=mid-1;
            }
            else{
                pot=mid;
                st=mid+1;
            }
        }
        return pot;
    }
};