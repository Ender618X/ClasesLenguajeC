
/*Realice un programa en lenguaje c que permita realizar un censo de los estudiantes y personas de 3er edad de una poblacion

a) Mostrar la cantidad de estudiante de sexo masculino              //se toma como estudiante menor a 18 y mayor a 3
b) Mostrar la cantidad de estudiante de sexo femenino
c) Mostrar la cantidad de personas con mas de 59 años masculinos
d) Mostrar la cantidad de personas con mas de 59 años femeninos
e) numero de personas que no cumplen ninguna condicion*/
#include <stdio.h>
#include <conio.h>
main()

  {
  int edad, f1, f2, m1, m2, p;
char genero, opcion;
   printf("Poblacion\n");
    f1=0  ; m1=0 ; f2=0 ; m2=0 ; p=0;
    printf("Hay personas para el censo: (s/n) \n");
    scanf("%c",&opcion);

    while(opcion=='s')
        {
			fflush(stdin);
		printf("\n");
	    printf("Ingrese el genero: (f/m) \n");
        scanf("%c",&genero);
      
        if (genero=='f')
		{				 fflush(stdin);
                        printf ("es femenino ingrese la edad: \n");
                        scanf("%d",&edad);
                        
                        if (edad>59)
                                     f2++;
                        else if (edad<18 && edad>3)
                                     f1++;
                        else
                                     p++;
                        }
        else
                        {
							fflush(stdin);
                         printf ("Es masculino ingrese la edad: \n");
                         scanf("%d",&edad);
                         if (edad>59)
                                      m2++;
                         else if (edad<18 && edad>3)
                                      m1++;
                         else
                                      p++;
                         }
            fflush(stdin);
        printf("Hay mas personas para el censo: s/n \n");
        scanf("%c",&opcion);
        }
        printf(" a) Estudiantes Masculinos: %i \n",m1);
        printf(" b) Estudiantes Femeninos: %i \n",f1);
        printf(" c) Personas de la Tercera edad Masculinos: %i \n",m2);
        printf(" d) Personas de la Tercera edad Femeninas: %i \n",f2);
        printf(" e) Numero de Personas en el censo sin Beneficio: %i \n",p);
   getch();


    }
