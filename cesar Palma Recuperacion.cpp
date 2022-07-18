#include <iostream>
using namespace std;
double factorial(int k)
{
double fac=1;
for(int i=1; i<=k; i++)
fac*=i;
return fac;
}


int potencia(int base, int exponente)
{
int resultado=1;
for (int k=1; k<=exponente; k++)
resultado=resultado*base;
return resultado;
} 

double serie(int n){

double suma=0;
for(int i=2; i<=n; i++)
suma+=factorial(i)/potencia(5,i-1);
return suma ;
}
int main(){
 
   
  cout<<"El resulado de la serie hasta 5 es: "<<serie(5);

  
}
