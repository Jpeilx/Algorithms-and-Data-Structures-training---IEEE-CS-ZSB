class Solution {
public:
    int countSubstrings(string s) {
      int plain=0 ; 
        for (int i = 0 ; i<s.length(); i++){
            plain+=count(i,i,s,0) ;
            plain+=count(i,i+1,s,0);
            
        }
        
        return plain ; 
    }
    int count(int left , int right , string s , int plain    ){
        if (left<0 || right>=s.length() || s[left]!=s[right])
            return 0 ;
        if (s[left]==s[right]){
        plain =  1 + count(left-1,right+1,s,plain); 
            
        }
        return plain ; 
        
    }
};
