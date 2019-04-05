#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "utn.h"
int main()
{
    float numeroA=0, numeroB=0, sumar=0,restar=0,multiplicar=0,dividir=0,factorA=0,factorB=0;
    float SUM=0,RES=0,MULT=0,DIV=0,FACTA=0,FACTB=0;
    int opcion=0;
    char opcion2;
    do
    {
        printf("\t\t\t\t\t\tCALCULADORA\n\n");
        printf("\t\t\t\t\t1. Ingrese 1er Operando (A= %.2f)\n",numeroA);
        printf("\t\t\t\t\t2. Ingrese 2do Operando (B= %.2f)\n",numeroB);
        printf("\t\t\t\t\t3. Calcular todas las Operaciones\n");
        printf("\t\t\t\t\t\ta) Calcular la Suma (A+B)\n\t\t\t\t\t\tb) Calcular la resta (A-B)\n");
        printf("\t\t\t\t\t\tc) Calcular la division (A/B)\n\t\t\t\t\t\td) Calcular la Multiplicacion (A*B)\n\t\t\t\t\t\te) Calcular el Factorial (A!)\n");
        printf("\t\t\t\t\t4. Informar los resultados\n");
        printf("\t\t\t\t\t\ta) \"El resultado de A+B es: %.2f\"\n",SUM);
        printf("\t\t\t\t\t\tb) \"El resultado de A-B es: %.2f\"\n",RES);
        printf("\t\t\t\t\t\tc) \"La division de A/B es: %.2f\" o \"No es posible dividir por Cero\"\n",DIV);
        printf("\t\t\t\t\t\td) \"La multiplicacion de A*B es: %.2f\"\n",MULT);
        printf("\t\t\t\t\t\te) \"El Factorial de A! es: %.0f y el Factorial de B! es: %.0f\"\n",FACTA,FACTB);
        printf("\t\t\t\t\t5. Salir\n\n");
        fflush(stdin);
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1: numeroA= pedirNumero();
                    system("cls");
                    break;
            case 2: numeroB= pedirNumero();
                    system("cls");
                    break;
            case 3: scanf("%c", &opcion2);
                    fflush(stdin);
                    system("cls");
                        switch(opcion2)
                        {
                            case 'a': sumar = suma(numeroA,numeroB);
                                      break;
                            case 'b': restar = resta(numeroA,numeroB);
                                      break;
                            case 'c': dividir= divide(numeroA,numeroB);
                                      break;
                            case 'd': multiplicar= multiplica(numeroA,numeroB);
                                      break;
                            case 'e': factorA = factorialA(numeroA);
                                      factorB = factorialB(numeroB);
                                      break;
                        }
                    break;
            case 4: scanf("%c",&opcion2);
                    fflush(stdin);
                    system("cls");
                    switch(opcion2)
                    {
                        case 'a':  SUM= suma(numeroA,numeroB);
                                    printf("%.2f",sumar);
                                    break;
                        case 'b':  RES = resta(numeroA,numeroB);
                                   printf("%.2f",restar);
                                   break;
                        case 'c':  DIV= divide(numeroA,numeroB);
                                   printf("%.2f\n",dividir);
                                   break;
                        case 'd':  MULT= multiplica(numeroA,numeroB);
                                   printf("%.2f",multiplicar);
                                   break;
                        case 'e':  FACTA=factorialA(numeroA);
                                   FACTB=factorialB(numeroB);
                                   printf("%.0f\n",factorA);
                                   printf("%.0f\n",factorB);
                                   system("cls");
                                   break;
                    }
                    break;
            case 5: printf("Salir\n");
                    break;
        }
    }while(opcion<5);
 return 0;
}
