#include <iostream>
using namespace std;

int  elevar (int x, int y, int acum){
    
    if (y==0)
       return acum;
       
       else {
                  acum= acum*x;
                  return elevar(x,y-1,acum);
           }

       
}
int main(){
    int x=0, y=0;
    cout<<"Cual es el valor de x: ";
    cin>>x;
    
    cout<<"Cual es el valor de y: ";
    cin>> y;
    
    cout<< elevar(x, y, 1);
    
    return 0;
    
}