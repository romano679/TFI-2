#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include "RECEPCION.h" 
#include "CREARUSUARIO.h"
#include "MODULOGYM.h"
#include "ADMINISTRACION.h"


void menu();
void ModGYM();
void RECEPCION();
void ADMINISTRACION();
void CREARUSUARIO(FILE *archivo);
void CREARCONTRASENA(FILE *archivo);

int main()
{
	
	menu();
	
	printf("\n\n");
	system("PAUSE");
}

void menu()
{
	char SALIR='s', S[30]="SALIENDO DEL PROGRAMA...";
	int opc, C=0;
	do{
	
	printf("\t\t\t\t\t\tMENU PRINCIPAL:\n\n");
	printf("\t\t\t\t1) Modulo GYM\n\n");
	printf("\t\t\t\t2) Modulo RECEPCION\n\n");
	printf("\t\t\t\t3) Modulo ADMINISTRACION\n\n");
	printf("\t\t\t\t4) CREAR USUARIO PARA ENTRENADORES\n\n");
	printf("\t\t\t\t5) CERRAR PROGRAMA\n\n");
	printf("Elija una opcion:\n\n");
	fflush(stdin);
	scanf("%d",&opc); fflush(stdin);
		switch(opc){
		case 1: 
			ModGYM();
		        
			break;
		case 2:
			RECEPCION();
			system("cls");
		        
		    break;	
		case 3:
			ADMINISTRACION();
			system("cls"); printf("\n\nDesea volver al menu principal? Presione s/n: \n\n"); scanf("%c", &SALIR);system("cls");
		        if(SALIR=='n')
		        {
		        	C=1;
		        	system("cls"); printf("\t");
		        	for(int i=0;i<24;i++)
		        	{
		        		printf("%c",S[i]);
		        		Sleep(150);
		        	}
		        }
			break;
		case 4: 
		        CREARUSUARIO();
		        system("cls"); printf("\n\nDesea volver al menu principal? Presione s/n: \n\n"); scanf("%c", &SALIR);system("cls");
		        if(SALIR=='n')
		        {
		        	C=1;
		        	system("cls"); printf("\t");
		        	for(int i=0;i<24;i++)
		        	{
		        		printf("%c",S[i]);
		        		Sleep(150);
		        	}
		        }
			    break;
		case 5: 
		      C=1;
		        	system("cls"); printf("\n\n\n\t\t\t");
		        	for(int i=0;i<24;i++)
		        	{
		        		printf("%c",S[i]);
		        		Sleep(150);
		        	}
			  break;	    
		default:
			if(opc=!0)
			{
				system("cls");
				printf("Ingrese una opcion correcta:\n\n");
				C=0;
			}
			break;
	    }
	}while(C==0);
	
}


