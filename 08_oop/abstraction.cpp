#include <iostream>
#include <string>
 
using namespace std;

class Tea { 
    public:
        virtual void prepareIngredients() = 0; // pure virtual function
        virtual void brew() = 0; // pure virtual function
        virtual void serve() = 0; // pure virtual function

        void makeTea(){
            prepareIngredients();
            brew();
            serve();
        }
};

//derived class

class GreenTea : public Tea {
    public:
        void prepareIngredients() override {
            cout << "green leaves and water is ready" << endl ;
        }
        
        void brew() override {
            cout << "Tea brewed" << endl ;
        }
        
        void serve() override {
            cout << "Green Tea served" << endl ;
        }
    };

class MasalaTea : public Tea {
    public:
        void prepareIngredients() override {
            cout << "green leaves and water is ready along with masala" << endl ;
        }
        
        void brew() override {
            cout << " masala Tea brewed" << endl ;
        }
        
        void serve() override {
            cout << "masala Tea served" << endl ;
        }
    };


int main() 
{
    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();
    
 return 0;
}