#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct database{
	char cuenta [9];
	char nombre [51];
	float saldo;
}database;

typedef struct movimientos{
	char cuenta [9];
	float monto;
	float operacion;
}movimientos;

void main(){
	/*---Declaracion de variables---*/
	FILE *data, *movs, *registro; 
	char c, buffer[23];
	int cont;

	/*---A---*/
	data = fopen("saldo_cuentas.bin", "ab+");
	if(data != NULL){
		while(!feof(data))
			cont++;
		database datos[cont];
		while(!feof(data)){
			fgets(buffer, 23, movs);
		}
	}
	fclose(data);
	/*---A---*/
	/*---B---*/
	movs = fopen("movimientos.txt", "r");
	registro = fopen("registro.txt", "w");
	
	if(movs != NULL){			//Verificamos que el archivo exista
		while(!feof(movs)){		//Copiamos los datos de un archivo a otro
			fgets(buffer, 23, movs);
			fputs(buffer,registro);
			cont++;
		}
		fclose (movs);
		fclose (registro);
		
		if(rename("movimientos.txt","movimientos_proc.txt")==0)		// Renombramos el archivo
	        fputs("El archivo se renombro satisfactoriamente.", registro);
	    else
	        fputs("No se pudo renombrar el archivo.", registro);
	}else
		printf("El archivo %cmovimientos.txt%c no se encuentra. Finalizando el programa...", 34,34);
		fputs("El archivo movimientos.txt no se encuentra.", registro);
	/*---A---*/
	
	
	return;
}

