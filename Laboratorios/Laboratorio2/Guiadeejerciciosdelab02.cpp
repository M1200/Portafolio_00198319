#include <iostream>
#include <cmath>
using namespace std;
int acum=0;


int factorial(int x){

if (x==1)
    return x;
    else if (x==0)
        return 1;
else{
    x=x*factorial(x-1);
    return x;
}

}

int main(){
int x=0;
char resp;

cout<< "Ingrese el valor de X: ";
cin>> x;

cout<< "\n\nEl factorial de "<< x<< " es "<< factorial(x)<< endl;
acum= acum+ factorial(x);

cout<< "\nDesea continuar? (s/n)"<< endl;
cin>> resp;

while (resp=='s'){

   cout<< "Ingrese el valor de X: ";
   cin>> x;

   cout<< "\n\nEl factorial de "<< x<< " es "<< factorial(x)<< endl;
   acum= acum+ factorial(x);

   cout<<"\n\Desea continuar? (s/n)"<< endl;
   cin>> resp;
}
cout<<"\n\nLa sumatoria de todos los factoriales de X es: "<< acum<< endl;
cout<< "Vuelve pronto :D"<< endl;
}
