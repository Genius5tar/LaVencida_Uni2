/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/CPPTemplate.cpp to edit this template
 */
#include <iostream>
#include <cstdlib> // Para la función rand()
#include <ctime>   // Para la función time()
using namespace std;

// Declaracion de las funciones de los algoritmos de ordenamiento
void O_Insercion(int arr[], int size);
void O_Burbuja(int arr[], int size);
void O_Select(int arr[], int size);
void O_Mezcla(int arr[], int l, int r);
void O_Random(int arr[], int size);

int main()
{
    // Conjunto de datos inicial arary de edades_cpp
    int edades_cpp[] = {25, 30, 42, 19, 20, 55, 33, 28, 36, 40, 22, 27};
    // vamos almacenar el tamaño de nuestro array en una variable llamada size
    int size = sizeof(edades_cpp) / sizeof(edades_cpp[0]);
    // crearemos un pequeño menu par aejeutar los algoritomos de Ordenamiento
    while (true)
    {
        // Mostrar el menu
        cout << "Menú para ejecutar los algoritmos de ordenamiento a nuestro Array: edades_cpp = [25, 30, 42, 19, 20, 55, 33, 28, 36, 40, 22, 27]" << endl;
        cout << "1. Insertion Sort (Ordenamiento por insercion)" << endl;
        cout << "2. Bubble Sort (Ordenamiento de burbuja)" << endl;
        cout << "3. Selection Sort (Ordenamiento por seleccion)" << endl;
        cout << "4. Merge Sort (Ordenamiento por mezcla)" << endl;
        cout << "5. Random Sort (Ordenamiento aleatorio)" << endl;
        cout << "6. Salir" << endl;

        // pedimos ingrese una opción por teclado
        int opcion;
        cout << "Ingresa un numero del 1 al 5 para ejecutar un algoritmo de ordenamiento (o 6 para salir):";
        cin >> opcion;

        // Evaluamos la opción ingresada para ejecutar cualquiera de las opciones
        switch (opcion)
        {
        case 1:
            // Antes de ordenar
            std::cout << "Antes de ordenar:" << std::endl;
            for (int i = 0; i < size; i++)
            {
                std::cout << edades_cpp[i] << " ";
            }
            std::cout << std::endl;

            // Llamamos al método de ordenamiento
            O_Insercion(edades_cpp, size);

            // Después de ordenar
            std::cout << "Después de ordenar con O_Insercion:" << std::endl;
            for (int i = 0; i < size; i++)
            {
                std::cout << edades_cpp[i] << " ";
            }
            std::cout << std::endl;
            return 0;
        case 2:
            // Antes de ordenar
            std::cout << "Antes de ordenar:" << std::endl;
            for (int i = 0; i < size; i++)
            {
                std::cout << edades_cpp[i] << " ";
            }
            std::cout << std::endl;

            // Llamamos al método de ordenamiento
            O_Burbuja(edades_cpp, size);

            // Después de ordenar
            std::cout << "Después de ordenar con O_Burbuja:" << std::endl;
            for (int i = 0; i < size; i++)
            {
                std::cout << edades_cpp[i] << " ";
            }
            std::cout << std::endl;

            return 0;
        case 3:
            // Antes de ordenar
            std::cout << "Antes de ordenar:" << std::endl;
            for (int i = 0; i < size; i++)
            {
                std::cout << edades_cpp[i] << " ";
            }
            std::cout << std::endl;

            // Llamamos al método de ordenamiento
            O_Select(edades_cpp, size);

            // Después de ordenar
            std::cout << "Después de ordenar con O_Select:" << std::endl;
            for (int i = 0; i < size; i++)
            {
                std::cout << edades_cpp[i] << " ";
            }
            std::cout << std::endl;

            return 0;
        case 4:
            // Antes de ordenar
            std::cout << "Antes de ordenar:" << std::endl;
            for (int i = 0; i < size; i++)
            {
                std::cout << edades_cpp[i] << " ";
            }
            std::cout << std::endl;

            // Llamamos al método de ordenamiento
            O_Mezcla(edades_cpp, 0, size - 1);

            // Después de ordenar
            std::cout << "Después de ordenar con O_Mezcla:" << std::endl;
            for (int i = 0; i < size; i++)
            {
                std::cout << edades_cpp[i] << " ";
            }
            std::cout << std::endl;
            return 0;
        case 5:
            // Antes de ordenar aleatoriamente
            std::cout << "Antes de ordenar aleatoriamente:" << std::endl;
            for (int i = 0; i < size; i++)
            {
                std::cout << edades_cpp[i] << " ";
            }
            std::cout << std::endl;

            // Llamamos al método de ordenamiento aleatorio
            O_Random(edades_cpp, size);

            // Después de ordenar aleatoriamente
            std::cout << "Después de ordenar aleatoriamente:" << std::endl;
            for (int i = 0; i < size; i++)
            {
                std::cout << edades_cpp[i] << " ";
            }
            std::cout << std::endl;

            return 0;
        case 6:
            cout << "Saliendo del programa..." << endl;
            return 0; // Terminar la ejecucion del programa
        default:
            // cualqueir otro digito pro fuera de los elegidos incialmente se notifica quee sta incorrecto
            cout << "Opcion invalida. Por favor, ingresa un numero del 1 al 6." << endl;
        }
    }

    return 0;
}


// empezamos a crear todos los metodos para cada uno de los algoritmos de ordenamiento

void O_Insercion(int edadesi[], int size)
{
    // Iteramos sobre el arreglo desde el segundo elemento hasta el final
    for (int i = 1; i < size; i++)
    {
        int key = edadesi[i]; // Guardamos el valor actual que vamos a insertar
        int j = i - 1;

        // Movemos los elementos del arreglo que son mayores que key hacia adelante
        // hasta encontrar la posición correcta para insertar key
        while (j >= 0 && edadesi[j] > key)
        {
            edadesi[j + 1] = edadesi[j];
            j = j - 1;
        }

        edadesi[j + 1] = key; // Insertamos key en su posición correcta
    }
}

void O_Burbuja(int edadesb[], int size)
{
    // Iteramos sobre el arreglo
    for (int i = 0; i < size - 1; i++)
    {
        // Últimos i elementos ya están en su lugar, así que no necesitamos compararlos
        for (int j = 0; j < size - i - 1; j++)
        {
            // Comparamos elementos adyacentes y los intercambiamos si están en el orden incorrecto
            if (edadesb[j] > edadesb[j + 1])
            {
                // Intercambio de valores usando una variable temporal
                int temp = edadesb[j];
                edadesb[j] = edadesb[j + 1];
                edadesb[j + 1] = temp;
            }
        }
    }
}

void O_Select(int edadess[], int size) {
    // Iteramos sobre el arreglo
    for (int i = 0; i < size - 1; i++) {
        // Encontramos el índice del elemento más pequeño en el subarreglo no ordenado
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (edadess[j] < edadess[min_index]) {
                min_index = j;
            }
        }
        // Intercambiamos el elemento más pequeño con el primer elemento del subarreglo no ordenado
        int temp = edadess[i];
        edadess[i] = edadess[min_index];
        edadess[min_index] = temp;
    }
}

// Función adicional para fusionar dos subarreglos de edadesm[]
// El primer subarreglo es edadesm[l..m]
// El segundo subarreglo es edadesm[m+1..r]
void merge(int edadesm[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    // Creamos subarreglos temporales
    int L[n1], R[n2];

    // Copiamos los datos a los subarreglos temporales L[] y R[]
    for (int i = 0; i < n1; i++)
        L[i] = edadesm[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = edadesm[m + 1 + j];

    // Índices iniciales de los subarreglos temporales L[] y R[]
    int i = 0, j = 0;

    // Índice inicial del subarreglo fusionado
    int k = l;

    // Fusionamos los subarreglos temporales de nuevo en edadesm[l..r]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            edadesm[k] = L[i];
            i++;
        } else {
            edadesm[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiamos los elementos restantes de L[], si hay alguno
    while (i < n1) {
        edadesm[k] = L[i];
        i++;
        k++;
    }

    // Copiamos los elementos restantes de R[], si hay alguno
    while (j < n2) {
        edadesm[k] = R[j];
        j++;
        k++;
    }
}

// Función que implementa el algoritmo de merge sort
// edadesm[] es el arreglo que se va a ordenar
// l es el índice izquierdo y r es el índice derecho del subarreglo de edadesm[] que se ordenará
void O_Mezcla(int edadesm[], int l, int r) {
    if (l < r) {
        // Encuentra el punto medio del subarreglo
        int m = l + (r - l) / 2;

        // Ordena primero y segundo subarreglos
        O_Mezcla(edadesm, l, m);
        O_Mezcla(edadesm, m + 1, r);

        // Fusiona los subarreglos ordenados
        merge(edadesm, l, m, r);
    }
}

// Función Adicional para intercambiar dos elementos
void swap(int& a, int& b) {
    int temp = a; // Almacenamos el valor de a temporalmente
    a = b;        // Asignamos el valor de b a a
    b = temp;     // Asignamos el valor temporal de a a b
}

void O_Random(int edadesr[], int size) {
    // Semilla para la generación de números aleatorios
    srand(time(nullptr));

    // Mezcla aleatoriamente los elementos en el arreglo
    for (int i = 0; i < size - 1; i++) {
        int random_index = rand() % size; // Genera un índice aleatorio
        swap(edadesr[i], edadesr[random_index]);
    }
}
