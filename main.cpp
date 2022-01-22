/*Primer programa subido a github en c++*/
  
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <locale.h>
  
const char limpiar[] = "cls";
const char color[] = "color a";
const char error[] = "color 4";

using namespace std;

void banner();
void suma();
void resta();
void multiplicar();
void dividir();
void raiz();
void descuento();
void salir();

int main(){
	setlocale(LC_CTYPE, "Spanish");
	system(color);
	system(limpiar);
	int opcion;
	float n1,n2, resultado = 0;

    cout<<"-----------------------------------"<<endl;
    cout<<"|                                 |"<<endl;
	cout<<"|    CALCULADORA DE TERMINAL      |"<<endl;
	cout<<"|           By JoséDíaz           |"<<endl;
	cout<<"|                                 |"<<endl;
	cout<<"-----------------------------------"<<endl;

	cout<<"\n[ :D ] >>> Opciones "<<endl;

	cout<<"\n[ 01 ] >>> Sumar"<<endl;
	cout<<"[ 02 ] >>> Restar"<<endl;
	cout<<"[ 03 ] >>> Multiplicación"<<endl;
	cout<<"[ 04 ] >>> Dividir"<<endl;
	cout<<"[ 05 ] >>> Sacar raiz"<<endl;
	cout<<"[ 06 ] >>> Descuentos"<<endl;
	cout<<"[ 10 ] >>> Salir"<<endl;

	cout<<"\n[ ¿? ] >>> Elige una opción"<<endl;
	cout<<"[ >> ] >>> "; cin>>opcion;

	if(opcion == 01){
	    suma();
	    return main();
    }
    else if(opcion == 02){
    	resta();
    	return main();
    }
    else if(opcion == 03){
    	multiplicar();
    	return main();
    }
    else if(opcion == 04){
    	dividir();
    	return main();
    }

    else if(opcion == 05){
    	raiz();
    	return main();
    }
    
    else if(opcion == 06){
    	descuento();
    	return main();
    }

    else if(opcion == 10){
    	salir();
    	return 0;
    }
    else{
    	system(error);
    	cout<<"\n[ !! ] >>> Opción incorrecta,intentalo de nuevo"<<endl;
    	cout<<"\n";
	    system("pause");
	    return main();
    }

  	return 0;
  }



void banner(){
	cout<<"-----------------------------------"<<endl;
    cout<<"|                                 |"<<endl;
	cout<<"|    CALCULADORA DE TERMINAL      |"<<endl;
	cout<<"|           By JoséDíaz           |"<<endl;
	cout<<"|                                 |"<<endl;
	cout<<"-----------------------------------"<<endl;
}

void suma(){
	system(limpiar);
	float n1,n2, resultado = 0, enter;
	banner();
	cout<<"\n[ !! ] >>> Primer número a sumar: "; cin>>n1;
	cout<<"\n[ !! ] >>> Segundo número a sumar: "; cin>>n2;

	resultado = (n1 + n2);

	cout<<"\n[ >> ] >>> Resultado: "<<resultado<<endl;

	cout<<"\n\n";
	system("pause");
}

void resta(){
	system(limpiar);
	float n1,n2, resultado = 0;
	banner();
	cout<<"\n[ !! ] >>> Primer número a restar: "; cin>>n1;
	cout<<"\n[ !! ] >>> Segundo número a restar: "; cin>>n2;

	resultado = (n1 - n2);

	cout<<"\n[ >> ] >>> Resultado: "<<resultado<<endl;
	
	cout<<"\n\n";
	system("pause");
}

void multiplicar(){
	system(limpiar);
	float n1,n2, resultado = 0;
	banner();
	cout<<"\n[ !! ] >>> Primer número a multiplicar: "; cin>>n1;
	cout<<"\n[ !! ] >>> Segundo número a multiplicar: "; cin>>n2;

	resultado = (n1 * n2);

	cout<<"\n[ >> ] >>> Resultado: "<<resultado<<endl;
	
	cout<<"\n\n";
	system("pause");
}

void dividir(){
	system(limpiar);
	float n1,n2, resultado = 0;
	banner();
	cout<<"\n[ !! ] >>> Ingresa el dividendo: "; cin>>n1;
	cout<<"\n[ !! ] >>> Ingresa el divisor: "; cin>>n2;

	resultado = (n1 / n2);

	cout<<"\n[ >> ] >>> Resultado: "<<resultado<<endl;
	
	cout<<"\n\n";
	system("pause");
}

void raiz(){
	system(limpiar);
	float n1, resultado;
	banner();
	cout<<"\n[ !! ] >>> Ingresa un número a sacar la raiz cuadrada: "; cin>>n1;
	
	resultado = sqrt(n1);
	
	cout<<"\n[ >> ] >>> Resultado: "<<resultado<<endl;
	
	cout<<"\n\n";
	system("pause");
	
}

void descuento(){
	system(limpiar);
	float inicio, medio, rnd, final;
	banner();
	cout<<"\n[ !! ] >>> Ingresa el precio del producto: "; cin>>inicio;
	cout<<"\n[ !! ] >>> Ingresa el porcentaje del descuento: "; cin>>medio;
	
	rnd = (inicio*medio);
	
	cout<<"\n[ >> ] >>> El total a descontar es: "<<rnd<<endl;
	
	final = (rnd-inicio);
	
	cout<<"\n[ >> ] >>> El precio final es: "<<final<<endl;
	
	cout<<"\n\n";
	system("pause");
}

void salir(){
    system(limpiar);
    banner();
	cout<<"\n[ :D ] >>> Created by JoséDíaz!!"<<endl;
	cout<<"\n[ :D ] >>> SimplyTheBest"<<endl;
}


