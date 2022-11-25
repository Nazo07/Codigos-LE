#include <stdio.h>
#include <stdlib.h>
 
struct Node {
    int data;
    struct Node* next;
};

//Para llevar la cuenta de cuantas
//structs se crearon
int cant = 0;

//Prototipos de funciones

struct Node * crear_nodo(struct Node * );
void ordenar (struct Node*);
void printNodes(struct Node*);

int main(){
    //Declaro un puntero del tipo struct Node que pide memoria con malloc, y será la dirección del dato inicial de la lista.
    struct Node* inicio = malloc(sizeof(struct Node));
 
    //Creo otro puntero del mismo tipo y le asigno la dirección de la memoria pedida anteriormente, por lo que no hace diferencia.
    struct Node* head = inicio;
    int v = 0;
   
    //Creo un nodo con el puntero head que antes creé
    head = crear_nodo(head);
    
    
    printf("inicio =:%p %d", inicio, inicio->data);
    do{
        head = crear_nodo(head);
        printf("inicio =:%p %d", inicio, inicio->data);
        ordenar(inicio);
        printf("\n¿Desea seguir creando? 1=si 0=no\n");
        scanf("%d",&v);
    }while(v==1);
 
    //Imprimo los nodos
    printNodes(inicio);
}

//Función crear_nodo: recibe el último nodo, 
struct Node * crear_nodo(struct Node * ant){
    cant++;
    printf("Ingrese un valor:\n");
    scanf("%d", &ant->data);
    printf("\n---------------------------------------------------\n");
    printf("ant !=:%p %d\n", ant, ant->data);
    //ant = puntero anterior
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
 // recibe parametros 
void intercambiar(struct Node *a, struct Node *b) {
  struct Node temporal = *a;
  a->data = b->data;
  b->data = temporal.data;
}
 
//Odenamiento de las structs dependiendo del valor de data
//que poseean. (Ordenamiento de burbuja)

//inicial es el puntero al primer dato de la lista
void ordenar (struct Node* inicial){
    
    //Backup es un puntero que inicialmente apunta al primero de la lista e irá cambiando de posición a la siguiente con cada ordenamiento.
    struct Node* backup = inicial;
    
    //El for se encarga de que el proceso se ejecute una cantidad de veces igual a la cantidad de elementos que haya en la lista.
    for (int indiceActual = 0; indiceActual < cant-1; indiceActual++) {
      // Si el actual es mayor que el que le sigue a la derecha en la lista...
      if (backup->data < backup->next->data) {
        // intercambiar sus valores, es decir, mover el del actual a la derecha y el de la derecha al actuial
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
