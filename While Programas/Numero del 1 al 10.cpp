#include <iostream>
using namespace std;

int main() /* Escribe los números del 1 al 10 */
{
	int numero;
	cout << "Introduzca un numero del 1 al 10" << endl;
	cin >> numero;
	cout << endl;

	while (numero <= 10)
	{
		printf("%d\n", numero);
		numero++;
	}
}