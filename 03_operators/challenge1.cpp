#include <iostream>

using namespace std;

int main()
{
    int teaPack;
    float priceOfTeaPack;

    cout << "quantity of Tea pack you want?" << endl;
    cin >> teaPack;

    cout << "what is the price of your tea pack?" << endl;
    cin >> priceOfTeaPack;

    int TotalTeaPack = teaPack * priceOfTeaPack;

    float tax = 0.1;
    float taxedTotal = TotalTeaPack + TotalTeaPack * tax;

    cout << "your Total price is:" << taxedTotal << endl;
    return 0;
}