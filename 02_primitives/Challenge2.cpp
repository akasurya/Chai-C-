#include <iostream>

using namespace std;

int main()
{
    float basePriceOfTea;
    cout << "price of tea" << endl;
    cin >> basePriceOfTea;
    // every time price increases by 10 % which is equals to 0.1
    float PriceIncrease = 0.1;
    float newPrice = basePriceOfTea + basePriceOfTea * PriceIncrease;
    int roundedNewprice = (float)newPrice;
    cout << "new increased price is  " << roundedNewprice << endl;
    return 0;
}