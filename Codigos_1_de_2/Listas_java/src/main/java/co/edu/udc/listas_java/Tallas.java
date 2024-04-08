/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package co.edu.udc.listas_java;

/**
 *
 * @author PEDRO DE HORTA
 */
// Definición de la clase Tallas
public class Tallas {
    // Array para almacenar los elementos de la lista
    private int[] lista;
    // Tamaño actual de la lista
    private int size;
    
    // Constructor de la clase
    public Tallas() {
        lista = new int[10]; // Se inicializa con un tamaño inicial arbitrario, se puede ajustar según sea necesario
        size = 0; // Tamaño inicial de la lista es cero
    }
    
    // Método para agregar un elemento a la lista
    public void agregar(int elemento) {
        // Si el tamaño actual es igual a la longitud del array, se duplica el tamaño del array
        if (size == lista.length) {
            int[] nuevaLista = new int[lista.length * 2];
            for (int i = 0; i < size; i++) {
                nuevaLista[i] = lista[i];
            }
            lista = nuevaLista;
        }
        // Se agrega el elemento al final de la lista
        lista[size] = elemento;
        size++; // Se incrementa el tamaño de la lista
    }
    
    // Método para eliminar un elemento en un índice dado
    public void eliminar(int indice) {
        if (indice >= 0 && indice < size) {
            // Se elimina el elemento en el índice dado
            for (int i = indice; i < size - 1; i++) {
                lista[i] = lista[i + 1];
            }
            size--; // Se decrementa el tamaño de la lista
        } else {
            System.out.println("Índice fuera de rango.");
        }
    }
    
    // Método para acceder a un elemento por índice
    public int accederPorIndice(int indice) {
        if (indice >= 0 && indice < size) {
            // Se retorna el elemento en el índice dado
            return lista[indice];
        } else {
            System.out.println("Índice fuera de rango.");
            return -1;
        }
    }
    
    // Método para obtener el tamaño de la lista
    public int tamano() {
        return size;
    }
}
