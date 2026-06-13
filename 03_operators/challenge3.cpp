#include <iostream>

using namespace std;

int main()
{
    int cups;
    bool moreThan1YearMember;

    cout << "how many cups of tea would you like to buy" << endl;
    cin >> cups;

    cout << "are you a member more than one year(1 for yes and 0 for No) ?" << endl;
    cin >> moreThan1YearMember;

    if (moreThan1YearMember || cups > 12)
    {

        cout << "you are qualifies for a discount " << endl;
    }
    else
    {
        cout << "sorry, but you are not qualifies for a discount" << endl;
    }
    return 0;
}