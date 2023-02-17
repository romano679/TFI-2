struct rgt{
	char US[30];
	char CONTRASENA[30];
	int LEG;
	char ApNom[30];
	int MAN;
	int TAR;
	int NOC;
};
/////////////////////////////////////////////////////////////////////
struct registrooo{
	char US[30];
	char CONTRASENA[30];
	int LEG;
	char ApNom[30];
	int MAN;
	int TAR;
	int NOC;
};

struct FECHAA{
	int Dia;
	int Mes;
	int Anio;
}; 

struct Registro{
	char ApNom[35];
	int DNI;
	int Edad;
	float Peso;
	float Altura;
	char Direccion[35];
	int Telefono;
	FECHAA Fecha;
	int Actividad;
};
/////////////////////////////////////////////////////////////////////
struct rEgistro{
	char RUTINAS[400];
};

void ModGYM()
{
	FILE *archivoRGT;
	rgt RGT;
	char NOMUSUARIO[40],PASS[68];
	int BANDERAA=0,V=0;
	
	
	FILE *Archivo, *arch;
    registrooo REGISTRO;
	Registro REGI;
	char ENTRENADOR[40];
	int C1=0,C2=0,C3=0, PAGO=0,CONTADORR=0,LEGAJOO,existe=0,MANN=0,TARR=0,NOCC=0;
	
	FILE *archivo;
	rEgistro REG;
	char SALIR='s';
	
	int opc, C=0;
	do{
			system("cls");
			printf("\t\t\t\t\t\tMODULO GYM:\n\n");
			printf("\t\t\t\t1) Iniciar Sesion\n\n");
			printf("\t\t\t\t2) Mostrar Lista De Socios A Cargo\n\n");
			printf("\t\t\t\t3) Registrar Rutinas\n\n");
			printf("\t\t\t\t4) Menu Anterior\n\n");
			printf("Elija una opcion:\n\n");
			fflush(stdin);
			scanf("%d",&opc); fflush(stdin);
		switch(opc){
		case 1: 
		    system("cls");
			
			
			archivoRGT=fopen("Entrenadores.dat","r+b");
			printf("Digite NOMBRE DE USUARIO del entrenador: ");fflush(stdin); gets(NOMUSUARIO);fflush(stdin);
			printf("Digite CONTRASENA del entrenador: ");fflush(stdin);gets(PASS);fflush(stdin);
			fread(&RGT,sizeof(rgt),1,archivoRGT);
			while(!feof(archivoRGT) && BANDERAA==0)
			{
				if((strcmp(RGT.US,NOMUSUARIO))==0 && (strcmp(RGT.CONTRASENA,PASS)==0))
				{
					    system("cls");
  		              printf("\n\t\t**********>> SESION INICIADA CORRECTAMENTE <<**********... ");
						BANDERAA=1;
						V=1;
				}
				else{
					fread(&RGT,sizeof(rgt),1,archivoRGT);
				}
			}
			if(V==0)
			{
				system("cls");
				printf("\n\t**********************>> NO SE PUDO ENTRAR, USUARIO O CONTRASENA INCORECTA <<**********************\n");
			}
			
			fclose(archivoRGT);
	
			printf("\n\n");system("PAUSE");
			
			
			
			break;
		case 2:
			if(V==1)
			{
				
            				system("cls");
            				printf("\t\t***********>> DIGITE LEGAJO DEL ENTRENADOR: <<***********\n");scanf("%d",&LEGAJOO);fflush(stdin);
            ////////////////////////////////////////////////////////////////////////////////////////////////////	
            	arch=fopen("Entrenadores.dat","r+b");
            	fread(&REGISTRO,sizeof(registrooo),1,arch);
            	while(!feof(arch))
            	{
	            	if(LEGAJOO==REGISTRO.LEG)
	            	{
	            		if(REGISTRO.MAN==1)
	            		{
		            		PAGO=PAGO+1;
		            		MANN=1;
	            		}
	            		if(REGISTRO.TAR==1)
	            		{
	            			PAGO=PAGO+1;
	            			TARR=1;
	            		}
	            		if(REGISTRO.NOC==1)
	            		{
	            			PAGO=PAGO+1;
	            			NOCC=1;
	            		}
	            		if(PAGO>CONTADORR)
	            		{

            				CONTADORR=PAGO;
            			}
            			PAGO=0;
	            		existe=1;
            			printf("\nEL ENTRENADOR ES --->> '%s' --->> TIENE A CARGO LOS SOCIOS:\n",REGISTRO.ApNom);
            		}
            		fread(&REGISTRO,sizeof(registrooo),1,arch);
            	}
            	if(existe==0)
            	{
            		printf("\n\n\t\t**********>> No existe un entrenador con dicho LEGAJO <<**********\n\n"); system("PAUSE");
            	}
            	fclose(arch);
	
            	//////////////////////////////////////////////////////////////////////////////
            	Archivo=fopen("Socios.dat","r+b");
            	fread(&REGI,sizeof(Registro),1,Archivo);
            	while(!feof(Archivo))
            	{
            		if(MANN==1)
            		{
            			if(REGI.Actividad==1)
            			{
	            			printf("\nSOCIO: %s inscripto en ZUMBA",REGI.ApNom);
	            			C1=C1+1;
	            		}
	            	}
	            	if(TARR==1)
            		{
            			if(REGI.Actividad==2)
            			{
            				printf("\nSOCIO: %s inscripto en SPINING",REGI.ApNom);
	            			C2=C2+1;
            			}
            		}
            		if(NOCC==1)
            		{
            			if(REGI.Actividad==3)
            			{
            				printf("\nSOCIO: %s inscripto en PILATE",REGI.ApNom);
            				C3=C3+1;
            			}
            		}
	            		fread(&REGI,sizeof(Registro),1,Archivo);
            	}
            	C1=0; C2=0; C3=0;
            	fclose(Archivo);
	            printf("\n\n");system("PAUSE");
			
			   	///////////////////////////////<<<<<<<<<<**********************
			}

			if(V==0)
			{
				system("cls");
				printf("\n\n\t\t*****************>> No se inicio sesion, inicie sesion para continuar... <<*****************\n\n\n");system("PAUSE");
			}else{
				fflush(stdin);
				printf("\n\n\t\t**************>> DESEA VOLVER AL MENU ANTERIOR? PRESIONE s/n **************>> ");scanf("%c",&SALIR);fflush(stdin);
				if(SALIR=='n')
				{
					C=1;
				}
			}
			
		    break;	
		case 3:
			system("cls");
			if(V==1)
			{
				
				archivo=fopen("Rutinas.dat","a+b");
				printf("Ingrese las rutinas que desea registrar en un texto: \n");fflush(stdin);gets(REG.RUTINAS);fflush(stdin);
				fwrite(&REG,sizeof(rEgistro),1,archivo);
				fclose(archivo);
				
			}
            if(V==0)
			{
				system("cls");
				printf("\n\n\t\t*****************>> No se inicio sesion, inicie sesion para continuar... <<*****************\n\n\n");system("PAUSE");
			}else{
				fflush(stdin);
				printf("\n\n\t\t**************>> DESEA VOLVER AL MENU ANTERIOR? PRESIONE s/n **************>> ");scanf("%c",&SALIR);fflush(stdin);
				if(SALIR=='n')
				{
					C=1;
				}
			}
			
			break;
		case 4: 
		        C=1;
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
	V=0;
	system("cls");
}
