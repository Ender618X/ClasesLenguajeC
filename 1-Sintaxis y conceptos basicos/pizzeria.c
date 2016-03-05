//---------------------------------------------------------------------------

/*
En una pizzeria fueron 3 clientes en lo cuales se le solicita en cada pedido el nombre y
los detalles de las pizzas que son :tipo, dimension (m:mediana,g:grande) y cantidad .Se sabe que todos los clientes al menos pidieron un tipo de pizza.
la pizzeria quiere conocer:
 1 El total de consumo por el cliente.
 2 El total de venta del dia.
 3 El Nombre de los clientes que pidieron hawaiana

Menu
                Dimension
Tipo            mediana       grande
hawaiana         1000          2500
pollo            1300          3000
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
//---------------------------------------------------------------------------

#pragma argsused
void main()
{

    int i;
    char nombre[20];
    char tipo [20];
    char dimension,resp;
    int cantidad;
    float preciocliente,preciototal=0;
    printf("Pizzeria\n");
    for  (i=0;i<3;i++){
    printf("\n Ingrese nombre del cliente %d: ",i);
    scanf("%s",nombre);
     fflush(stdin);
     preciocliente=0;
    do{
        printf("\n Ingrese tipo de pizza: ");
        scanf("%s",tipo);
        if(strcmpi(tipo,"hawaina")==0)
        printf(" %s pidio hawaina",nombre);
        fflush(stdin);
        printf("\n Dimension (m/g):");
        scanf("%c",&dimension);
        fflush(stdin);
        printf("\n Cantidad:");
        scanf("%d",&cantidad);
        if(dimension=='m' &&   strcmpi(tipo,"hawaina")==0)
        preciocliente+=1000 * cantidad;
        if(dimension=='g' &&   strcmpi(tipo,"hawaina")==0)
        preciocliente+=2500 * cantidad;
        if(dimension=='m' &&   strcmpi(tipo,"pollo")==0)
        preciocliente+=1300 * cantidad;
        if(dimension=='g' &&   strcmpi(tipo,"pollo")==0)
        preciocliente+=3000 * cantidad;

        fflush(stdin);
        printf("\n Solicito otro tipo de pizza (s/n)");
    scanf("%c",&resp);

    }while ( resp=='s');
    printf("Precio a pagar por el cliente es %f",preciocliente);
    getch();
    preciototal+=preciocliente;
    }
    printf("total venta es %f",preciototal);
    getch();

}
