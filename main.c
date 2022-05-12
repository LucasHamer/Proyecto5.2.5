#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dni,nota1,nota2;
    float notap;

    printf("Ingrese DNI: ");
    scanf("%d",&dni);
    fflush(stdin);

    while(dni>0)
    {
        printf("Ingrese la primera nota de parcial: ");
        scanf("%d",&nota1);
        fflush(stdin);
        printf("Ingrese la segunda nota de parcial: ");
        scanf("%d",&nota2);
        fflush(stdin);

        if(nota1>=7&&nota2>=7)
        {

            notap=(nota1+nota2)/2;
            printf("El alumno con DNI: %d, obtuvo las notas: %d y %d [Promociona]",dni,nota1,nota2);
            printf("\n");
        }
        else if(nota1>=4&&nota2>=4)
        {
            printf("El alumno con DNI: %d, obtuvo las notas: %d y %d [Rinde examen final]",dni,nota1,nota2);
            printf("\n");
        }
        else
        {
            printf("El alumno con DNI: %d, obtuvo las notas: %d y %d [Reprobo la materia]",dni,nota1,nota2);
            printf("\n");
        }

            printf("Ingrese DNI: ");
            scanf("%d",&dni);
            fflush(stdin);
    }
            printf("\n");
            printf("Nota promedio de los alumnos promocionados: %.2f",notap);



    return 0;
}
