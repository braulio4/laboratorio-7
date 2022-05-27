#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	int num1,com;
	cout<<"JUGUEMOS UN JUEGO DIME UN NUMERO EL QUE SAQUE EL MAYOR ES EL GANADOR"<<endl;
	cout<<"ingrese su numero: "; cin>>num1;
	com=num1+1;
	if(com>num1){
		cout<<"gana la computadora con su numero: "<<com<<endl;
	}
	else{
		cout<<"usted gana con el numero: "<<num1<<endl;
	}
	getch();
	return 0;
}