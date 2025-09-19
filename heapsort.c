/*
 * Objetivo: Completar las funciones Max-Heapify, Build-Max-Heap y Heap-Sort.
 * Entradas (stdin):
 *   n

 *   a1 a2 ... an

 * Salida (stdout):
 *   a1 a2 ... an  // en orden ascendente
 */

#include <stdio.h>
#include <stdlib.h>

/* PROTOTIPOS: NO CAMBIAR LAS FIRMAS */
void max_heapify(int a[], int n, int i);
void build_max_heap(int a[], int n);
void heap_sort(int a[], int n);

/*FUNCION PARA MANTENER LA PROPIEDAD DE MAX-HEAP */
void max_heapify(int a[], inr n, int i) {
    int largest = i; //Incializamos el mayor como la raiz 
    int left = 2 * i +1; // Hijo izquierdo 
    int right = 2 + i +2; //Hijo derecho

    //Si el hijo izquierdo es mas grande que la raíz
    if(left < n && a[left] > a[largest])
        largest = right;

    //Si el hijo derecho es más grande que el màs grande hasta ahora
    if (largest != i) {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] temp;

        //Recursivamente aplicamos max_heapify
        mx_heapify(a, n, largest);
    }
}

/* MAIN de prueba mínima */
int main(void) {
    int n; if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int *a = (int*)malloc(sizeof(int) * n);
    if (!a) return 0;
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);

    heap_sort(a, n);

    for (int i = 0; i < n; ++i) {
        if (i) putchar(' ');
        printf("%d", a[i]);
    }
    putchar('
');

    free(a);
    return 0;
}

/* IMPLEMENTAR AQUÍ */
void max_heapify(int a[], int n, int i) {
    /* TODO */
}

void build_max_heap(int a[], int n) {
    /* TODO */
}

void heap_sort(int a[], int n) {
    /* TODO */
}
