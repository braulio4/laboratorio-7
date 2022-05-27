#include<iostream>
#include<stdlib.h>

using namespace std;

class Ave{
	private:
		string especie;
		int edad;
	public:
		Ave(string,int);
		virtual void mostrar();
};

Ave::Ave(string _especie,int _edad){
	especie=_especie;
	edad=_edad;
}

void Ave::mostrar(){
	cout<<"el nombre del ave es: "<<especie<<endl;
	cout<<"la edad maxima de vida es: "<<edad<<endl;
}

class Ganzo:public Ave{
	private:
		bool nada;
	public:
		Ganzo(string,int,bool);
		void mostrar();
};

Ganzo::Ganzo(string _especie,int _edad,bool _nada):Ave(_especie,_edad){
	nada=_nada;
}

void Ganzo::mostrar(){
	Ave::mostrar();
	cout<<"el ganzo sabe nadar: "<<nada<<endl;
}

class Gallina:public Ave{
	private:
		string comida;
	public:
		Gallina(string,int,string);
		void mostrar();
};

Gallina::Gallina(string _especie,int _edad,string _comida):Ave(_especie,_edad){
	comida=_comida;
}

void Gallina::mostrar(){
	Ave::mostrar();
	cout<<"la gallina come: "<<comida<<endl;
}

class Pato:public Ave{
	private:
		int peso;
	public:
		Pato(string,int,int);
		void mostrar();
};

Pato::Pato(string _especie,int _edad,int _peso):Ave(_especie,_edad){
	peso=_peso;
}

void Pato::mostrar(){
	Ave::mostrar();
	cout<<"el pato pesa:  "<<peso<<" kg"<<endl;
}

int main(){
	cout<<"PROGRAMA DE HERENCIA DE AVE A LOS HIJOS GANZO PATO Y GALLINA";
	Gallina p1=Gallina("gallina",15,"plantas");
	Pato p2=Pato("pato",10,2);
	Ganzo p3=Ganzo("ganzo",25,true);
	cout<<endl;
	p1.mostrar();
	cout<<endl;
	p2.mostrar();
	cout<<endl;
	p3.mostrar();
	cout<<endl;
	system("pause");
	return 0;
}