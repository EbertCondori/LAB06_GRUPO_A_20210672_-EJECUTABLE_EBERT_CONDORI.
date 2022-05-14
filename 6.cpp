/*
//1.

//triangulo.h

#ifndef TRIANGULO_H
#define TRIANGULO_H

class triangulo {
public:
triangulo(int , int );
~triangulo();
void area();
void perimetro();

private:
int base;
int altura;
};

#endif

//triangulo.cpp
#include "triangulo.h"

#include "iostream"
using namespace std;

triangulo::triangulo(int _base, int _altura) {

base = _base;
altura = _altura;

}

triangulo::~triangulo()
{
}
void triangulo::area(){
cout<<"area de mi rectangulo es "<<base<<"*"<<altura<<" : "<<base*altura<<endl;

}

void triangulo::perimetro(){
cout<<"perimetro de mi rectangulo es "<<"2 veces "<<base<<"+"<<altura<<" : "<<2*(altura+base)<<endl;

}

//main.cpp

#include "triangulo.h"
#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {

triangulo t1 = triangulo(20,30);
t1.area();
t1.perimetro();
system("pause");

return 0;
}

*/


/*
//2.

//persona.h
#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include<stdlib.h>

using namespace std;


class persona {
public:
persona(string,int,int,int,int);
~persona();
void imprimir();

private:
string nombre;
int cui;
int nota1,nota2,nota3;


};

#endif

//persona.cpp
#include "persona.h"

#include "iostream"
using namespace std;

persona::persona(string _nombre,int _cui,int _nota1, int _nota2,int _nota3) {

nombre = _nombre;
cui = _cui;
nota1 = _nota1;
nota2 = _nota2;
nota3 = _nota3;
}
persona::~persona(){
}
void persona::imprimir(){
float aux;
aux=(nota1+nota2+nota3)/3;
cout<<" nombre : "<<nombre<<" "<<"\n cui : "<<" "<<cui<<endl;
cout<<" nota 1 : "<<nota1<<"\n nota 2 : "<<nota2<<"\n nota 3 : "<<nota3;
cout<<endl;
if(aux>=10.50)
cout<<" aprobo con : "<<aux;
else
cout<<" desaprobo con : "<<aux;
}


//main.cpp

#include<iostream>
#include"persona.h"

using namespace std;

int main (int argc, char *argv[]) {

persona p1= persona("ebert condori casquino",4657984,15,5,13);
p1.imprimir();
cout<<endl<<endl;
persona p2= persona("luis escobar casquino",3571596,10,7,12);
p2.imprimir();
//system("pause");

return 0;
}




*/

/*
//3.

//fecha.h

#ifndef FECHA_H
#define FECHA_H
#include<iostream>
using namespace std;


class fecha {
public:
fecha(string,int , int , int,int,int,int);
void mostrar();
~fecha();




private:
string nom;
int a,b,c;
int x,y,z;

};

#endif


//fecha.cpp

#include "fecha.h"
#include <iostream>

using namespace std;

fecha::fecha(string _nom,int _a,int _b,int _c,int _x,int _y,int _z) {
nom=_nom;
a=_a;
b=_b;
c=_c;
x=_x;
y=_y;
z=_z;
}


void fecha::mostrar(){
int edad;
edad=z-c;
cout<<"fecha de naciminetoo : "<<a<<" / "<<b<<" / "<<c<<endl;
cout<<"fecha actual : "<<x<<" / "<<y<<" / "<<z<<endl;
cout<<"nombre completo : "<<nom<<endl;
cout<<"edad : "<<edad;
}





fecha::~fecha(){

}






//main.cpp

#include<iostream>
#include"fecha.h"
using namespace std;

int main (int argc, char *argv[]) {

fecha p1=fecha("Ebert Luis Condori Casquino",12,12,2004,13,5,2022);
p1.mostrar();

return 0;
}


*/

/*

//busqueda.h

#ifndef BUSQUEDA_H
#define BUSQUEDA_H
#include<iostream>
using namespace std;

class busqueda {

public:
busqueda(int);
void mostrar();
~busqueda();
private:
int a;
};

#endif



//busqueda.cpp

#include "busqueda.h"
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;


busqueda::busqueda(int _a) {
a=_a;
}


int esta(int matriz[][3],int num){
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
if(num==matriz[i][j])
return true;
}
}
return false;

}

void busqueda::mostrar(){
int matriz[3][3];
int num;
srand(time(0));

for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
num = 1+rand() % 9;
while(esta(matriz,num)==true){
num= 1+rand() % 9;
}
matriz[i][j]=num;
}
cout<<endl;
}

cout<<"matriz aleatoria creada "<<endl;
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
cout<<matriz[i][j]<<" ";
}
cout<<endl;
}

for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
if(matriz[i][j]==a){
cout<<"dato a buscar : "<<a<<endl;
cout<<"ubicacion del dato "<<"["<<i<<"]"<<"["<<j<<"]"<<endl;
}
}
cout<<endl;
}

}
busqueda::~busqueda(){  
}



//main.cpp


#include<iostream>
using namespace std;
#include "busqueda.h"

int main (int argc, char *argv[]) {

busqueda p1=busqueda(2);
p1.mostrar();

return 0;
}



*/
