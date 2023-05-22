#include<iostream>

#include<stdlib.h>

#include<conio.h>

#include<math.h>

#include<iomanip>

#include<stdio.h>

#include<windows.h>

#define USER "ADMIN"

#define PASS "admin"

#define L 80 /* Longitud máxima de las cadenas */

 

 

using namespace std;





void menu();	

void color();

void salir();

void login();

void vanner();

void cargando();

void suma();

void Empeno();

void Libreria();

void Cajero();

void Tienda();

//Funciones



 int  opc;

 int opcion;



// ----------------PROGRAMA PRINCIPAL ----------------------------

     main()

{

	system("color 07");

//Portada del programa

cout<<"\n\n\t*******************************************************************";

cout<<"\n\n\t*******************************************************************";

cout<<"\n\n\tCLASE--------------------------------------------------------Programacion";

cout<<"\n\n\tPERIODO ACADEMICO----------------------------------------------II PERIODO";

cout<<"\n\n\tInstituto-------------------Instituto Tecnologico de Excelencia Educativa";	

cout<<"\n\n\tSEDE----------------------------------------------------------SPS, Cortes";

cout<<"\n\n\tFECHA-----------------------------------------------------------3/05/2023";

cout<<"\n\n\tCATEDRATICO-----------------------------------------------Limberth Amador";	

cout<<"\n\n\tCARRERA----------------------------INGENIERIA EN SISTEMAS COMPUTACIONALES";

cout<<"\n\n\tALUMNO-----------------------------------------Eddy Samuel Mejia Martinez";

cout<<"\n\n\t*******************************************************************";

cout<<"\n\n\t*******************************************************************\n\t";

system("pause");

login();

char ingresa = 0;

if(ingresa == false){

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

system("pause");

return 0;

}

else {

vanner();

cargando();

menu();

}



	

}

void login(){//Funcion para el inicio de Sesion



	char usuario[L + 1];

    char password[L + 1];

    int contador = 0 ;

    char ingresa = 0; /* Variable booleana 1 = true, 0 = false */

    int i = 0;    /* Indica la posición del caracter leído en la cadena */

    char caracter; /* Guarda el caracter leído mediante la función getch */

    int longitud_actual; /* Indica la longitud actual de la cadena password */

    

    

    do { 

      system("cls");

	  system("color 07");

      printf("\n\n\n\t\tºººººººººººººººººººººººººººººººººººººººººººººººººº\n");

      printf("\t\tºº\t\t\t\t\t        ºº");

      printf("\n\t\tºº\t                            ");

      printf("  \t\tºº\n\t\tºº\t\t\t\t\t        ºº\n");

      printf("\t\tºº                INICIO DE SESION         \tºº\n");

      printf("\t\tºº       ");

      printf("\t\t\t\t\tºº\n\t\tºº\t\t\t\t\t        ºº");

      printf("\n\t\tºººººººººººººººººººººººººººººººººººººººººººººººººº\n");

      system("pause>null"); 

      

    

        cout<<"\n\tUSUARIO: ";

        gets(usuario);

 

        cout<<"\n\tPASSWORD: ";

 

        /* Lectura del password */

        i = 0;    /* Indica la posición del caracter leído en la cadena */

 

        caracter = getch();

        while (i < L && caracter != 13) {

 

            if (caracter != 8) {

                password[i] = caracter;

                i++;

                printf("*");

            } else {

                longitud_actual = strlen(password); /* Longitud actual */

                if (longitud_actual > 0) {

                    printf("\b \b");

                    password[longitud_actual - 1] = '\0';

                    i--;

}

            }

            caracter = getch();

        }

        password[i] = '\0';

        



        if (strcmp(usuario, USER) == 0 && strcmp(password, PASS) == 0) {

            ingresa = 1;

        } else {

            printf("\n\n\tEL USUARIO y/o PASSWORD SON INCORRECTOS\n");

            cout<<"\n\n\tINTENTE DE NUEVO";

            getchar();

            contador++;

        }

       system("cls");

    } while (ingresa == 0 && contador < 3);

     

       

    if (ingresa == 0) {

      printf("\n\n\n\n\n\n\tUSTED NO PUEDE INGRESAR AL SISTEMA. ADIOS\n");

   } else {

       printf("\n\n\n\n\n\n\tBIENVENIDO AL SISTEMA\n");

 

      vanner();

      cargando();  

}/* */

   }

 

 

 void vanner(){//Realiza vanner para hacer referencia al inicio completo del sistema

Sleep(1000);

       system("cls");

       system("color 07");

       printf("\n\n\n\n");

       printf("\n\n\n\t\tºººººººººººººººººººººººººººººººººººººººººººººººººº\n");

       printf("\t\tºº\t\t\t\t\t        ºº");

       printf("\n\t\tºº\t                            ");

       printf("  \t\tºº\n\t\tºº\t\t\t\t\t        ºº\n");

       printf("\t\tºº             PROYECTO SEGUNDO PARCIAL \tºº\n");

       printf("\t\tºº       ");

       printf("\t\t\t\t\tºº\n\t\tºº\t\t\t\t\t        ºº");

       printf("\n\t\tºººººººººººººººººººººººººººººººººººººººººººººººººº\n");

      

       cout<<"\n\n\n\n\n\tPulse una tecla para ingresar al sistema: ";      

       system("pause>null");

	    system("cls");

}//Finaliza void vanner



void cargando(){//Genera una barra de carga para cargar todos los archivos

	system("color 07");

       int segundos=1;

    for(int i=0; i<=100; i++)

        cout << "\n";

    cout << "\nCARGANDO...\n";

    for(int i=0; i<=300; i++)

        cout << "_";

    for(int i=0; i<=300; i++)

    {

        cout<<char(219);

        Sleep(segundos*1000/100);

    }//Finaliza for

    //system("pause");

    cout<<"\nCompletado!";





//Comienza el do while	

do{ 

menu();

cout<<"\n\n\tPRESIONE LA OPCION DESEADA: ";

cin>>opc;



switch(opc){

			

	 

		    

		case 1:

			 color();

				     break;

				            case 2:

				                    salir();

				                             break;
				                                    case 3:
				                                    	    suma();
				                                    	            break;
				                                    	                   case 4:
				                                    	                   	       Empeno();
				                                    	                   	                 break;
				                                    	                   	                        case 5:
				                                    	                   	                                Libreria();
				                                    	                   	                                	        break;
				                                    	                   	                                	                case 6:
				                                    	                   	                                	                       	Cajero();
				                                    	                   	                                	                       	          break;
				                                    	                   	                                	                       	                 case 7:
				                                    	                   	                                	                       	                 	     Tienda();
				                                    	                   	                                	                       	                 	               break;

				                                                                                                                                            

					

	   default:

	   	system("cls");

		cout<<"\n OPCION NO VALIDA INGRESE OTRA\n";

		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

		system("pause");

		menu();

   	    break;		  

   	 				

				

				}//Finaliza switch

}while(opc != 17);//Finaliza do while



 }//Finaliza void cargando

 

 void menu(){



system("cls");

cout<<"\n\t************************************************";	

cout<<"\n\t**************PROYECTO II PARCIAL**************";

cout<<"\n\t1.------>CAMBIAR DE COLOR";

cout<<"\n\t2.------>SALIR";      

cout<<"\n\t3------->Suma";   

cout<<"\n\t4------->Casa de empeño";

cout<<"\n\t5------->Libreria";

cout<<"\n\t6------->Cajero"; 

cout<<"\n\t7------->Tienda";         

cout<<"\n\t************************************************";	





}//Finaliza void menu





void color(){

	int A;

     A= 1+rand()% 9;

     switch(A){

     case 1:

          system("color 1f");

          break;

     case 2:

         system("color 2f");

          break;

     case 3:

          system("color 3f");

          break;

     case 4:

          system("color 4f");

          break;

     case 5:

          system("color 5f");

          break;

     case 6:

          system("color 6f");

          break;

     case 7:

          system("color 7f");

          break;

     case 8:

          system("color 8f");

          break;

     case 9:

          system("color 9f");

          break;

          }

	

}//Finaliza void color



void salir(){

	exit(0);

}

void suma(){//INICIA VOID SUMA
	int a,b,suma;
	
	cout<<"ingrese primer digito: \n";
	cin>>a;
	
	cout<<"ingrese segundo digito: \n";
	cin>>b;
	
	suma = (a+b);
	cout<<"su suma sera de: "<<suma;
	getch();
	
}//FINALIZA VOID SUMA

void Empeno(){//INICIA VOID CASA DE EMPEÑO
int contra,num_identidad,eleccion1,tiempo,depreciacion,tiempo_prestamo,total,total_pagar,costo,valor_prestar;
char nombre[50],articulo[50],usuario[50];


	cout<<"Bienvenido\n\n";
	cout<<"ingrese datos para empeñar su articulo\n\n";
	
	
	cout<<"Articulo que va a empeñar:\n";
	cin>>articulo;
	
	
	cout<<"ingrese su numero de identidad:\n";
	cin>>num_identidad;
	

	cout<<"ingrese su nombre:\n";
	cin>>nombre;
	
	cout<<"presione una tecla para continuar:\n";
	getch();
	system("cls");
	
	
	
	
	cout<<"Seleccione una categoria en base a su producto\n\n\n";
	cout<<"1----------------------------------Electronica 5%\n\n";
	cout<<"2----------------------------------Linea blanca 10%\n\n";
	cout<<"3----------------------------------Joyeria 15%\n\n";
	cout<<"4----------------------------------Bienes raices 35%\n\n";
	cout<<"5----------------------------------Bienes inmuebles 40%\n\n";
	cin>>eleccion1;
	system("cls");
	
	switch(eleccion1){
		case 1:
			cout<<"Costo original del articulo:\n";
			cin>>costo;
			
			cout<<"tiempo de uso de:"<<articulo<<"\n";
			cin>>tiempo;
			
			cout<<"en cuanto tiempo se pagara el prestamo:\n";
			cin>>tiempo_prestamo;
			
			depreciacion = (costo*0.01)/tiempo;	
			
			valor_prestar = (costo*tiempo_prestamo);
			
			
			total = (costo*0.05);
			
			total_pagar = (total+costo);
			
			system("cls");
			
			cout<<"RECIBO DE PAGO:\n\n";
			cout<<"usted es:"<<nombre;
			cout<<"\n";
			cout<<"esta empeñando: "<<articulo;
			cout<<"\n";
			cout<<"costo original del articulo: "<<costo;
			cout<<"\n";
			cout<<"tiempo en el que se uso: "<<tiempo;
			cout<<"\n";
			cout<<"la depreciacion es: "<<depreciacion;
			cout<<"\n";
			cout<<"valor a prestar: "<<valor_prestar;
			cout<<"\n";
			cout<<"interes del 5%";
			cout<<"\n";
			cout<<"total a pagar sera: "<<total_pagar;
			break;
			
		case 2:
			cout<<"Costo original del articulo:\n";
			cin>>costo;
			
			cout<<"tiempo de uso de:"<<articulo<<"\n";
			cin>>tiempo;
			
			cout<<"en cuanto tiempo se pagara el prestamo:\n";
			cin>>tiempo_prestamo;
			
			depreciacion = (costo*0.01)/tiempo;	
			
			valor_prestar = (costo*tiempo_prestamo);
			
			
			total = (costo*0.10);
			
			total_pagar = (total+costo);
			
			system("cls");
			
			cout<<"RECIBO DE PAGO:\n\n";
			cout<<"usted es:"<<nombre;
			cout<<"\n";
			cout<<"esta empeñando:"<<articulo;
			cout<<"\n";
			cout<<"costo original del articulo:"<<costo;
			cout<<"\n";
			cout<<"tiempo en el que se uso:"<<tiempo;
			cout<<"\n";
			cout<<"la depreciacion es:"<<depreciacion;
			cout<<"\n";
			cout<<"valor a prestar:"<<valor_prestar;
			cout<<"\n";
			cout<<"interes del 10%";
			cout<<"\n";
			cout<<"total a pagar sera:"<<total_pagar;
			break;
			
		case 3:
				cout<<"Costo original del articulo:\n";
			cin>>costo;
			
			cout<<"tiempo de uso de:"<<articulo<<"\n";
			cin>>tiempo;
			
			cout<<"en cuanto tiempo se pagara el prestamo:\n";
			cin>>tiempo_prestamo;
			
			depreciacion = (costo*0.01)/tiempo;	
			
			valor_prestar = (costo*tiempo_prestamo);
			
			
			total = (costo*0.15);
			
			total_pagar = (total+costo);
			
			system("cls");
			
			cout<<"RECIBO DE PAGO:\n\n";
			cout<<"usted es: "<<nombre;
			cout<<"\n";
			cout<<"esta empeñando: "<<articulo;
			cout<<"\n";
			cout<<"costo original del articulo: "<<costo;
			cout<<"\n";
			cout<<"tiempo en el que se uso: "<<tiempo;
			cout<<"\n";
			cout<<"la depreciacion es: "<<depreciacion;
			cout<<"\n";
			cout<<"valor a prestar: "<<valor_prestar;
			cout<<"\n";
			cout<<"interes del 15%";
			cout<<"\n";
			cout<<"total a pagar sera: "<<total_pagar;
			break;
			
		case 4:
			cout<<"Costo original del articulo:\n";
			cin>>costo;
			
			cout<<"tiempo de uso de:"<<articulo<<"\n";
			cin>>tiempo;
			
			cout<<"en cuanto tiempo se pagara el prestamo:\n";
			cin>>tiempo_prestamo;
			
			depreciacion = (costo*0.01)/tiempo;	
			
			valor_prestar = (costo*tiempo_prestamo);
			
			
			total = (costo*0.35);
			
			total_pagar = (total+costo);
			
			system("cls");
			
			cout<<"RECIBO DE PAGO:\n\n";
			cout<<"usted es:"<<nombre;
			cout<<"\n";
			cout<<"esta empeñando: "<<articulo;
			cout<<"\n";
			cout<<"costo original del articulo: "<<costo;
			cout<<"\n";
			cout<<"tiempo en el que se uso: "<<tiempo;
			cout<<"\n";
			cout<<"la depreciacion es: "<<depreciacion;
			cout<<"\n";
			cout<<"valor a prestar: "<<valor_prestar;
			cout<<"\n";
			cout<<"interes del 35%";
			cout<<"\n";
			cout<<"total a pagar sera: "<<total_pagar;
			break;
			
		case 5:
			cout<<"Costo original del articulo:\n";
			cin>>costo;
			
			cout<<"tiempo de uso de:"<<articulo<<"\n";
			cin>>tiempo;
			
			cout<<"en cuanto tiempo se pagara el prestamo:\n";
			cin>>tiempo_prestamo;
			
			depreciacion = (costo*0.01)/tiempo;	
			
			valor_prestar = (costo*tiempo_prestamo);
			
			
			total = (costo*0.40);
			
			total_pagar = (total+costo);
			
			system("cls");
			
			cout<<"RECIBO DE PAGO:\n\n";
			cout<<"usted es:"<<nombre;
			cout<<"\n";
			cout<<"esta empeñando: "<<articulo;
			cout<<"\n";
			cout<<"costo original del articulo: "<<costo;
			cout<<"\n";
			cout<<"tiempo en el que se uso: "<<tiempo;
			cout<<"\n";
			cout<<"la depreciacion es: "<<depreciacion;
			cout<<"\n";
			cout<<"valor a prestar: "<<valor_prestar;
			cout<<"\n";
			cout<<"interes del 40%";
			cout<<"\n";
			cout<<"total a pagar sera: "<<total_pagar;
			break;
			
		default:
			cout<<"opcion invalida";
			exit(0);
			
			
			
}//finaliza switch

}//FINALIZA VOID CASA DE EMPEÑO

void Tienda(){//INICIA VOID TIENDA
int eleccion1,cant_prod,pago,eleccion2,pago_total=0;
system("cls");
do{


cout<<"\nT1.Camiseta--------------------------------------------------$.100.00\n";
cout<<"\nT2.Chaqueta--------------------------------------------------$.200.00\n";
cout<<"\nT3.Abrigo de cuero-------------------------------------------$.150.00\n";
cout<<"\nT4.Pantalon Corto--------------------------------------------$.50.00\n";
cout<<"\nT5.Jeans Vaquero---------------------------------------------$.100.00\n";
cout<<"\nT6.Calcetines------------------------------------------------$.60.00\n";
cout<<"\nT7.Gorra-----------------------------------------------------$.250.00\n";
cout<<"\nT8.Botines---------------------------------------------------$.1000.00\n";
cout<<"\nT9.Fajas-----------------------------------------------------$.160.00\n";
cout<<"\nT10.Salir------------------------------------------------------------\n";
cout<<"ingrese una opcion:\n\n";
cin>>eleccion1;
system("cls");

switch(eleccion1){
case 1:
    cout<<"ingrese cantidad de camisas:\n";
    cin>>cant_prod;
 		
	pago=(cant_prod*100);
 		
    cout<<"su pago sera de:\n"<<pago;
	break;
	
	
		
case 2:
	cout<<"ingrese cantidad de chaquetas:\n";
	cin>>cant_prod;
 		
	pago=(cant_prod*200);
 		
    cout<<"su pago sera de:\n"<<pago;
	break;
	
	
	
case 3:
	cout<<"ingrese cantidad de abrigos:\n";
	cin>>cant_prod;
 		
	pago=(cant_prod*150);
 		
    cout<<"su pago sera de:\n"<<pago;
	break;
	
	
case 4:
	cout<<"ingrese cantidad de pantalones:\n";
	cin>>cant_prod;
 		
	pago=(cant_prod*50);
 		
    cout<<"su pago sera de:\n"<<pago;
	break;
	
	
case 5:
	cout<<"ingrese cantidad de jeans:\n";
	cin>>cant_prod;
 		
	pago=(cant_prod*100);
 		
    cout<<"su pago sera de:\n"<<pago;
	break;
	
	
case 6:
	cout<<"ingrese cantidad de calcetines:\n";
	cin>>cant_prod;
 		
	pago=(cant_prod*60);
 		
    cout<<"su pago sera de:\n"<<pago;
	break;
	
	
case 7:
	cout<<"ingrese cantidad de gorras:\n";
	cin>>cant_prod;
 		
	pago=(cant_prod*250);
 		
    cout<<"su pago sera de:\n"<<pago;
	break;
	
case 8:
	cout<<"ingrese cantidad de botines:\n";
	cin>>cant_prod;
 		
	pago=(cant_prod*1000);
 		
    cout<<"su pago sera de:\n"<<pago;
	break;
	
	
case 9:
	cout<<"ingrese cantidad de fajas\n";
	cin>>cant_prod;
 		
	pago=(cant_prod*160);
 		
    cout<<"su pago sera de:\n"<<pago;
	break;
	
case 10:
	exit(0);
	
default:
	cout<<"ingrese opcion valida\n";
	
}//finaliza switch
getch();
pago_total=(pago_total+pago);
cout<<"\ndesea comprar otro producto?\n";
cout<<"1...SI\n";
cout<<"2...NO\n";
cin>>eleccion2;
system("cls");
}while(eleccion2==1);//finaliza ciclo

cout<<"su pago total sera de:\n"<<pago_total;




getch();



}//FINALIZA VOID TIENDA

void Libreria(){//INICIA VOID LIBRERIA
    int opcion;
    
    do {
        cout << "\n\t**************************";
        cout << "\n\t*Control de librería  2023*";
        cout << "\n\t**************************";
        cout << "\n\t1-->Registro de libros.";
        cout << "\n\t2-->Planilla de empleados.";
        cout << "\n\t3-->Préstamo de libros.";
        cout << "\n\t4-->Devolución de libros.";
        cout << "\n\t5-->Venta de libros.";
        cout << "\n\t6-->Salir.";
        
        cout << "\n\nIngrese una opción: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1: {
                string libros[5][3];
                int cantidad;
                
                cout << "\nIngrese la cantidad de libros que desea ingresar (máximo 5): ";
                cin >> cantidad;
                
                if (cantidad > 5) {
                    cout << "La cantidad ingresada es incorrecta. No puede ingresar más de 5 libros." << endl;
                    break;
                }
                
                for (int i = 0; i < cantidad; i++) {
                    cout << "\nLibro " << i+1 << endl;
                    cout << "Título: ";
                    cin.ignore();
                    getline(cin, libros[i][0]);
                    cout << "Categoría: ";
                    getline(cin, libros[i][1]);
                    cout << "Editorial: ";
                    getline(cin, libros[i][2]);
                }
                
                cout << "\n***** TICKET DE REGISTRO DE LIBROS *****" << endl;
                for (int i = 0; i < cantidad; i++) {
                    cout << "Libro " << i+1 << ":" << endl;
                    cout << "Título: " << libros[i][0] << endl;
                    cout << "Categoría: " << libros[i][1] << endl;
                    cout << "Editorial: " << libros[i][2] << endl;
                }
                
                break;
            }
            
            case 2: {
                string empleados[2][4];
                int cantidad;
                
                cout << "\nIngrese la cantidad de empleados que desea ingresar (máximo 2): ";
                cin >> cantidad;
                
                if (cantidad > 2) {
                    cout << "La cantidad ingresada es incorrecta. No puede ingresar más de 2 empleados." << endl;
                    break;
                }
                
                for (int i = 0; i < cantidad; i++) {
                    cout << "\nEmpleado " << i+1 << endl;
                    cout << "Nombre: ";
                    cin.ignore();
                    getline(cin, empleados[i][0]);
                    cout << "Puesto: ";
                    getline(cin, empleados[i][1]);
                    cout << "Horas trabajadas: ";
                    cin >> empleados[i][2];
                    cout << "Precio por hora: ";
                    cin >> empleados[i][3];
                }
                
                cout << "\n***** FACTURA DE PAGO DE EMPLEADOS *****" << endl;
                for (int i = 0; i < cantidad; i++) {
                    string nombre = empleados[i][0];
                    string puesto = empleados[i][1];
                    int horast = stoi(empleados[i][2]);
                    double sueldoh = stod(empleados[i][3]);
                    double totalsueldo = horast * sueldoh;
                    double ihss = totalsueldo * 0.05;
                    double rap = totalsueldo * 0.03;
                    double deducciones = ihss + rap;
                    double sueldoneto = totalsueldo - deducciones;
                    
                    cout << "Empleado " << i+1 << ":" << endl;
                    cout << "Nombre: " << nombre << endl;
                    cout << "Puesto: " << puesto << endl;
                    cout << "Horas trabajadas: " << horast << endl;
                    cout << "Sueldo por hora: " << sueldoh << endl;
                    cout << "Aporte al seguro: " << ihss << endl;
                    cout << "Aporte al rap: " << rap << endl;
                    cout << "Sueldo ganado: " << totalsueldo << endl;
                    cout << "Deducciones: " << deducciones << endl;
                    cout << "Sueldo neto: " << sueldoneto << endl;
                }
                
                break;
            }
            
            case 3: {
                string prestamos[3][7];
                int cantidad;
                
                cout << "\nIngrese la cantidad de libros que desea prestar (máximo 3): ";
                cin >> cantidad;
                
                if (cantidad > 3) {
                    cout << "La cantidad ingresada es incorrecta. No puede prestar más de 3 libros." << endl;
                    break;
                }
                
                for (int i = 0; i < cantidad; i++) {
                    cout << "\nLibro " << i+1 << endl;
                    cout << "Fecha de préstamo: ";
                    cin.ignore();
                    getline(cin, prestamos[i][0]);
                    cout << "Fecha de devolución: ";
                    getline(cin, prestamos[i][1]);
                    cout << "Título: ";
                    getline(cin, prestamos[i][2]);
                    cout << "Categoría: ";
                    getline(cin, prestamos[i][3]);
                    cout << "Editorial: ";
                    getline(cin, prestamos[i][4]);
                    cout << "Número de identidad del cliente: ";
                    getline(cin, prestamos[i][5]);
                    cout << "Nombre del cliente: ";
                    getline(cin, prestamos[i][6]);
                }
                
                cout << "\n***** TICKET DE PRÉSTAMO DE LIBROS *****" << endl;
                for (int i = 0; i < cantidad; i++) {
                    cout << "Libro " << i+1 << ":" << endl;
                    cout << "Fecha de préstamo: " << prestamos[i][0] << endl;
                    cout << "Fecha de devolución: " << prestamos[i][1] << endl;
                    cout << "Título: " << prestamos[i][2] << endl;
                    cout << "Categoría: " << prestamos[i][3] << endl;
                    cout << "Editorial: " << prestamos[i][4] << endl;
                    cout << "Número de identidad del cliente: " << prestamos[i][5] << endl;
                    cout << "Nombre del cliente: " << prestamos[i][6] << endl;
                }
                
                break;
            }
            
            case 4: {
                string devoluciones[3][7];
                int cantidad;
                
                cout << "\nIngrese la cantidad de libros que desea devolver (máximo 3): ";
                cin >> cantidad;
                
                if (cantidad > 3) {
                    cout << "La cantidad ingresada es incorrecta. No puede devolver más de 3 libros." << endl;
                    break;
                }
                
                for (int i = 0; i < cantidad; i++) {
                    cout << "\nLibro " << i+1 << endl;
                    cout << "Estado (100% = perfecto estado, cualquier otro número = mal estado): ";
                    cin.ignore();
                    getline(cin, devoluciones[i][0]);
                    cout << "Fecha de devolución: ";
                    getline(cin, devoluciones[i][1]);
                    cout << "Título: ";
                    getline(cin, devoluciones[i][2]);
                    cout << "Categoría: ";
                    getline(cin, devoluciones[i][3]);
                    cout << "Editorial: ";
                    getline(cin, devoluciones[i][4]);
                    cout << "Número de identidad del cliente: ";
                    getline(cin, devoluciones[i][5]);
                    cout << "Nombre del cliente: ";
                    getline(cin, devoluciones[i][6]);
                }
                
                cout << "\n***** TICKET DE DEVOLUCIÓN DE LIBROS *****" << endl;
                for (int i = 0; i < cantidad; i++) {
                    cout << "Libro " << i+1 << ":" << endl;
                    cout << "Estado: " << devoluciones[i][0] << endl;
                    cout << "Fecha de devolución: " << devoluciones[i][1] << endl;
                    cout << "Título: " << devoluciones[i][2] << endl;
                    cout << "Categoría: " << devoluciones[i][3] << endl;
                    cout << "Editorial: " << devoluciones[i][4] << endl;
                    cout << "Número de identidad del cliente: " << devoluciones[i][5] << endl;
                    cout << "Nombre del cliente: " << devoluciones[i][6] << endl;
                }
                
                break;
            }
            
            case 5: {
                string ventas[2][4];
                int cantidad;
                
                cout << "\nIngrese la cantidad de libros que desea vender (máximo 2): ";
                cin >> cantidad;
                
                if (cantidad > 2) {
                    cout << "La cantidad ingresada es incorrecta. No puede vender más de 2 libros." << endl;
                    break;
                }
                
                double suma = 0.0;
                
                for (int i = 0; i < cantidad; i++) {
                    cout << "\nLibro " << i+1 << endl;
                    cout << "Nombre del cliente: ";
                    cin.ignore();
                    getline(cin, ventas[i][0]);
                    cout << "Nombre del libro: ";
                    getline(cin, ventas[i][1]);
                    cout << "Categoría del libro: ";
                    getline(cin, ventas[i][2]);
                    cout << "Precio del libro: ";
                    cin >> ventas[i][3];
                    
                    double pre = stod(ventas[i][3]);
                    suma += pre;
                }
                
                double impuesto = suma * 0.15;
                double sumatotal = suma + impuesto;
                
                cout << "\n***** TICKET DE VENTA DE LIBROS *****" << endl;
                for (int i = 0; i < cantidad; i++) {
                    cout << "Libro " << i+1 << ":" << endl;
                    cout << "Cliente: " << ventas[i][0] << endl;
                    cout << "Libro: " << ventas[i][1] << endl;
                    cout << "Categoría: " << ventas[i][2] << endl;
                    cout << "Precio: " << ventas[i][3] << endl;
                }
                
                cout << "\nSubtotal: " << suma << endl;
                cout << "Impuesto: " << impuesto << endl;
                cout << "Total a pagar: " << sumatotal << endl;
                
                break;
            }
            
            case 6:
                cout << "\nSaliendo del programa..." << endl;
                break;
                
            default:
                cout << "\nOpción inválida. Por favor, ingrese una opción válida." << endl;
                break;
        }
        
    } while (opcion != 6);

}
    







void Cajero(){//INICIA VOID CAJERO
float saldo_inicial = 1000;

void imprimir_recibo(float monto) {
    cout << "Recibo:" << endl;
    cout << "Monto retirado: " << monto << endl;
}

void consultar_saldo() {
    cout << "Saldo actual: " << saldo_inicial << endl;
}

void comprar_recargas() {
    int num_recargas;
    float costo_recarga;
    cout << "Ingrese el número de recargas que desea comprar: ";
    cin >> num_recargas;
    cout << "Ingrese el monto de la recarga: ";
    cin >> costo_recarga;
    float total = num_recargas * costo_recarga;

    if (total > saldo_inicial) {
        cout << "No cuenta con fondos suficientes." << endl;
    } else {
        saldo_inicial -= total;
        cout << "Total generado con las recargas: " << total << endl;
    }
}

void pagar_servicios() {
    cout << "***Menú de Pago de Servicios Públicos***" << endl;
    cout << "1. Hondutel" << endl;
    cout << "2. SANAA" << endl;
    cout << "3. ENEE" << endl;
    cout << "4. Salir" << endl;
    int opcion_servicio;
    cout << "Ingrese la opción del servicio a pagar: ";
    cin >> opcion_servicio;

    if (opcion_servicio == 4) {
        return;
    }

    string codigo_cliente, nombre_cliente;
    float cantidad_pagar;
    cout << "Ingrese el código del cliente: ";
    cin >> codigo_cliente;
    cout << "Ingrese el nombre del cliente: ";
    cin >> nombre_cliente;
    cout << "Ingrese la cantidad a pagar: ";
    cin >> cantidad_pagar;

    if (cantidad_pagar > saldo_inicial) {
        cout << "No cuenta con fondos suficientes." << endl;
    } else {
        saldo_inicial -= cantidad_pagar;
        cout << "Pago realizado:" << endl;
        cout << "Código del cliente: " << codigo_cliente << endl;
        cout << "Nombre del cliente: " << nombre_cliente << endl;
        cout << "Cantidad pagada: " << cantidad_pagar << endl;
    }
}

void cajero_automatico() {
    int opcion = 0;

    while (opcion != 6) {
        cout << "***MENU***" << endl;
        cout << "1. Ingreso" << endl;
        cout << "2. Retiro" << endl;
        cout << "3. Consulta de saldo" << endl;
        cout << "4. Recargas" << endl;
        cout << "5. Pago Servicios públicos" << endl;
        cout << "6. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        if (opcion == 1) {
            float monto_ingreso;
            cout << "Ingrese la cantidad a ingresar: ";
            cin >> monto_ingreso;
            saldo_inicial += monto_ingreso;
            cout << "Ingreso exitoso." << endl;
        } else if (opcion == 2) {
            float monto_retiro;
            cout << "Ingrese la cantidad a retirar: ";
            cin >> monto_retiro;

            if (monto_retiro > saldo_inicial) {
                cout << "No cuenta con fondos suficientes." << endl;
            } else {
                saldo_inicial -= monto_retiro;
                cout << "Retiro exitoso." << endl;

                int desea_imprimir_recibo;
                cout << "¿Desea imprimir un recibo? (1: Sí, 2: No): ";
                cin >> desea_imprimir_recibo;
                if (desea_imprimir_recibo == 1) {
                    imprimir_recibo(monto_retiro);
                }
            }
        } else if (opcion == 3) {
            consultar_saldo();
        } else if (opcion == 4) {
            comprar_recargas();
        } else if (opcion == 5) {
            pagar_servicios();
        } else if (opcion == 6) {
            cout << "¡Hasta luego!" << endl;
        } else {
            cout << "Opción ingresada incorrecta." << endl;
        }
    }
}

int main() {
    cajero_automatico();
    return 0;
}

	
}