#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char nombre1[20];
    char nombre2[20];
    char nombre3[20];
    char nombre4[20];
    char nombre5[20];
    int longitud;
    char nombre[20];

    printf( " Introduzca su nombre: " );
    scanf( "%s", nombre1 );

    longitud = strlen (nombre1);
    printf(" Tiene %d letras\n",longitud);

    printf( "\n Introduzca su nombre: " );
    scanf( "%s", nombre2 );

    longitud = strlen (nombre2);
    printf(" Tiene %d letras \n",longitud);


    printf( "\n Introduzca su nombre: " );
    scanf( "%s", nombre3 );

    longitud = strlen (nombre3);
    printf(" Tiene %d letras\n",longitud);

    printf( "\n Introduzca su nombre: " );
    scanf( "%s", nombre4 );

    longitud = strlen (nombre4);
    printf("Tiene %d letras\n",longitud);

    printf( "\n Introduzca su nombre: " );
    scanf( "%s", nombre5 );

    longitud = strlen (nombre5);
    printf("Tiene %d letras\n",longitud);

     if(strlen(nombre1)<strlen(nombre2)){
        strcpy(nombre,nombre1);
     }else if(strlen(nombre1)>strlen(nombre2)){
        strcpy(nombre,nombre2);
     }
     if(strlen(nombre2)<strlen(nombre3)){
        strcpy(nombre,nombre2);
     }else if(strlen(nombre2)>strlen(nombre3)){
        strcpy(nombre,nombre3);
     }
     if(strlen(nombre3)<strlen(nombre4)){
        strcpy(nombre,nombre3);
     }else if(strlen(nombre3)>strlen(nombre4)){
        strcpy(nombre,nombre4);
     }
     if(strlen(nombre4)<strlen(nombre5)){
        strcpy(nombre,nombre4);
     }else if(strlen(nombre4)>strlen(nombre5)){
        strcpy(nombre,nombre5);
     }

    printf("Nombre con menos letras: %s.", nombre);


    return 0;
}
