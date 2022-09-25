//Programa que presenta las operaciones básicas
//Modificado po: Mayerli  Anahi  Arias Tenorio 
//Fecha: 24-09-2022

#include<iostream>
using namespace std;

int main()
{
	float M,A,T,P,D,R;
	//Ingreso de datos
	cout<<"Ingrese en valor de M=:";
	cin>>M;
	cout<<"Ingrese en valor de A=:";
	//Operaciones 
	cin>>A;
	T=M+A;
	P=M*A;
	D=M/A;
	R=M-A;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<M<<" + "<<A<<" = "<<T<<endl;
	cout<<"Las multiplicacion de "<<M<<" * "<<A<<" = "<<P<<endl;
	cout<<"Las division de "<<M<<" / "<<A<<" = "<<D<<endl;
	cout<<"Las resta de "<<M<<" - "<<A<<" = "<<R<<endl;
	return 0 ; 


}
