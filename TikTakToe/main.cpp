#include <iostream>

using namespace std;


char tab[3][3];
bool isMoveOK(int x, int y, char sign){
    if (x<0 or x >2 or y < 0 or y >2 ){
        return false;
    }
    if (tab[x][y] != ' '){
        return false;
    }
    return true;
}

void move(int x, int y, char sign){
    tab[x][y] = sign;
}

void print(){
    cout <<" _ _ _" <<endl;
    for(int y=0; y<3; y++){
        for (int x=0; x<3; x++){
            cout << "|";
            if(tab[x][y]==' ' ){
                cout << "_";
            }
            else{
                cout << tab[x][y];
            }
        }
        cout << "|" <<endl;
    }
}

bool isWinInRow(int y, char sign){
    return tab[0][y]==sign and tab[1][y]==sign and tab[2][y]==sign;
}
bool isWinInCol(int x, char sign){
    return tab[x][0]==sign and tab[x][1]==sign and tab[x][2]==sign;
}
bool isWinInDiagonal(char sign){
    return (tab[0][0]==sign and tab[1][1]==sign and tab[2][2]==sign) or
           (tab[2][0]==sign and tab[1][1]==sign and tab[0][2]==sign);
}


bool isEndOfGame(){
    for(int i=0; i<3; i++){
        if( isWinInRow( i,'o') or
            isWinInRow( i,'x') or
            isWinInCol( i,'o') or
            isWinInCol( i,'x')){
            return true;
        }
    }
    return (isWinInDiagonal('o') or isWinInDiagonal('x'));
}

void init(){
    for (int x=0; x<3; x++){
        for(int y=0; y<3; y++){
            tab[x][y]= ' ';
        }
    }
}

int main()
{
    init();
    int x,y;
    char sign ='x';
    while(!isEndOfGame()){
        print();

        do{
            cout << "Podaj x: " <<endl;
            cin >> x;
            cout << "Podaj y: " <<endl;
            cin >> y;
        } while(!isMoveOK(x,y,sign));
        move(x,y,sign);
        if(sign == 'x'){
            sign = 'o';
        }
        else{
            sign = 'x';
        }
    }

    //TODO : wyswietl plansze i napisz kto wygral



    return 0;
}
