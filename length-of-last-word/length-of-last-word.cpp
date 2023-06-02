class Solution {
public:
    int lengthOfLastWord(string s) {

       int count=0;
       int st=s.size()-1;
       while(   st>=0 && s[st]==' ')
       {
           st--;
       }
       for(int i=st;i>=0;i--)
       {
           if(s[i]==' ')
           {
               return count;
           }
           count++;
       }
       return count; 
    }
};