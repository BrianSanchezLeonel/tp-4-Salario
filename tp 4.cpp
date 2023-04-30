#include<bits/stdc++.h>
using namespace std;
float CalcularSalario(int salario);
int main(){
	int salario;
	cout<<"Ingrese salario del empleado:"<<endl;
	cin>>salario;
	cout<<CalcularSalario(salario)<<endl;
}
float CalcularSalario(int salario){
	float Reajuste;
	if(salario>0 && salario<400){
		Reajuste=salario*0.15;
	}
	if(salario>400.01 && salario<800){
		Reajuste=salario*0.15;
	}
	if(salario>800.01 && salario<800){
		Reajuste=salario*0.12;
	}
	if(salario>1200.01 && salario<2000){
		Reajuste=salario*0.15;	
	}
	if(salario>2000.00){
		Reajuste=salario*0.4;
	}
	return Reajuste;
}