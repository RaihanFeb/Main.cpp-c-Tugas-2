#include<iostream>
using namespace std;
int main() {
    int a= 10, b=8;
    int tukar;

    cout<<"sebelum ditukar fisrtvalue="<< a <<", secondvalue=" << b << endl;

    tukar = a;
    a=b;
    b=tukar;

    cout<<"sesudah ditukar firstvalue="<< a <<", secondvalue= "<< b << endl;

    return 0;
}

