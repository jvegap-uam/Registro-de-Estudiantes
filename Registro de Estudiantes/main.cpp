#include <iostream>
#include <fstream>
#include <string>

void mainMenu();
void agregarEst();
void editarEst();
void eliminarEst();
void visualizarEst();

using namespace std;

struct {
	int carnet;
	string nombre;
	string apellido;
	int edad;
	int nota1, nota2, nota3;
}estudiante[100];

int main() {
	mainMenu();
}

void mainMenu() {
	int opt=0;
	cout << "---------------------------------" << endl;
	cout << "	1) Nuevo estudiante." << endl;
	cout << "	2) Modificar estudiante." << endl;
	cout << "	3) Eliminar Estudiante." << endl;
	cout << "	4) Visualizar estudiantes." << endl;
	cout << "Opcion: ";  cin >> opt;

	switch (opt) {
	case 1:
		agregarEst();
		break;
	case 2:
		editarEst();
		break;
	case 3:
		eliminarEst();
		break;
	case 4:
		visualizarEst();
		break;
	default:
		cout << "---------------------------------" << endl;
		cout << "Ingrese un valor valido." << endl;
		system("pause");
		mainMenu();
	}
}

void agregarEst() {

}

void editarEst() {
	ifstream 
}

void eliminarEst() {

}

void visualizarEst() {

}