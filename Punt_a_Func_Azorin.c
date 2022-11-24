#include <stdio.h>

void NavegarOeste (int *, int *);
void NavegarEste (int *, int *);
void NavegarNorte (int *, int *);
void NavegarSur (int *, int *);
void Interfaz (void *(int *, int *));

int
main (void)
{
  int x = 0, y = 0;

  void (*func_actual) (int *, int *);	//Declaro el puntero a una funciC3n que recibe 2 parC!metros del tipo puntero a int

  int control = 1;
  while (control)
    {
      Interfaz (func_actual);

      func_actual (&x, &y);

      printf ("\nNueva posicion: (%d, %d)", x, y);

      printf ("\n\nDesea moverse de nuevo?\n");
      printf ("\tSi: 1\n");
      printf ("\tNo: 0");
      scanf ("%d", &control);
    }

  return 0;
}

void
NavegarOeste (int *x, int *y)
{
  (*x)--;
  printf ("\nSe ha movido al Oeste\n");
}

void
NavegarEste (int *x, int *y)
{
  (*x)++;
  printf ("\nSe ha movido al Este\n");
}

void
NavegarNorte (int *x, int *y)
{
  (*y)++;
  printf ("\nSe ha movido al Norte\n");
}

void
NavegarSur (int *x, int *y)
{
  (*y)--;
  printf ("\nSe ha movido al Sur\n");
}

void
Interfaz (void *func_actual (int *, int *))
{
  unsigned char opc = 0;	//Declaro un caracter sin bit de signo.

  printf ("Hacia donde quieres moverte?\n");
  printf ("\nNorte:    N");
  printf ("\nOeste:    O");
  printf ("\nSur:      S");
  printf ("\nEste:     E");

  scanf ("%c", &opc);		//Leo la entrada del usuario y la guardo en la variable opc.

  switch (opc)
    {
    case 'N':
      func_actual = NavegarNorte;
      break;
    case 'O':
      func_actual = NavegarOeste;
      break;
    case 'S':
      func_actual = NavegarSur;
      break;
    case 'E':
      func_actual = NavegarEste;
      break;
    default:
      printf
	("\n\nLa opciC3n elegida no es valida. No se realiza ningun movimiento\n\n");
    }
}
