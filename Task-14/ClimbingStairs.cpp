class Solution {
public:
    int climbStairs(int n) {
        int x = 1 , y = 1 , sum  ; 
        n-- ; 
        while  (n--){
            sum = x +y ; 
            x = y ; 
            y = sum ; 
            
        }
        return sum ; 
        
    }
};
