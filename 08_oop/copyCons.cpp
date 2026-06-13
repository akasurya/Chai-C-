#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    string *teaName;
    int servings;
    vector<string> ingredients;
    // default Contructor
    Chai(string Name, int Serv, vector<string> ingr)
    {
        teaName = new string(Name);
        servings = Serv;
        ingredients = ingr;
        cout << " parameter contructor called" << endl;
    }
    
    Chai(const Chai& other){
        teaName = new string(*other.teaName);
        servings = other.servings;
        ingredients = other.ingredients;
        cout << "copy constructor calle" << endl;

    }

    ~Chai()
    {
        delete teaName;
        cout << "Destructor called" << endl;
    }

    void displayChaiDetails()
    {
        cout << "Tea Name: " << *teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";
        for (string ingridient : ingredients)
        {
            cout << ingridient << " ";
        }
        cout << endl;
    }
};

int main()
{
    Chai lemontea("lemon tea", 2, {"water", "lemon", "Honey"});
    //lemontea.displayChaiDetails();

    // copy the object
    Chai copyTea = lemontea;
   // copyTea.displayChaiDetails();

    *lemontea.teaName = "modified Lemon Tea";

    cout << "lemon Tea -----" << endl ;
    lemontea.displayChaiDetails();
    cout << "copied Tea----- " << endl ;
    copyTea.displayChaiDetails();

    return 0;//
}