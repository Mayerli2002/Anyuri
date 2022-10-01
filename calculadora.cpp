//Programa que presenta las operaciones básicas
//Creado por stalin franci
// modificado Mayerli Aria Tenorio
//Fecha:29 -09-2022

#include<iostream>
using namespace std;

int main()
{
	float max,may,mas,mam,mad,mar;
	//Ingreso de datos
	cout<<"Ingrese en valor de max=:";
	cin>>max;
	cout<<"Ingrese en valor de may=:";
	//Operaciones 
	cin>>may;
	mas=max+may;
	mam=max*may;
	mad=max/may;
	mar=max-may;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<max<<" + "<<may<<" = "<<mas<<endl;
	cout<<"Las multiplicacion de "<<max<<" * "<<may<<" = "<<mam<<endl;
	cout<<"Las division de "<<max<<" / "<<may<<" = "<<mad<<endl;
	cout<<"Las resta de "<<max<<" - "<<may<<" = "<<mar<<endl;
	return 0 ;

}
