
struct registroooo{
	char US[30];
	char CONTRASENA[30];
	int LEG;
	char ApNom[30];
	int MAN;
	int TAR;
	int NOC;
};

struct REGISTROO{
	char US[30];
	char CONTRASENA[30];
	int LEG;
	char ApNom[30];
	int MAN;
	int TAR;
	int NOC;
};

struct regis{
	char ApNom[35];
	int DNI;
	int Edad;
	float Peso;
	float Altura;
	char Direccion[35];
	int Telefono;
	FECHA Fecha;
	int Actividad;
};

void ADMINISTRACION()
{
	FILE *archivo;
	registro REG;
	char USUARIO[30], USUARIOO[30];
	int valor, longitud, Band=0, CONTADOR=0, CONT=0, ENTERO=0, A=0, B=0, C=0, D=0,T=0,opc;
	char SALIR='s', S[30]="SALIENDO DEL PROGRAMA...";
	char SALIRR='s';
	int TAM,LEGAJO,BANDERA=0, Seleccion;
	
	FILE *Archivo, *arch;
    registroooo REGISTRO;
	Registro REGI;
	char ENTRENADOR[40];
	int C1=0,C2=0,C3=0, PAGO=0,CONTADORR=0,LEGAJOO,existe=0,MANN=0,TARR=0,NOCC=0;
	
	
	FILE *ARCHIVO, *ARCH;
    REGISTROO REGGISTRO;
	regis Reg;
	char ENTRENADORR[40];
	int K1=0,K2=0,K3=0, PAGOO=0,CONTADORRR=0;
	
	
	FILE *archivoRGT;
	rgt RGT;
	char NOMUSUARIO[40],PASS[68];
	int BANDERAA=0,V=0;
	
	
	do{
	system("cls");
	printf("\t\t\t\t\t\tMODULO ADMINISTRACION:\n\n");
	printf("\t\t\t\t1) INICIAR SESION\n\n");
	printf("\t\t\t\t2) REGISTRAR USUARIOS DE EMPLEADOS\n\n");
	printf("\t\t\t\t3) REGISTRAR ACTIVIDADES DEL GYM\n\n");
	printf("\t\t\t\t4) CALCULAR EL PAGO DEL ENTRENADOR\n\n");
	printf("\t\t\t\t5) ENTRENADOR CON MAYOR CARGA HORARIA\n\n");
	printf("\t\t\t\t6) MENU PRINCIPAL\n\n");
	printf("Elija una opcion:\n\n");
	fflush(stdin);
	scanf("%d",&opc); fflush(stdin);system("cls");
		switch(opc){
		case 1: 
			archivoRGT=fopen("Usuarios.dat","r+b");
	printf("Digite NOMBRE DE USUARIO del empleado: ");fflush(stdin); gets(NOMUSUARIO);fflush(stdin);
	printf("Digite CONTRASENA empleado: ");fflush(stdin);gets(PASS);fflush(stdin);
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
	
	
	printf("\n\n");system("PAUSE");
//	V=0;  <<----------------------------PONER AL FINAL DE CADA CASE EN MENU DE OPCIONES



	fclose(archivoRGT);
			
//			system("cls"); printf("\n\nDESEA VOLVER AL MENU ANTERIOR? Presione s/n: \n\n"); scanf("%c", &SALIR);system("cls");
		        
			break;
		case 2:
				
				
				system("cls");
	printf(" Para crear su USUARIO debe contener 6 caracteres y maximo de 10,\n los cuales podran ser letras, numeros y/o simbolos del conjunto (+, -, /,*,?,¿,!,i).");
    printf("\n\n\t\t\t\t\tCREAR USUARIO\n");
	printf("\n\n\t\t\t\ta) Ser unico para cada usuario registrado\n\n");
    printf("\t\t\t\tb) Comenzar con una letra minuscula. \n\n");
    printf("\t\t\t\tc) Tener al menos 2 letras mayusculas. \n\n");
    printf("\t\t\t\td) Tener como maximo 3 digitos numericos (OPCIONAL).\n\n");
    printf("Ingrese el nombre de usuario que desea crear: "); fflush(stdin); gets(USUARIO); fflush(stdin);
    while(Band!=1)
    {
    	//******************************************************//
    	archivo=fopen("Usuarios.dat","a+b");
    	fread(&REG,sizeof(registro),1,archivo);
    	while(!feof(archivo))
    	{
    		valor=strcmp(USUARIO,REG.US);
    		if (valor==0)
    		{
    			A=1;
    			printf("\n\n*********>> Ya existe este usuario, pruebe con otro <<*********\n\n");
    		}
    		fread(&REG,sizeof(registro),1,archivo);
    	}
    	
    	fclose(archivo);
    	//******************************************************//
    	longitud = strlen(USUARIO); //CALCULA la longitud
    	if(longitud<6 || longitud>10)
    	{
    		printf("\n*********>> El usuario que ingreso no cumple con la cantidad de caracteres <<*********\n\n");
    	}
    	if(USUARIO[0]=='a' || USUARIO[0]=='b' || USUARIO[0]=='c' || USUARIO[0]=='d' || USUARIO[0]=='e' || USUARIO[0]=='f' || USUARIO[0]=='g' || USUARIO[0]=='h' || USUARIO[0]=='i' || USUARIO[0]=='j'|| USUARIO[0]=='k' || USUARIO[0]=='l' || USUARIO[0]=='m' || USUARIO[0]=='n' || USUARIO[0]=='o' || USUARIO[0]=='p' || USUARIO[0]=='q' || USUARIO[0]=='r' || USUARIO[0]=='s' || USUARIO[0]=='t' || USUARIO[0]=='u' || USUARIO[0]=='v' || USUARIO[0]=='w' || USUARIO[0]=='x' || USUARIO[0]=='y' || USUARIO[0]=='z')
    	{
    		
    	}else{
    		B=1;
    		printf("\n*********>> El usuario que ingreso no tiene su primer caracter en minuscula --->  %c <<*********\n\n",USUARIO[0]);
    	}
    	for(int i=0;i<longitud;i++)
    	{
    		if((USUARIO[i]=='A')||(USUARIO[i]=='B')||(USUARIO[i]=='C')||(USUARIO[i]=='D')||(USUARIO[i]=='E')||(USUARIO[i]=='F')||(USUARIO[i]=='G')||(USUARIO[i]=='H')||(USUARIO[i]=='I')||(USUARIO[i]=='J')||(USUARIO[i]=='K')||(USUARIO[i]=='L')||(USUARIO[i]=='M')||(USUARIO[i]=='N')||(USUARIO[i]=='O')||(USUARIO[i]=='P')||(USUARIO[i]=='Q')||(USUARIO[i]=='R')||(USUARIO[i]=='S')||(USUARIO[i]=='T')||(USUARIO[i]=='U')||(USUARIO[i]=='V')||(USUARIO[i]=='W')||(USUARIO[i]=='X')||(USUARIO[i]=='Y')||(USUARIO[i]=='Z'))
    		{
    			CONTADOR=CONTADOR+1;
    		}
    		if((i==longitud-1)&&(CONTADOR<2))
    		{
    			C=1;
    			printf("\n*********>> El usuario que ingreso no tiene 2 mayusculas <<*********\n\n");
    			i=longitud;
    		}
    	}
    	for(int i=0;i<=longitud;i++)
    	{
    		for(int j=0;j<10;j++)
    		{
    			if(j==0)
    			{
    				if(USUARIO[i]=='0')
    				{
    					ENTERO=ENTERO+1;
    				}
    			}
    			if(j==1)
    			{
    				if(USUARIO[i]=='1')
    				{
    					ENTERO=ENTERO+1;
    				}
    			}
    			if(j==2)
    			{
    				if(USUARIO[i]=='2')
    				{
    					ENTERO=ENTERO+1;
    				}
    			}
    			if(j==3)
    			{
    				if(USUARIO[i]=='3')
    				{
    					ENTERO=ENTERO+1;
    				}
    			}
    			if(j==4)
    			{
    				if(USUARIO[i]=='4')
    				{
    					ENTERO=ENTERO+1;
    				}
    			}
    			if(j==5)
    			{
    				if(USUARIO[i]=='5')
    				{
    					ENTERO=ENTERO+1;
    				}
    			}
    			if(j==6)
    			{
    				if(USUARIO[i]=='6')
    				{
    					ENTERO=ENTERO+1;
    				}
    			}
    			if(j==7)
    			{
    				if(USUARIO[i]=='7')
    				{
    					ENTERO=ENTERO+1;
    				}
    			}
    			if(j==8)
    			{
    				if(USUARIO[i]=='8')
    				{
    					ENTERO=ENTERO+1;
    				}
    			}
    			if(j==9)
    			{
    				if(USUARIO[i]=='9')
    				{
    					ENTERO=ENTERO+1;
    				}
    			}
    		}
    		if(i==longitud && ENTERO>3)
    		{
    			D=1;
    			printf("\n*********>> El usuario que ingreso tiene mas de 3 digitos numericos <<*********\n\n");
    		}
    	}
    	//******************************************************//
    	
    	if(A==0 && B==0 && C==0 && D==0)
    	{
    		printf("\n\n\n************ NOMBRE DE USUARIO CORRECTO, AHORA CREE UNA CONTRASENA *****************\n\n"); system("PAUSE");
    		fflush(stdin); strcpy(USUARIOO, USUARIO);
    		A=0; B=0; C=0; D=0, ENTERO=0, CONTADOR=0;
    		system("cls");
    		printf(" Para crear su CONTRASENA debe respetar lo siguiente.\n");
    		printf("\n\n\t\t\tCREAR CONTRASEÑA\n");
    		printf("\n\na)  Debe tener entre 6 y 32 caracteres.\n\n");
    		printf("b) Debe contener al menos una letra mayuscula, una letra minuscula y un numero. \n\n");
    		printf("Ingrese la contrasena que desea crear: "); fflush(stdin); gets(USUARIO); fflush(stdin);
    		while(Band!=1)
    		{
    			longitud = strlen(USUARIO);
    			if(longitud<6 || longitud>32)
    			{
    				A=1;
    				printf("\n*********>> La contrasena no cumple con la cantidad de caracteres <<*********\n\n");
    			}
    			for(int i=0;i<longitud;i++)
    			{
    				if((USUARIO[i]=='A')||(USUARIO[i]=='B')||(USUARIO[i]=='C')||(USUARIO[i]=='D')||(USUARIO[i]=='E')||(USUARIO[i]=='F')||(USUARIO[i]=='G')||(USUARIO[i]=='H')||(USUARIO[i]=='I')||(USUARIO[i]=='J')||(USUARIO[i]=='K')||(USUARIO[i]=='L')||(USUARIO[i]=='M')||(USUARIO[i]=='N')||(USUARIO[i]=='O')||(USUARIO[i]=='P')||(USUARIO[i]=='Q')||(USUARIO[i]=='R')||(USUARIO[i]=='S')||(USUARIO[i]=='T')||(USUARIO[i]=='U')||(USUARIO[i]=='V')||(USUARIO[i]=='W')||(USUARIO[i]=='X')||(USUARIO[i]=='Y')||(USUARIO[i]=='Z'))
    				{
    					CONTADOR=CONTADOR+1;
    				}
    				if((i==longitud-1)&&(CONTADOR<1))
    				{
    					C=1;
    					printf("\n*********>> La contrasena que ingreso no tiene al menos una mayuscula <<*********\n\n");
    					i=longitud;
    				}
    			}
    			for(int i=0;i<longitud;i++)
    			{
    				if(USUARIO[0]=='a' || USUARIO[0]=='b' || USUARIO[0]=='c' || USUARIO[0]=='d' || USUARIO[0]=='e' || USUARIO[0]=='f' || USUARIO[0]=='g' || USUARIO[0]=='h' || USUARIO[0]=='i' || USUARIO[0]=='j'|| USUARIO[0]=='k' || USUARIO[0]=='l' || USUARIO[0]=='m' || USUARIO[0]=='n' || USUARIO[0]=='o' || USUARIO[0]=='p' || USUARIO[0]=='q' || USUARIO[0]=='r' || USUARIO[0]=='s' || USUARIO[0]=='t' || USUARIO[0]=='u' || USUARIO[0]=='v' || USUARIO[0]=='w' || USUARIO[0]=='x' || USUARIO[0]=='y' || USUARIO[0]=='z')
    				{
    					CONTADOR=CONTADOR+1;
    				}
    				if((i==longitud-1)&&(CONTADOR<1))
    				{
    					C=1;
    					printf("\n*********>> La contrasena que ingreso no tiene al menos una minuscula <<*********\n\n");
    					i=longitud;
    				}
    			}
    			if(A==0 && B==0 && C==0 && D==0)
    			{
    				printf("\n\n\n************ CONTRASEÑA CORRECTA *****************\n\n");
					archivo=fopen("Usuarios.dat","ab"); fflush(stdin);
					strcpy(REG.CONTRASENA, USUARIO);
					strcpy(REG.US, USUARIOO);
					printf("\n\nIngrese el numero de legajo: \n\n"); fflush(stdin); scanf("%d", &REG.LEG); fflush(stdin);
					printf("\n\nIngrese el nombre: \n\n"); fflush(stdin); gets(REG.ApNom); fflush(stdin);
					Band=1;
					REG.MAN=0; REG.NOC=0; REG.TAR=0;
					fwrite(&REG,sizeof(registro),1,archivo);
					fclose(archivo); 
    			}else{
    				A=0; B=0; C=0; D=0, ENTERO=0, CONTADOR=0;
    				printf("\nIntente con otra contrasena: "); fflush(stdin); gets(USUARIO); fflush(stdin);
    				printf("\n\n"); system("PAUSE");
    			}
    		}
    	}else{
    		A=0; B=0; C=0; D=0, ENTERO=0, CONTADOR=0;
    		printf("\nIngrese el nombre de usuario que desea crear: "); fflush(stdin); gets(USUARIO); fflush(stdin);
    		printf("\n\n"); system("PAUSE");
    	}
    }
	
	printf("\n\n");system("PAUSE");
				
			
			system("cls"); printf("\n\nDESEA VOLVER AL MENU ANTERIOR? Presione s/n: \n\n"); scanf("%c", &SALIR);system("cls");
		    break;	
		case 3:
if(V==1)
{
	
	
	/*
	char SALIR='s';
	int TAM,LEGAJO,BANDERA=0, Seleccion;*/
	system("cls");
	archivo=fopen("Entrenadores.dat","r+b");
	printf("Digite el legajo del entrenador: "); scanf("%d",&LEGAJO);fflush(stdin);
	fread(&REG,sizeof(registro),1,archivo);
	BANDERA=0; SALIRR='s';
	while(!feof(archivo) && BANDERA==0)
	{
		if(REG.LEG==LEGAJO)
		{
			while(SALIRR=='s')
			{
				printf("\nEl entrenador %s TRABAJA EN TURNO:\n",REG.ApNom);
				printf("1) Manana: ZUMBA\n");
				printf("2) Tarde: SPINING\n");
				printf("3) Noche: PILATE\n");fflush(stdin); scanf("%d",&Seleccion);fflush(stdin);
				if(Seleccion==1)
				{
					if(REG.MAN==1)
					{
						printf("\nYa fue seleccionada esta opcion antes...\n");
					}else{
						REG.MAN=1;
					}
				}
				if(Seleccion==2)
				{
					if(REG.TAR==1)
					{
						printf("\nYa fue seleccionada esta opcion antes...\n");
					}else{
						REG.TAR=1;
					}
				}
				if(Seleccion==3)
				{
					if(REG.NOC==1)
					{
						printf("\nYa fue seleccionada esta opcion antes...\n");
					}else{
						REG.NOC=1;
					}
				}
			    printf("\nTrabaja %s otro turno mas? PRESIONE s/n :",REG.ApNom);fflush(stdin); scanf("%c",&SALIRR);fflush(stdin);
			    system("cls");
			}
                printf("\n\nSe guardo correctamente actividades de entrenador... ");
				TAM=sizeof(registro);
				fseek(archivo, -TAM,SEEK_CUR);
				fwrite(&REG,sizeof(registro),1,archivo);
				BANDERA=1;
		}
		else{
			fread(&REG,sizeof(registro),1,archivo);
		}
	}
	
	fclose(archivo);
	
	printf("\n\n");system("PAUSE");
	
	
	
	
}	
if(V==0)
			{
				system("cls");
				printf("\n\n\t\t*****************>> No se inicio sesion, inicie sesion para continuar... <<*****************\n\n\n");system("PAUSE");
			}		
			
			system("cls"); printf("\n\nDESEA VOLVER AL MENU ANTERIOR? Presione s/n: \n\n"); scanf("%c", &SALIR);system("cls");
		        
			break;
		case 4: 

if(V==1)
{
	
	
	
	printf("\t\t***********>> Ingrese el legajo de entrenador para calcular su sueldo: <<***********\n");scanf("%d",&LEGAJOO);fflush(stdin);
	arch=fopen("Entrenadores.dat","r+b");
	fread(&REGISTRO,sizeof(registroooo),1,arch);
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
			printf("\nEL ENTRENADOR ES --->> '%s'\n",REGISTRO.ApNom);
		}
		fread(&REGISTRO,sizeof(registroooo),1,arch);
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
				C1=C1+1;
			}
		}
		if(TARR==1)
		{
			if(REGI.Actividad==2)
			{
				C2=C2+1;
			}
		}
		if(NOCC==1)
		{
			if(REGI.Actividad==3)
			{
				C3=C3+1;
			}
		}
			fread(&REGI,sizeof(Registro),1,Archivo);
	}
	     if(existe==1)
     	{
	  	 printf("\nSU SUELDO ES $%d (COBRA $1500 POR PERSONA)",(C1+C2+C3)*1500);
	     printf("\n\n\t\t\t***************>> EL ENTRENADOR TIENE A CARGO: <<***************\n");
	     printf("\t\t%d PERSONAS EN ZUMBA\n",C1);
	     printf("\t\t%d PERSONAS EN SIPINING\n",C2);
	     printf("\t\t%d PERSONAS EN PILATE\n",C3);
	     system("PAUSE");
	     existe=0;
	    }
	
	C1=0; C2=0; C3=0;
	fclose(Archivo);

	
	
	
	
}	
if(V==0)
			{
				system("cls");
				printf("\n\n\t\t*****************>> No se inicio sesion, inicie sesion para continuar... <<*****************\n\n\n");system("PAUSE");
			}
					        
		        system("cls"); printf("\n\nDESEA VOLVER AL MENU ANTERIOR? Presione s/n: \n\n"); scanf("%c", &SALIR);system("cls");
		        
			    break;
		case 5: 
if(V==1)
{
	
	
	
	ARCHIVO=fopen("Socios.dat","r+b");
	fread(&Reg,sizeof(regis),1,ARCHIVO);
	while(!feof(ARCHIVO))
	{
			if(Reg.Actividad==1)
			{
				K1=K1+1;
			}
			if(Reg.Actividad==2)
			{
				K2=K2+1;
			}
			if(Reg.Actividad==3)
			{
				K3=K3+1;
			}
			fread(&Reg,sizeof(regis),1,ARCHIVO);
	}
	fclose(ARCHIVO);
	
	ARCH=fopen("Entrenadores.dat","r+b");
	fread(&REGGISTRO,sizeof(REGISTROO),1,ARCH);
	while(!feof(ARCH))
	{
		   	if(REGGISTRO.MAN==1)
		    {
			PAGOO=PAGOO+1;
		    }
	    	if(REGGISTRO.TAR==1)
		    {
			PAGOO=PAGOO+1;
		    }
	    	if(REGGISTRO.NOC==1)
	    	{
			PAGOO=PAGOO+1;
		    }
		    if(PAGOO>CONTADORRR)
		    {
		    	strcpy(ENTRENADORR,Reg.ApNom);
		    	CONTADORRR=PAGOO;
		    }
		    PAGOO=0;
		
		fread(&REGGISTRO,sizeof(REGISTROO),1,ARCH);
	}
	printf("\n\n\t\t********>> El entrenador con mayor carga horaria es %s y tiene %d TURNOS <<********\n",ENTRENADORR,CONTADORRR);
	printf("\n\n");system("PAUSE");
	fclose(ARCH);
	
	
	
	
}	
if(V==0)
			{
				system("cls");
				printf("\n\n\t\t*****************>> No se inicio sesion, inicie sesion para continuar... <<*****************\n\n\n");system("PAUSE");
			}

		      system("cls"); printf("\n\nDESEA VOLVER AL MENU ANTERIOR? Presione s/n: \n\n"); scanf("%c", &SALIR);system("cls");
			  break;
		case 6:
		      T=1;
		      system("cls");
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
	}while(T==0);
	V==0;
	printf("\n\n");system("PAUSE");
}
