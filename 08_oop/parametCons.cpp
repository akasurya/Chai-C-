#include <iostream>
#include <vector>
 
using namespace std;
 
class Chai {
public:
    string teaName ;
    int servings ;
    vector<string> ingredients ;
    // default Contructor
    Chai(string Name , int Serv , vector<string>ingr){
        teaName = Name;
        servings = Serv;
        ingredients = ingr;
        cout<<" parameter contructor called" << endl ;
    }

     void displayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: " ;
            for(string ingridient : ingredients){
                cout << ingridient << " ";
            }
            cout << endl;
        }
};

int main() 
{
    Chai lemontea ("lemon tea" , 2 , {"water","lemon","Honey"});

    lemontea.displayChaiDetails();
 return 0;
}