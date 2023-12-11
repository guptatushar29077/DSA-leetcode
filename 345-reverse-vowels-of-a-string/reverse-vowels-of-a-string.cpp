class Solution {
public:
    bool isvovel(char ch)
    {
        if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' ||        ch=='o' || ch=='O' || ch=='u' || ch=='U')
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        

        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            bool temp1=isvovel(s[i]);
            bool temp2=isvovel(s[j]);
            if(temp1 && temp2)
            {   
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!temp1 && temp2)
            {
                i++;
            }
            else if(temp1 && !temp2 )
            {
                j--;
            }
            else{
                i++;
                j--;
            }
        }
        return s;
    }
};