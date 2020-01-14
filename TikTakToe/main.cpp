#include <iostream>

using namespace std;


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
    cout << "Inny komunikat!" << endl;
    return 0;
}
