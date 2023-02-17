struct registro{
	char US[30];
	char CONTRASENA[30];
	int LEG;
	char ApNom[30];
	int MAN;
	int TAR;
	int NOC;
};

void CREARUSUARIO()
{
	FILE *archivo;
	registro REG;
	char USUARIO[30], USUARIOO[30];
	int valor, longitud, Band=0, CONTADOR=0, CONT=0, ENTERO=0, A=0, B=0, C=0, D=0;
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
    	archivo=fopen("Entrenadores.dat","a+b");
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
					archivo=fopen("Entrenadores.dat","ab"); fflush(stdin);
					strcpy(REG.CONTRASENA, USUARIO);
					strcpy(REG.US, USUARIOO);
					printf("\n\nIngrese el numero de legajo del entrenador: \n\n"); fflush(stdin); scanf("%d", &REG.LEG); fflush(stdin);
					printf("\n\nIngrese el nombre del entrenador: \n\n"); fflush(stdin); gets(REG.ApNom); fflush(stdin);
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
}
