#include <iostream>
using namespace std;

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
    cout << "M�s de 10 horas: $7" << endl;
    cout << "----------------------" << endl;

    casos_de_prueba();

	return 0;
}
