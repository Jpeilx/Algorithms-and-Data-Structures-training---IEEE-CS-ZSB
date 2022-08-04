class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
       vector <int> all (amount+1 , (int)1e6) ; 
       all[0]=0 ; 
       for (int i = 1 ; i<amount+1 ; i++){
           for (int j = 0 ; j<coins.size() ; j++){
               if (i - coins[j]>=0){
                   all[i]=min(all[i],1+all[i-coins[j]]) ;
               }
           }
       }
        if (all[amount]==(int)1e6)
            return -1 ; 
        return all[amount];
    }
};
