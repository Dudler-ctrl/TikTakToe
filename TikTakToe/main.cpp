#include <iostream>

using namespace std;

int odejmij(int a, int b){
    return a-b;
}

int pomnoz(int a, int b){
    return a*b;
}

int dodaj(int a, int b){
    return a+b;
}

int main()
{

    cout << pomnoz(4,10) <<endl;
    cout<<dodaj(3,5)<<endl;
    cout<<odejmij(12,8)<<endl;
    cout << "Inny komunikat!" << endl;
    return 0;
}
