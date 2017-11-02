#include <iostream>

using namespace std;

int main()
{
float num1, num2, res;
char cond;
cout<< "podaj pierwszy wartosc";
cin>>num1;
cout<<"podaj operacje";
cin>>cond;
cout<< "podaj drugi wartosc";
cin>>num2;
switch(cond){
case '+': res = num1 + num2;
    break;


case '-': res = num1 - num2;
    break;


case 'x': res = num1 * num2;
    break;


case ':': res = num1 / num2;
    break;
default:
    cout<<"ERROR!";
    break;
}
cout<< res;

cout<<"Wynik jest:";


return 0;
}
