class Solution {
public:
    int countSubstrings(string s) {
      int plain=0 ; 
        for (int i = 0 ; i<s.length(); i++){
            count(i,i,s,plain) ;
            count(i,i+1,s,plain);
            
        }
        
        return plain ; 
    }
    void count(int left , int right , string s , int &plain    ){
        while  (left>=0 && right<s.length() && s[left]==s[right]){
            left-- ; 
            right++; 
            plain++ ; 
        }
           
        
    }
};
