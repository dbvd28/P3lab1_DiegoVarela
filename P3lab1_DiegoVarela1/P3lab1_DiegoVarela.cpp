// P3lab1_DiegoVarela.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	char resp = 's';
	while (resp=='s'||resp=='S') {
		cout << "1) Ejercicio 1" << endl << "2) Ejercicio 2" << endl<<"3) Salida"<<endl;
		int opcion;
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << "Ingrese el numero";
			int numero;
			cin >> numero;
			double respuesta;
			respuesta = 1 / (1 + exp(-numero));
			cout << respuesta<<endl;
			break;
		case 2:
			cout << "Ingrese un numero: ";
			int num,acum,respuesta_total;
			acum = 0;
			cin >> num;
			for (int i = 0; i <= num;i++) {
				acum += ((2*i)-1)*((2*i)+1);
			}
			respuesta_total = acum;
			cout << "S(" << num << ")=" << respuesta_total << endl;
			break;
		}
	}
	
	
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
