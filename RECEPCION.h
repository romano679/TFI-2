///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct FECHA{
	int Dia;
	int Mes;
	int Anio;
}; 

struct registroo{
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

void RECEPCION()
{
	    char SALIR='s';
		int opc, C=0,CON=1,BANDERA=0;
		registroo REG;
	    FILE *archivo1;
		system("cls");
	do{
	
        	printf("\t\t\t\t\t\tMODULO RECEPCION:\n\n");
        	printf("\t\t\t\t1) REGISTRAR SOCIO (CLIENTE)\n\n");
        	printf("\t\t\t\t2) REGISTRAR ACTIVIDAD DE SOCIO\n\n");
        	printf("\t\t\t\t3) LISTADO DE PARTICIPANTES EN DETERMINADA ACTIVIDAD\n\n");
        	printf("\t\t\t\t4) LISTADO DE FECHA DE PAGO\n\n");
        	printf("\t\t\t\t5) MENU PRINCIPAL\n\n");
        	printf("Elija una opcion:\n\n");
        	fflush(stdin);
        	scanf("%d",&opc); fflush(stdin);system("cls");
		switch(opc){
		case 1:
			system("cls");
			printf("Ingrese el APELLIDO y NOMBRE del socio a registrar: "); fflush(stdin); gets(REG.ApNom); fflush(stdin);
        	printf("\nIngrese el DNI del socio a registrar: "); scanf("%d",&REG.DNI); fflush(stdin);
        	printf("\nIngrese la EDAD del socio a registrar: "); scanf("%d",&REG.Edad); fflush(stdin);
        	printf("\nIngrese la ALTURA del socio a registrar: "); scanf("%f",&REG.Altura); fflush(stdin);
        	printf("\nIngrese el PESO del socio a registrar: "); scanf("%f",&REG.Peso); fflush(stdin);
        	printf("\nIngrese el TELEFONO del socio a registrar: "); scanf("%d",&REG.Telefono); fflush(stdin);
        	printf("\nIngrese la DIRECCION del socio a registrar: "); fflush(stdin); gets(REG.Direccion); fflush(stdin);
        	printf("\n\t\tIngrese la fecha de ingreso");
        	printf("\nIngrese el dia de ingreso: "); scanf("%d",&REG.Fecha.Dia);
        	if(REG.Fecha.Dia>31 || REG.Fecha.Dia<1)
        	{
        		while(REG.Fecha.Dia>31 || REG.Fecha.Dia<1)
        		{
        			fflush(stdin); printf("\nIngrese un dia correcto: "); scanf("%d",&REG.Fecha.Dia);
        		}
        	}
        	printf("\nIngrese el mes de ingreso: "); scanf("%d",&REG.Fecha.Mes);
        	if(REG.Fecha.Mes>12 || REG.Fecha.Mes<1)
        	{
        		while(REG.Fecha.Mes>12 || REG.Fecha.Mes<1)
        		{
        			fflush(stdin); printf("\nIngrese un mes correcto: "); scanf("%d",&REG.Fecha.Mes);
        		}
        	}
        	printf("\nIngrese el anio de ingreso: "); scanf("%d",&REG.Fecha.Anio);
        	if(REG.Fecha.Anio>9999 || REG.Fecha.Anio<1)
        	{
        		while(REG.Fecha.Anio>9999 || REG.Fecha.Anio<1)
        		{
        			fflush(stdin); printf("\nIngrese un dia correcto: "); scanf("%d",&REG.Fecha.Anio);
        		}
        	} 	
        			fflush(stdin);	
        		 BANDERA=1;
        		 printf("\n\n**** Datos de socio cargado, para guardar indique la ACTIVIDAD que realizara el socio ****\n\n");system("PAUSE");
        		 system("cls");
			break;
		case 2:
			if(BANDERA==0)
			{
				printf("\n\n**>> ANTES DE CONTINUAR, PRIMERO DEBE CARGAR LOS DATOS DEL SOCIO Y ASI RECIEN PODRA ELEGIR LA ACTIVIDAD A REGISTRAR <<**\n\n");
			}
			if(BANDERA==1)
			{
				printf("\t******* ELIJA ACTIVIDAD QUE DESEA REALIZAR EL SOCIO *******");
	            printf("\n\t******* 1) ZUMBA *******");
        	    printf("\n\t******* 2) SPINING *******");
	            printf("\n\t******* 3) PILATE *******\n");printf("Elija una opcion: "); scanf("%d",&REG.Actividad);
	            archivo1=fopen("SOCIOS.dat","ab");
	            fwrite(&REG,sizeof(registroo),1,archivo1);
	            fclose(archivo1);
	            BANDERA=0;
			}
			fflush(stdin);
		    printf("\n\nDesea volver al menu anterior? Presione s/n: \n\n"); scanf("%c", &SALIR);fflush(stdin);system("cls");
		        if(SALIR=='n')
		        {
		        	C=1;
		        }
		    break;	
		case 3:
			    archivo1=fopen("SOCIOS.dat","a+b");
	            fread(&REG,sizeof(registroo),1,archivo1);
	            system("cls");
	            printf("\t\t**** LISTA DE SOCIOS Y SUS ACTIVIDADES ****\n");
	            while(!feof(archivo1))
	            {
	            	if(REG.Actividad==1)
	            	{
	            		printf("\n'%d' Socio '%s', participa de Actividad --->> ZUMBA\t",CON, REG.ApNom);
	            	}
	            	if(REG.Actividad==2)
					{
						printf("\n'%d' Socio '%s', participa de Actividad --->> SPINIG\t",CON, REG.ApNom);
	            	}
	            	if(REG.Actividad==3)
	            	{
	            		printf("\n'%d' Socio '%s', participa de Actividad --->> PILATE\t",CON, REG.ApNom);
	            	}
	            	CON=CON+1; Sleep(300);
	            	fread(&REG,sizeof(registroo),1,archivo1);
	            }
	            fclose(archivo1);
			    fflush(stdin);
			    printf("\n\nDesea volver al menu anterior? Presione s/n: \n\n"); scanf("%c", &SALIR);fflush(stdin);system("cls");
		        if(SALIR=='n')
		        {
		        	C=1;
		        }
		        CON=1;
			break;
		case 4: 
		        archivo1=fopen("SOCIOS.dat","a+b");
	            fread(&REG,sizeof(registroo),1,archivo1);
	            while(!feof(archivo1))
	            {
	            	printf("\nLa fecha del primer pago del socio %s es: %d/%d/%d \t",REG.ApNom, REG.Fecha.Dia,REG.Fecha.Mes,REG.Fecha.Anio);
	            	Sleep(300);
	            	printf("\nPor consecuente debe pagar el mismo numero de dia cada mes siguiente...\n");
	            	Sleep(300);
	            	fread(&REG,sizeof(registroo),1,archivo1);
	            }
	            fclose(archivo1);
		        fflush(stdin);
		        printf("\n\nDesea volver al menu anterior? Presione s/n: \n\n"); scanf("%c", &SALIR);fflush(stdin); system("cls");
		        if(SALIR=='n')
		        {
		        	C=1;
		        }
			    break;
		case 5:
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
	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
