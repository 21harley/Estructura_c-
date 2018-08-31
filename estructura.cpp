#include<iostream>
#include<conio.h>
using namespace std;
struct alumno{
	char nombre[20];
	int edad;
	float promedio;
}alumno[3];

int main(){
	
	
	
	for(int i=0;i<3;i++){
		cout<<"Ingrese nombre: "<<endl;cin.sync();cin.getline(alumno[i].nombre,20,'\n');
		cout<<"Ingrese edad: "<<endl;cin.sync();cin>>alumno[i].edad;
		cout<<"Ingrese promedio: "<<endl;cin.sync();cin>>alumno[i].promedio;
	}
	float mayor;int posicion;
    for(int i=0;i<3;i++){
    	if(i==0){
    		mayor=alumno[i].promedio;
    		posicion=i;
		}else{
			if(mayor<alumno[i].promedio){
    		mayor=alumno[i].promedio;
    		posicion=i;
			}
		}
	}
	cout<<"Mejor promedio"<<endl;
	cout<<"Nombre: "<<alumno[posicion].nombre<<endl;
	cout<<"Edad: "<<alumno[posicion].edad<<endl;
	cout<<"Promedio: "<<alumno[posicion].promedio<<endl;
	
	return 0;
}
