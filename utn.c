#include <stdio.h>
#include "utn.h"

float pedirNumero()
{
    float auxiliar;
    printf("\nIngrese un numero:\n");
    scanf("%f",&auxiliar);
    return auxiliar;
}
float suma(float numeroA, float numeroB)
{
    float resultado;
    resultado=numeroA+numeroB;
    return resultado;
}
float resta(float numeroA, float numeroB)
{
    float resultado;
    resultado= numeroA-numeroB;
    return resultado;
}
float multiplica(float numeroA, float numeroB)
{
    float resultado;
    resultado=numeroA*numeroB;
    return resultado;
}
float divide(float numeroA, float numeroB)
{
    float resultado;
    if(numeroB== 0)
    {
        printf("No se puede dividir por cero");
    }
    if(numeroA != 0 && numeroB!=0)
    {
        resultado = numeroA/numeroB;
    }
    return resultado;
}
float factorialA(float numeroA)
{
    int resultado;
    if(numeroA==1)
        return 1;
    resultado= (int)numeroA* factorialA(numeroA-1);
    return (resultado);
}
float factorialB(float numeroB)
{
    int resultado;
    if(numeroB==1)
        return 1;
    resultado= (int)numeroB*factorialB(numeroB-1);
    return (resultado);

}
