#include <iostream>
#include <string>
#include <vector>
 
using namespace std;

class Chai {
    private:
        string teaName;
        int servings;

    public:
        Chai(string name, int serve ) : teaName(name), servings(serve){}

        friend bool compareServings(const Chai &chai1, const Chai &chai2);

        void dispaly() const {
            cout << "teaName " << teaName << endl ;
        }


};

bool compareServings(const Chai &chai1, const Chai &chai2){
    return chai1.servings > chai1.servings ;
}

int main() 
{
    Chai masalaCHai("masala chai", 4);
    Chai gingerCHai("ginger chai", 8);

    gingerCHai.dispaly();
    masalaCHai.dispaly();

    if(compareServings(masalaCHai, gingerCHai)){
        cout <<"masla chai is having more servings" << endl ;
    } else {
        cout <<"masla chai is having more servings" << endl ;
    }
    return 0;
}