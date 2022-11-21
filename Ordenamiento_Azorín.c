#include <stdio.h>

void pedirRemeras (void);
void ordenarRemes (void);

 struct shirts{
   int Mangacorta;
   int Mangalarga;
   int Futbol;
}Remeras;

int main()
{
    int i;
    do{
     pedirRemeras ();
     ordenarRemes ();
        printf("\n¿Queres agregar mas Remeras? si=1/no=0\n");
        scanf("%d", &i);
    printf("\n---------------------------------------------------\n");
    }while(i==1);
    return 0;
}

void pedirRemeras(void){
    int rc, rm, rf;
    printf("¿Cuantas Remeras tenes?");
    printf("\n Mangacorta: ");
    scanf("%d", &rc);
    Remeras.Mangacorta += rc;
    printf("De Mangalarga: ");
    scanf("%d", &rm);
    Remeras.Mangalarga += rm;
    printf("De futbol: ");
    scanf("%d", &rf);
    Remeras.Futbol += rf;
}
void ordenarRemes(){
    printf("\n---------------------------------------------------");
    printf("\nRemeras ordenadas:");
    if (Remeras.Mangacorta > Remeras.Mangalarga  && Remeras.Mangacorta > Remeras.Futbol){
        printf("\nMangacorta: %d",Remeras.Mangacorta);
        if(Remeras.Mangalarga > Remeras.Futbol){
            printf("\nMangalarga: %d", Remeras.Mangalarga);
            printf("\nDe Futbol: %d", Remeras.Futbol);
        } else if(Remeras.Futbol > Remeras.Mangalarga){
            printf("\nDe futbol: %d", Remeras.Futbol);
            printf("\nMangalarga: %d", Remeras.Mangalarga);
        }
    } else if(Remeras.Mangalarga > Remeras.Mangacorta && Remeras.Mangalarga > Remeras.Futbol){
        printf("\nMangalarga: %d", Remeras.Mangalarga);
        if(Remeras.Futbol > Remeras.Mangacorta){
            printf("\nDe futbol: %d", Remeras.Futbol);
            printf("\nMangacortas: %d",Remeras.Mangacorta);
        } else if(Remeras.Futbol > Remeras.Mangacorta){
            printf("\nMangacorta: %d", Remeras.Mangacorta);
            printf("\nDe Futbol: %d", Remeras.Futbol);
        }
    } else if(Remeras.Futbol > Remeras.Mangalarga && Remeras.Futbol > Remeras.Mangacorta){
        printf("\nDe Futbol: %d", Remeras.Futbol);
        if(Remeras.Mangalarga > Remeras.Mangacorta){
            printf("\nMangalarga: %d", Remeras.Mangalarga);
            printf("\nMangacorta: %d", Remeras.Mangacorta);
        } else if(Remeras.Mangacorta > Remeras.Mangalarga){
            printf("\nMangacorta: %d", Remeras.Mangacorta);
            printf("\nMangalargal: %d", Remeras.Mangalarga);
        }
    }
    printf("\n---------------------------------------------------");
}