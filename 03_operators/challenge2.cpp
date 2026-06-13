#include <iostream>

using namespace std;

int main()
{
    int numberOfTeaBag;
    cout << "How much Tea bag you have?" << endl;
    cin >> numberOfTeaBag;

    if (numberOfTeaBag < 20)
    {
        numberOfTeaBag += 10;

        cout << "the total number of Tea bag you will have:" << numberOfTeaBag << endl;
    }
    else
    {

        cout << "the total number of Tea bag you will have:" << numberOfTeaBag << endl;
    }
    return 0;
}