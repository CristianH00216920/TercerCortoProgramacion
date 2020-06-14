#include "iostream"
#include "stdlib.h"

using namespace std;

//funcion numero calcular anio bisiesto
int bisiesto(int an)
{
    if(an % 400 == 0)
    {
        cout <<"\n\nEl anio es bisiesto";
    }else if(an % 4 == 0 && an % 100 !=0){
        cout <<"\n\nEl anio es bisiesto";
    }else
    {
          cout <<"\n\nEl anio no es bisiesto";
    } 
}

main()
{
    int anio;

    cout << "Ingrese un anio: "; cin >> anio;
  

    bisiesto(anio); 

}