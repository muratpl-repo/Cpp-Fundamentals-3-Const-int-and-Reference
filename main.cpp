#include <iostream>

using namespace std;

int main()
{
    /*
    const int sayi = 25;

    sayi= 40; //const int kulanildigi icin o sayi degistirilemez!!!

    */
    int sayi =55;
    int &referans = sayi;
    referans++;
    cout<<sayi;
    return 0;
}
