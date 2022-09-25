//Creado por: Mayerli Anahi Arias Tenorio 
#include<iostream>
using namespace std;

int main()
{
	int M=0,A;
	float P,T=0;
        cout<<" Ingrese el limite A= "; cin>>A;
	do{

	cout<<" Ingrese el numero P= "; cin>>P;

        M=M+1;
	T=T+P;



        }while(M<A);
        cout<<"Se ingresaron "<<A<<" numeros "<< "que sumaron "<<T<<endl;
	return 0; 


}
