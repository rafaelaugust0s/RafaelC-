#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double total, userAmnt, D, Q, d, N, sum;
    total= 3.50;
     D= 1.00; 
     Q= .25;
     d= .10;
     N= .05;
     cout<< "Cost per twinkie is $3.50. ";
     cout <<endl;
     cout<< " Insert coins. Type D for Dime,Q for Quarter,d for dime, N for Nickle ";
     cin >> userAmnt;

        for(int i= 0; i<=total; i++){
             if(total == userAmnt){
             cout<< "Enjoy your twinkie";

             }else{
             cout<< "Insert coins!";
             }
        }

 
return 0;
}