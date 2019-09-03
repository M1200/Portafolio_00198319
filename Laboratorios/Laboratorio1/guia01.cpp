#include <iostream>
#include <cmath>
using namespace std;



void raizCuadrada(double n, double r){
    float NewR=((n/r)+r)/2;
     if(abs(r-NewR)<0.001)  {
           cout<<NewR;
           return;
         }
        else{
            return raizCuadrada(n,NewR);
            }
    }
    
    
   struct Suma{
      
      double reales;
      double imaginarios;
      };
 
 
 void sumayresta(Suma a, Suma b){
        Suma sum;
        sum.reales=a.reales+b.reales;
        cout<<sum.reales;
 }
        
        
        
        
     


int main()
{
  /*double  n;
  double r=1;
  
  cout<< "Ingrese el numero de que desea conocer la raiz cuadrada: ";
  cin>> n;

  
  raizCuadrada(n,r);*/
  
Suma a;
 a.reales=5;
 a.imaginarios=5;
 
 Suma b;
 b.reales=4;
 b.imaginarios=4;
 
 sumayresta(a,b);
 

// int matriz [5][5]={{0,0},{0,0},{0,0},{0,0}, {0,0}};
 

  return 0;
  
}
