
//intro of array and printing using for loop
#include <iostream>


using namespace std;
 
int main() 
{
    int chaiTemparature [5] = {85,90,88,92,89} ;
    cout << "chai Temparature:\n" ;

    for ( int i=0 ; i<5 ; i++){
        cout << chaiTemparature[i] << "degree \n" ;
    }


 return 0;
}