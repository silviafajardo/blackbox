#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>=11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){

    cout << "CASOS DE PRUEBA - Equivalence partitioning" << endl;
    // Agrega tus casos de prueba



    cout << endl;


    cout << "CASOS DE PRUEBA - Boundary value analysis" << endl;
    // Agrega tus casos de prueba

}

int main()
{
	int horas;

    cout << "PAGO DE ESTACIONAMIENTO" << endl;
    cout << "1 a 5 horas : $10" << endl;
    cout << "6 a 10 horas: $9" << endl;
    cout << "Más de 10 horas: $7" << endl;
    cout << "----------------------" << endl;

    casos_de_prueba();

	return 0;
}
