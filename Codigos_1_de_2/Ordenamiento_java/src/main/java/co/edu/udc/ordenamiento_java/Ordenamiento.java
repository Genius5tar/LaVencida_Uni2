/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */
package co.edu.udc.ordenamiento_java;

import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author PEDRO DE HORTA
 */
public class Ordenamiento {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        //definimos el arreglo edades_java
        int[] edades_java = {25, 30, 42, 19, 20, 55, 33, 28, 36, 40, 22, 27};

        //Cantidad de ventas
        System.out.println("\n--------------------Bienvenido al Ordenamientos en Java-------------------");
        do {
            System.out.println("\n \nMenú para ejecutar los algoritmos de ordenamiento a nuestro Array: edades_java");
            System.out.println("1. Insertion Sort (Ordenamiento por inserción)");
            System.out.println("2. Bubble Sort (Ordenamiento de burbuja)");
            System.out.println("3. Selection Sort (Ordenamiento por selección)");
            System.out.println("4. Merge Sort (Ordenamiento por mezcla)");
            System.out.println("5. Random Sort (Ordenamiento aleatorio)");
            System.out.println("6. Salir");
            System.out.println("Ingresa un número del 1 al 5 para ejecutar un algoritmo de ordenamiento (o 6 para salir): ");

            String opcion = scanner.nextLine();
            /* usamos un switch para evaluar que tecla se introdujo con el teclado 
            de esta manera llamamos a las funcion correspondiente
            a cada funcion le pasamos como parametros el array edades_java 
            el cual contine los elementos que usara cada funcion*/
            switch (opcion) {
                case "1":
                    // Antes de ordenar
                    System.out.println("\nAntes de ordenar:");
                    for (int i = 0; i < edades_java.length; i++) {
                        System.out.print(edades_java[i] + " ");
                    }
                    // Llamada al método de ordenamiento
                    O_Insercion(edades_java);

                    // Después de ordenar
                    System.out.println("\nDespués de ordenar con O_Insercion:");
                    for (int edad : edades_java) {
                        System.out.print(edad + " ");
                    }
                    break;
                case "2":
                    // Antes de ordenar
                    System.out.println("\nAntes de ordenar:");
                    for (int i = 0; i < edades_java.length; i++) {
                        System.out.print(edades_java[i] + " ");
                    }
                    // Llamada al método de ordenamiento
                    O_Burbuja(edades_java);

                    // Después de ordenar
                    System.out.println("\nDespués de ordenar con O_Burbuja:");
                    for (int edad : edades_java) {
                        System.out.print(edad + " ");
                    }
                    break;
                case "3":
                    // Antes de ordenar
                    System.out.println("\nAntes de ordenar:");
                    for (int i = 0; i < edades_java.length; i++) {
                        System.out.print(edades_java[i] + " ");
                    }
                    // Llamada al método de ordenamiento
                    O_Select(edades_java);

                    // Después de ordenar
                    System.out.println("\nDespués de ordenar con O_Select:");
                    for (int edad : edades_java) {
                        System.out.print(edad + " ");
                    }
                    break;
                case "4":// Antes de ordenar
                    System.out.println("\nAntes de ordenar:");
                    for (int i = 0; i < edades_java.length; i++) {
                        System.out.print(edades_java[i] + " ");
                    }
                    // Llamada al método de ordenamiento
                    O_Mezcla(edades_java, 0, edades_java.length - 1);

                    // Después de ordenar
                    System.out.println("\nDespués de ordenar con O_Mezcla:");
                    for (int edad : edades_java) {
                        System.out.print(edad + " ");
                    }
                    break;
                case "5":
                    // Antes de ordenar
                    System.out.println("\nAntes de ordenar:");
                    for (int i = 0; i < edades_java.length; i++) {
                        System.out.print(edades_java[i] + " ");
                    }
                    // Llamada al método de ordenamiento
                    O_Random(edades_java);

                    // Después de ordenar
                    System.out.println("\nDespués de ordenar con O_Select:");
                    for (int edad : edades_java) {
                        System.out.print(edad + " ");
                    }
                    break;
                case "6":
                    System.out.println("Saliendo del programa...");
                    return;
                default:
                    //cualqueir otro digito pro fuera de los elegidos incialmente se notifica quee sta incorrecto
                    System.out.println("Opción inválida. Por favor, ingresa un número del 1 al 6.");
            }
        } while (true);
    }

    public static void O_Insercion(int[] edadesi) {
        int n = edadesi.length;

        for (int i = 1; i < n; i++) {
            int valorActual = edadesi[i];
            int j = i - 1;

            // Desplazar los elementos mayores que el valor actual hacia la derecha
            while (j >= 0 && edadesi[j] > valorActual) {
                edadesi[j + 1] = edadesi[j];
                j = j - 1;
            }

            // Insertar el valor actual en la posición correcta
            edadesi[j + 1] = valorActual;
        }
    }

    public static void O_Burbuja(int[] edadesb) {
        int n = edadesb.length;

        // Iteramos sobre el arreglo n veces
        for (int i = 0; i < n - 1; i++) {
            // En cada iteración, comparamos pares de elementos que esatan al lado del elemento a comparar
            for (int j = 0; j < n - i - 1; j++) {
                // Si el elemento actual es mayor que el siguiente, los intercambiamos es decir derecha o izquierda
                if (edadesb[j] > edadesb[j + 1]) {
                    int temp = edadesb[j];
                    edadesb[j] = edadesb[j + 1];
                    edadesb[j + 1] = temp;
                }
            }
        }
    }

    public static void O_Select(int[] edadess) {
        int n = edadess.length;

        // Iteramos sobre el arreglo
        for (int i = 0; i < n - 1; i++) {
            // Encontramos el índice del mínimo elemento en el subarreglo no ordenado
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (edadess[j] < edadess[minIndex]) {
                    minIndex = j;
                }
            }

            // Intercambiamos el mínimo elemento con el primer elemento del subarreglo no ordenado
            int temp = edadess[minIndex];
            edadess[minIndex] = edadess[i];
            edadess[i] = temp;
        }
    }

    public static void O_Mezcla(int[] edadesm, int izquierda, int derecha) {
        if (izquierda < derecha) {
            // Encuentra el punto medio del arreglo
            int medio = (izquierda + derecha) / 2;

            // Ordena la primera mitad
            O_Mezcla(edadesm, izquierda, medio);
            // Ordena la segunda mitad
            O_Mezcla(edadesm, medio + 1, derecha);

            // Une las mitades ordenadas
            Mezcla(edadesm, izquierda, medio, derecha);
        }
    }

    //funcion adicional para mezclar
    public static void Mezcla(int[] edadesm, int izquierda, int medio, int derecha) {
        // Tamaño de los subarreglos
        int n1 = medio - izquierda + 1;
        int n2 = derecha - medio;

        // Arreglos temporales
        int[] izq = new int[n1];
        int[] der = new int[n2];

        // Copiar datos a los arreglos temporales
        for (int i = 0; i < n1; i++) {
            izq[i] = edadesm[izquierda + i];
        }
        for (int j = 0; j < n2; j++) {
            der[j] = edadesm[medio + 1 + j];
        }

        // Índices iniciales de los subarreglos
        int i = 0, j = 0;
        // Índice inicial del arreglo fusionado
        int k = izquierda;

        // Fusionar los arreglos temporales
        while (i < n1 && j < n2) {
            if (izq[i] <= der[j]) {
                edadesm[k] = izq[i];
                i++;
            } else {
                edadesm[k] = der[j];
                j++;
            }
            k++;
        }

        // Copiar elementos restantes de izq[] si los hay
        while (i < n1) {
            edadesm[k] = izq[i];
            i++;
            k++;
        }

        // Copiar elementos restantes de der[] si los hay
        while (j < n2) {
            edadesm[k] = der[j];
            j++;
            k++;
        }
    }

    public static void O_Random(int[] edadesr) {
        Random rand = new Random();
        int n = edadesr.length;

        // Realiza un número grande de iteraciones (n^2) para aumentar las posibilidades de que se ordene
        for (int i = 0; i < n * n; i++) {
            // Selecciona dos índices aleatorios
            int index1 = rand.nextInt(n);
            int index2 = rand.nextInt(n);

            // Intercambia los elementos en los índices seleccionados
            int temp = edadesr[index1];
            edadesr[index1] = edadesr[index2];
            edadesr[index2] = temp;
        }
    }

}
