#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;


}ePersona;

void inicializarPersonas(ePersona pers[] , int tam);

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(ePersona pers[], int tam);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(ePersona pers[],int tam, int dni);

void mostrarPersona(ePersona pers);

void agregarPersona(ePersona pers[], int tam);

void borrarPersona(ePersona pers[], int tam);

void listarNombresOrdenados(ePersona pers[], int tam);

void graficoEdades(ePersona pers[], int tam);







#endif // FUNCIONES_H_INCLUDED
