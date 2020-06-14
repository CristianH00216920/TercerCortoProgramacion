#include "iostream"
#include "stdlib.h"
#include "time.h"

using namespace std;

main()
{
    srand(time(NULL));
    int rango=1+rand()%100 ;
    int juegoend = 1;
    int intentos = 5;
    int numero;

    while(juegoend == 1)
    {
        cout << "\n\nIngresa el numero: ";
        cin >> numero;

        if (numero == rango)
        {
            cout << "Felicidades encontraste el numero aleatorio.";
        }
        else if (numero > rango)
        {
             cout << "Pista: el numero aleatorio es menor al que elegiste";
       }
        else if (numero < rango)
        {
            cout << "Pista: el numero aleatorio es mayor al que elegiste";
        }
        
        intentos --;

        if(intentos > 0 && juegoend == 1){
            cout << "\nte quedan " << intentos;
            if (intentos > 1)
            {
                cout << " intentos";
            }else{
                cout << " intento";
            }    
        }else{
            cout << "\nEl numero aleatorio era el: "<< + rango;
            juegoend = 0;
        } 
        cout << "\n\ndesea continuar en el programa eliga [1]";
        cout << "\ndesea salir de el programa eliga [0]";
        cin >> juegoend;   
    }
        
}





