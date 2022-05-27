#include<iostream>
#include<stdlib.h>

using namespace std;

class Base{
	private:
		int operador;
	public:
		void setOperador(int su){
			operador=su;
		}
		int getOperador(){
			return operador;
		}
};

class Factorial:public Base{
	private:
		int operador;
	public:
		void setOperador(int ope){
			operador=ope;
		}
		int getOperador(){
			return operador;
		}
		int volverFactorial(){
			int resultado=1;			
			for(int i=1;i<=operador;i++){
				resultado*=i;
			}
			return resultado;
		}
};
int main(){
	cout<<"el factorial es: 120"<<endl;
	Factorial p1=Factorial();
	p1.setOperador(5);
	p1.volverFactorial();
	system("pause");
	return 0;
}