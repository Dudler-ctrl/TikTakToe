#include <iostream>

using namespace std;


int pomnoz(int a, int b){
    return a*b;
}

int dodaj(int a, int b){
    return a+b;
}

double podziel(int a, int b){
    return ((double)a)/b;
}

int main()
{

    int a, b;
    cout << "Podaj a: " <<endl;
    cin >> a;
    cout << "Podaj b: " <<endl;
    cin >> b;

    cout << pomnoz(a,b) <<endl;
    cout << podziel(a,b) <<endl;
    cout<<dodaj(a,b)<<endl;
    cout << "Inny komunikat!" << endl;


    return 0;
}
