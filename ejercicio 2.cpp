#include<iostream>
#include<stdlib.h>

using namespace std;

class Color{
	private:
		string colores;
	public:
		Color(string);
		void mostrarcolor();
};

Color::Color(string _colores){
	colores=_colores;
}

void Color::mostrarcolor(){
	cout<<"el color es: "<<colores<<endl;
}

class Material:public Color{
	private:
		string materia;
	public:
		Material(string,string);
		void mostrarmateria();
};

Material::Material(string _colores,string _materia):Color(_colores){
	materia=_materia;
}

void Material::mostrarmateria(){
	cout<<"el material es: "<<materia<<endl;
	mostrarcolor();
}

class Objetos:public Material{
	private:
		string objeto;
	public:
		Objetos(string,string,string);
		void mostrarobjetos();
};

Objetos::Objetos(string _colores,string _materia,string _objeto):Material(_colores,_materia){
	objeto=_objeto;
}

void Objetos::mostrarobjetos(){
	cout<<"el objeto es: "<<objeto<<endl;
	mostrarmateria();
}

int main(){
	Objetos p1=Objetos("plateado","plata","reloj");
	p1.mostrarobjetos();
	cout<<endl;
	system("pause");
	return 0;
}