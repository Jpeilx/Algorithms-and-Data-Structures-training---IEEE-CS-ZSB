class Solution {
public:
    string longestPalindrome(string s) {
        string res ; 
        for (int i = 0 ; i<s.length() ; i++){
            palin(s,i,i,res);
            palin(s,i,i+1,res);
            
            
        }
        return res ; 
        
    }
void palin (string s , int left  , int right  , string &res ){
    while (left>=0  &&  right<s.length() && s[left]==s[right]){
        if (res.length()<right-left+1)
            res=s.substr(left,right-left+1) ; 
        left-- ; 
        right++; 
           
    }
   
    
    
}
};
