#include "iostream"
#include "stdlib.h"

using namespace std;

//Funcion para calcular el salario de n trabajadores.
float calcularSalario(int trb)
{
    int HorasN, HorasEx;
    float pagoH = 1.75, pagoHex = 2.50, salario_t, salario_r;
    float isss, afp, renta, des;

    //for dependera de la cantidad de trabajadores a evaluar
    for (int i = 0; i < trb; i++)
    {
        cout <<"\n\n****************************************";
        cout << "\nIngrese las horas trabajas del empleado "<< i+1 <<": "; cin >> HorasN;
        cout << "Ingrese las horas extra trabajas del empleado "<< i+1 <<": "; cin >> HorasEx;
        salario_t =  (HorasN * pagoH) + (HorasEx * pagoHex); //obtener el salario total
        cout << "\nEl salario total del empleado " << i+1 << " es: " << + salario_t;
        isss = salario_t * 0.04; afp = salario_t * 0.0625; renta = salario_t * 0.10;
   
        //descontar renta solo a salarios totales arriba de 500
        if (salario_t > 500)
        {
            salario_r =  salario_t - isss - afp - renta;
        }
        else if (salario_t < 500)
        {
            salario_r =  salario_t - isss - afp;
        }
        cout << "\nEl salario real del empleado " << i+1 << " es: " << + salario_r;
    }      
}

main()
{
    int trabajadores;

    cout << "Ingrese el numero de trabajadores: "; cin >> trabajadores;
    system ("CLS"); //Limpieza de pantalla

    calcularSalario(trabajadores);

    cout << "\n\n";
    system ("PAUSE");
    

}
