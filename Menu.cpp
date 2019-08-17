#include "iostream"

using namespace std;

int main(){
	
	int select=0;
	cout<<"			Menu MaiSal			\n";
	cout<<"Elija el numero la opcion que le sea pertinente\n";
	cout<<"1)Introducir sueldo neto\n2)Introducir gastos\n3)Ver porcentajes\n4)Salir\n";
	
	while (select<1 || select>4){
		cout<<"Opcion elegida: ";
		cin>>select;
		if (select<1 || select>4){
			cout<<"Opcion invalida, por favor elija una opcion del menu\n";
		}
	}
	
	
	return 0;
	
}
