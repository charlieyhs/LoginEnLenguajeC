#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int main()
{
	char usuario[200],clave[200],usu_sesion[100],clave_sesion[100],caracter;
	int intento = 0,ingresa = 0,i=0;
	printf("digite el usuario: "); gets(usuario);
	printf("digite la clave: ");gets(clave);
	system("cls");
	do {
	i=0;
	system ("cls");	
	printf("\t\t\t INICIO DE SESION\n");
	printf("\t\t\t---------------------");
	printf("\n\n");
	printf("\t\t USUARIO: ");gets(usu_sesion);
	printf("\n\t\t CLAVE: ");
	while(caracter = getch()){
		if(caracter==13){
			clave_sesion[i]='\0';
			break;
		}
		else if(caracter==8){
			if(i>0){
			i--;
			printf("\b \b");
			}	
		}
		else
		{
			printf("*");
			clave_sesion[i]=caracter;
			i++;		
		}	
	}
	if(strcmp(usuario,usu_sesion)==0 && strcmp(clave,clave_sesion)==0){
	
		ingresa=1;
	}
	else{
		printf("\t\t\t\n\t Usuario y/o clave son incorrectos\n");
		intento++;
		getchar();
	}	
	} while(intento<3 && ingresa ==0);
	if(ingresa==1){
		printf("\n\tBienvenido al sistema\n");
	}
	else {
		printf("\t ha sobrepasado el numero maximo de intentos\n");
	}
	return 0;
}
