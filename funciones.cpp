#include<iostream>

using namespace std ;

#define MAX  100

//arreglo 

int edades [MAX];
int pos=0; // posocion de elemento 

void agregarEdad(int edad); 
bool hayEspacio();
void mostrarEdades();
bool esMayor(int edad); 

void agregarEdad(int edad ){

edades[pos] = edad ; 
pos++;

}

bool hayEspacio(){

return pos < MAX ; 

}

void mostrarEdadesMayores(){

for (int i = 0; i < pos; i++ ){
if(esMayor(edades[i]))
cout << edades [i] << endl ; 
} 

}

bool esMayor(int edad){

return edad >=18; 

}

int menu (){
    int opcion ; 
cout << "Listado de edades " << endl ; 
cout << "1. Agregar edad " << endl ; 
cout << "2. Mostrar edades " << endl ; 
cout << "3. Mostrar edades mayores o igual a 18 " << endl ; 
cout << "4. Salir ";
cout << "Digite la opcion "; 
cin >> opcion ; 

return 0 ; 
}

