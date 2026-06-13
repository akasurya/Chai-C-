#include <iostream>
#include <string>
 
using namespace std;
 
int main() 
{
  int teacups ;
  cout << "enter quantity" << endl ;
  cin >> teacups ; 
  
  while (teacups > 0) 
  {
      teacups --;
      cout << "serving cup of tea \n" << teacups  << " remaining "<< endl ;
      
    }
    cout << "All tea are serverd" << endl ;

 return 0;
}