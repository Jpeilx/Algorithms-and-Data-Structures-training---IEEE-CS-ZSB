                                 //  In the name of of Allah  //
                      //O Allah, peace and blessings upon the Prophet Muhammad//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
long long Maxfast (vector <int>&vec ){
    sort(vec.begin(),vec.end());
    return  (long long)vec[vec.size()-1]*vec[vec.size()-2];
}
long long Maxslow (vector<int>&vec){
    int n = vec.size();
    long long result = 0 ;
    for (int i = 0 ; i<n ;i++)
        for (int j = i+1  ; j<n ; j++){
            if (vec[i]*vec[j]>result)
                result =(long long )vec[i]*vec[j];

        }
    return result ;


}
int main(){

    cin.tie(0);
    ios::sync_with_stdio(0);
    while (true){
        int n = rand()%(100)+2 ;
        vector<int>vec ;
        for (int i = 0  ; i<n ; i++){
            vec.push_back(rand()%200000);
            cout<<vec[i]<<" ";
        }
        cout<<endl;
        if (Maxfast(vec)!= Maxslow(vec)){
            cout<<"wrong Answer "<<Maxfast(vec)<<"  "<<Maxslow(vec)<<endl;
            break ;
        }
        else
            cout<<"ok\n"; 


    }
}
