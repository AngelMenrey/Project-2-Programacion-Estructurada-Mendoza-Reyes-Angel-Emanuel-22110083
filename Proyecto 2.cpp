/* Angel Emanuel Mendoza Reyes / 22110083 / Grupo 1 O / Programacion Estructurada / Parcial 2.

Realizar de forma individual un programa que le permita al usuario elegir entre calcular las áreas de figuras geométricas,
el número factorial, o la serie de fibonacci, que se salga del programa hasta que el usuario se lo indique, 
es decir que debe preguntar la opción a elegir hasta que se le indique que se salga de la ejecución.
Entregar código fuente y este mismo explicado con comentarios en el mismo.*/

#include <iostream>// Se incluye una libreria 
#include<stdlib.h>// Se incluye una Libreria 
#include<string.h>// Se incluye una Libreria 
#include<math.h>// Se incluye una libreria 
#include<conio.h>// Se incluye una libreria 

using namespace std; // Es para evitar escribir en cada cout std::
int main() // Es la funcion principal del programa 
{
	int opcion=10;// Se declara la variable opcion que es igual a 10
	while (opcion > 0) // Empieza el ciclo While y se encierra la variable en parentesis, opcion que es mayor que cero
	{
		cout << "Ingrese la opcion deseada" <<endl;// Esto se va a imprimir en pantalla de la consola y endl es un salto de linea.
		cout << "Opcion: "<< endl;//Esto se va a imprimir en pantalla de la consola y endl es un salto de linea.
		cout << "1 - Area de figura"<<endl;//Esto se va a imprimir en pantalla de la consola y endl es un salto de linea.
		cout << "2 - Numero factorial \n";// Esto se va a imprimir en pantalla de la consola y endl es un salto de linea.
		cout << "3 - Serie de fibonacci" << endl;//Esto se va a imprimir en pantalla de la consola y endl es un salto de linea.
		cout << "0 - Salir del programa"<<endl;//Esto se va a imprimir en pantalla de la consola y endl es un salto de linea.
		cin >> opcion;// Es para ingresar los valores de las opciones 1,2,3,0 dependiendo que requiere calcular el usuario.
		
		switch (opcion) //Ejecuta un bloque de sentecia que es llamada opcion
		{
			case 1:// Este es el caso uno de las opciones que el usuario decidio elegir para ejecutar el programa.
				cout << "programa para calcular el area de un cuadrado"<<endl; //Esto se va a imprimir en pantalla de la consola y endl es un salto de linea.
					
					int lado,area; // Se declara las variables lado, area.
    					cout<<"Ingrese el Lado "<<endl;//Esto se va a imprimir en pantalla de la consola y endl es un salto de linea.
   							 cin>>lado;// cin es para ingresar el valor de la variable lado.
    								area=lado*lado; // El valor del lado ingresado se va a multiplicar por el otro lado y esto va ser igual al area.
    									cout<<"El area de un cuadrado  es :"<<area<<endl;// Esto se va a imprimir en pantalla de la consola y va ver un orden con los signos << y endl es un salto de linea.
	
													break;	// Es la parte donde concluye el case o el programa ejecutado.
				
						case 2://Este es el caso dos  de las opciones que el usuario decidio elegir para ejecutar el programa.
								cout << "programa para calcular el factorial"<<endl;//  Esto se va a imprimir en pantalla de la consola y endl es un salto de linea.
									int n,i;// Se Declaran las variables n , i
   										long double factorial; // se declara long double para poder representar números grandes
  											 cout << "Introduce un numero: ";// Esto se va a imprimir en pantalla de la consola y endl es un salto de linea.
  												 cin >> n; // Se va ingresar el valor de la variable n
  													 factorial=1; // Factorial es igual a uno 
  														 for(i=1;i<=n;i++) // For va ser las instrucciones de las variables y signos aritmeticos que se encuentran adentro del parentesis
       															 factorial = factorial * i; // Factorial es igual a Factorial multiplicado por la variable i
   																				cout << endl << "Factorial de " << n << " -> " << factorial << endl; // Esto se va a imprimir en pantalla de la consola y tambien sigue un orden con los signos << y endl es un salto de linea.
 																					 									
																								break;	// Es la parte donde concluye el case o el programa ejecutado.
			
					case 3:	// Este es el caso tres de las opciones que el usuario decidio elegir para ejecutar el programa.
			
					cout << "programa para calcular la serie de fibonacci"<<endl;// Esto se va a imprimir en pantalla de la consola y endl es un salto de linea.
					 int a = 0; // Se declara la variable a que es igual a 0
			    		int b = 1; // Se declara la variable b que es igual a 1
			    			int limite=1,d; // Se declara la variable limite que es igual a 1 y tambien se declara la variable d
								int numero=0; // Se declara la varible numero que es igual a 0
								cout << "indique el limite de la serie"<<endl; // Esto se va a imprimir en pantalla de la consola y endl es un salto de linea.
									cin >> limite; // cin es para ingresar el valor de la variable limite 
										cout << "0,1,"; // Esto se va a imprimir en pantalla de la consola
											while (numero < limite ) // Aqui inicia el ciclo While se repite mientras que cumpla una condicion y se encierra entre parentesis numero que es menor que limite 
												{ // corchetes del bucle While 
												// a debe tomar el valor de b, y b el de numero, para recorrer el calculo y obtener el siguiente valor
												numero = a + b; // La variable numero es igual a la suma de las variables a y b 
													cout <<numero<<",";// Esto se va a imprimir en pantalla de la consola y sigue un orden utilizando los signos << y endl es un salto de linea.
														a=b; // la variable a es igual a la variable b 
														b=numero; //  la variable b es igual a la variable numero 
					
												} // corchetes del bucle while 
													break; // Es la parte donde concluye el case o el programa ejecutado.
															
		}
	
			
	}
	
}

