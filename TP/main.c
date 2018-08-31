#include <stdio.h>
#include <stdlib.h>


float sumaValores(float, float);
float restaValores(float, float);
float multiValores(float, float);
float divisionValores(float, float);
float factorValores(float, float);

int main()
{
    int opcion;
    float operandoA;
    float operandoB;
    float resultado;
    do
        {
            printf("\n      *********************************************");
            printf("\n      ||           Trabajo Practico N.1          ||");
            printf("\n      ||                                         ||");
            printf("\n      ||             .:CALCULADORA:.             ||");
            printf("\n      ||                                         ||");
            printf("\n      *********************************************");
            printf("\n      ||           Elija una operacion:          ||");
            printf("\n      ||                                         ||");
            printf("\n      ||               1.Sumar                   ||");
            printf("\n      ||                                         ||");
            printf("\n      ||               2.Restar                  ||");
            printf("\n      ||                                         ||");
            printf("\n      ||               3.Multiplicar             ||");
            printf("\n      ||                                         ||");
            printf("\n      ||               4.Dividir                 ||");
            printf("\n      ||                                         ||");
            printf("\n      ||               5.Factorial               ||");
            printf("\n      ||                                         ||");
            printf("\n      ||                                         ||");
            printf("\n      ||   6.Salir                               ||");
            printf("\n      *********************************************");
            printf("\n                                                    ");
            printf("\n|| Ingrese una opcion (1/6) ");
            scanf("%d", &opcion);

            switch(opcion)
            {
            case 1:
                //Suma
                system("cls");
                resultado = sumaValores(operandoA,operandoB);
                break;
            case 2:
                //Resta
                system("cls");
                resultado = restaValores(operandoA,operandoB);
                break;
            case 3:
                //Multiplicacion
                system("cls");
                resultado = multiValores(operandoA,operandoB);
                break;
            case 4:
                //Division
                system("cls");
                resultado = divisionValores(operandoA,operandoB);
                break;
            case 5:
                //Factor
                system("cls");
                resultado = factorValores(operandoA,operandoB);
                break;
            case 6:
                //Salir de la calculadora
                opcion = 6;
                break;
            default:
                printf("\n Este numero no es valido");
            }
            system("pause");
            system("cls");
        }
        while (opcion!=6);
        {
          return 0;
        }

}

    float sumaValores(float numeroUno , float numeroDos)
    {
        float suma;

        printf("\nIngrese un Operando A: ");
        scanf("%f" , & numeroUno);
        printf("\nIngrese un Operando B: ");
        scanf("%f" , & numeroDos);

        suma = numeroUno + numeroDos;

        printf("\n  La suma de %2.f y %2.f es: %2.f \n" , numeroUno , numeroDos , suma);

    }
    float restaValores(float numeroUno , float numeroDos)
    {
        float resta;

        printf("\nIngrese un Operando A: ");
        scanf("%f" , & numeroUno);
        printf("\nIngrese un Operando B: ");
        scanf("%f" , & numeroDos);

        resta = numeroUno - numeroDos;

        printf("\n  La resta de %2.f y %2.f es: %2.f \n " , numeroUno , numeroDos, resta);

    }
    float multiValores(float numeroUno , float numeroDos)
    {
        float multiplicacion;

        printf("\nIngrese un Operando A: ");
        scanf("%f" , & numeroUno);
        printf("\nIngrese un Operando B: ");
        scanf("%f" , & numeroDos);

        multiplicacion = numeroUno * numeroDos;
        printf("\n  La multiplicacion de %2.f y %2.f es: %2.f \n" , numeroUno , numeroDos , multiplicacion);


    }
    float divisionValores(float numeroUno , float numeroDos)
    {
        float division;

        printf("\nIngrese un Operando A: ");
        scanf("%f" , & numeroUno);
        printf("\nIngrese un Operando B: ");
        scanf("%f" , & numeroDos);

        if(numeroDos == 0)
        {
            printf("\n No se puede dividir por 0 ");
        }
        else
        {
            division = numeroUno / numeroDos;
            printf("\n  La division de %2.f y %2.f es: %2.f \n " , numeroUno , numeroDos , division);

        }

    }
    float factorValores(float numeroUno, float numeroDos)
{
    float factorA;
    float factorB;
    float factorialA;
    float factorialB;
    factorA=1;
    factorB=1;

    printf("\nIngrese un Operando A: ");
    scanf("%f" , & numeroUno);
    printf("\nIngrese un Operando B: ");
    scanf("%f" , & numeroDos);

    if (numeroUno > 0)
    {
        for (factorialA = numeroUno; factorialA > 1; factorialA--)
        {
            factorA = factorA * factorialA;
        }
        printf("\n El factorial de %.2f es: %.2f \n",numeroUno,factorA);
    }
    else
        printf("\n No se puede lograr el factorial de un numero entero  ingresando numeros negativos \n");

    if (numeroDos > 0)
    {
            for (factorialB = numeroDos; factorialB > 1; factorialB--)
            {
                factorB = factorB * factorialB;
            }
            printf("\n El factorial de %.2f es: %.2f \n",numeroDos,factorB);
        }
        else
            printf("\n No se puede lograr el factorial de un numero entero  ingresando numeros negativos \n");



    }
