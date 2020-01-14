#include <iostream>

//using namespace std;
//
//int pomnoz(int a, int b){
//    return a*b;
//}
//
//int dodaj(int a, int b){
//    return a+b;
//}
//
//double podziel(int a, int b){
//    return ((double)a)/b;
//}
//
//void zad6(int n){
//    for (int a = 1; a<n; a++){
//        cout << "(" << a << ", " << n-a << "), ";
//    }
//}


bool move(int x, int y, char sign){
    if (x<0 or x >2 or y < 0 or y >2 ){
        return false;
    }
    if (tab[x][y] != ' '){
        return false;
    }
    tab[x][y] = sign;
}


int main()
{
    int n;
    cin >> n;
    zad6(n);

    int a, b;
    cout << "Podaj a: " <<endl;
    cin >> a;
    cout << "Podaj b: " <<endl;
    cin >> b;
    cout << odejmij(a,b)<<endl;
    cout << pomnoz(a,b) <<endl;
    cout << podziel(a,b) <<endl;
    cout << dodaj(a,b)<<endl;
    cout << "Inny komunikat!" << endl;


    return 0;
}
