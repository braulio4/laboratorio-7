#include<iostream>
#include<stdlib.h>

using namespace std;

class Multimedia{
	private:
		string video;
		float duracion;
	public:
		void mostrar();
		void dame_video(string vi){
			video=vi;
		}
		string devuelve_video(){
			return video;
		}
		void dame_duracion(float du){
			duracion=du;
		}
		float devuelve_duracion(){
			return duracion;
		}
};

void Multimedia::mostrar(){
	cout<<"titulo de la pelicula: "<<video<<endl;
	cout<<"duracion de la pelicula: "<<duracion<<endl;
}
class Disco:public Multimedia{
	public:
		int anio;
	public:
		void mostrardisco();
};

void Disco::mostrardisco(){
	 mostrar();
	 cout<<"el anio de estreno es: "<<anio<<endl;
}




int main(){
	Disco p1= Disco();
	p1.dame_video("transformers");
	p1.dame_duracion(1.34);
	p1.anio=2013;
	p1.mostrardisco();
	system("pause");
	return 0;
}