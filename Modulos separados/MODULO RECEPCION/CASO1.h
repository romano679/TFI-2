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

void CASO1(int BANDERA)
{
	registroo REG;
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
}
