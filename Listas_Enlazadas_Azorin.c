#include <stdio.h>
#include <stdlib.h>
 
struct Node {
    int data;
    struct Node* next;
};

//Para llevar la cuenta de cuantas
//structs se crearon
int cant = 0;

struct Node * crear_nodo(struct Node * );
void ordenar (struct Node*);
void printNodes(struct Node*);

int main(){
    struct Node* inicio = malloc(sizeof(struct Node));
    struct Node* head = inicio;
    int v = 0;
    head = crear_nodo(head);
    
    printf("inicio =:%p %d", inicio, inicio->data);
    do{
        head = crear_nodo(head);
        printf("inicio =:%p %d", inicio, inicio->data);
        ordenar(inicio);
        printf("\n¿Desea seguir creando? 1=si 0=no\n");
        scanf("%d",&v);
    }while(v==1);
    printNodes(inicio);
}

struct Node * crear_nodo(struct Node * ant){
    cant++;
    printf("Ingrese un valor:\n");
    scanf("%d", &ant->data);
    printf("\n---------------------------------------------------\n");
    printf("ant !=:%p %d\n", ant, ant->data);
    
    //Creamos la siguiente direccion de memoria
    struct Node * aux = malloc(sizeof(struct Node));
    //Igulamos el next de la actual struct a la siguiente
    ant->next = aux;
    //Hacemos que no apunte a nada
    aux->next  = NULL;
    //Igualamos el head para que apunte a la siguiente direccion
    //de memoria
    ant = aux;
    //printeamos la direccion de memoria y el valor de la nueva 
    //struct creada
    printf("ant =:%p %d\n", ant, ant->data);
    
    //Devolvemos este puntero, para que el head, apunte
    //a la nueva direccion de memoria.
    return ant;
}
 
void intercambiar(struct Node *a, struct Node *b) {
  struct Node temporal = *a;
  a->data = b->data;
  b->data = temporal.data;
}
 
//Odenamiento de las structs dependiendo del valor de data
//que poseean. (Ordenamiento de burbuja)
void ordenar (struct Node* inicial){
    struct Node* backup = inicial;
    
    for (int indiceActual = 0; indiceActual < cant-1; indiceActual++) {
      // Si el actual es mayor que el que le sigue a la derecha...
      if (backup->data < backup->next->data) {
        // ...intercambiarlos, es decir, mover el actual a la derecha y el de la derecha al actuial
        intercambiar(backup, backup->next);
      }
      backup = backup->next;
    }
}

//Printeamos todas las direcciones de memoria y el valor
//de las data, de cada struct.
void printNodes(struct Node* inicial){
    for(int i = 0; i < cant; i++){
        printf("%d: %p ",i ,inicial);
        printf("%d \n", inicial->data);
        inicial = inicial->next;
    }
}