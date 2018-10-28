#include <iostream>

using namespace std;

void hola(string nombre);

int main ()
{
	char nombre[100];
	cout << "Ingresa tu nombre" << endl;
	cin.getline(nombre,100);
	hola (nombre);
	return 1;
}

void hola(string nombre)
{
	cout<< "Hola " + nombre << endl;
}
