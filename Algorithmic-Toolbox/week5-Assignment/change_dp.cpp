#include <iostream>

int get_change(int coins[],int m) {
    int result = m ;
    if (m==0)
        return 0 ;
    for (int i = 0 ; i<3 ; i++){
        if (coins[i]<=m){
            int sub = 1+ get_change(coins , (m-coins[i])) ;


            if (sub<result)
                result=sub ;

        }
        return result ;
    }

    int main() {
        int m;
        int coins[3]={1,3,4};
        std::cin >> m;
        std::cout << get_change(coins,m) << '\n';
    }
