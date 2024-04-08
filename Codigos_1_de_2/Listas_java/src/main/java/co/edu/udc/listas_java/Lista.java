/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */
package co.edu.udc.listas_java;

/**
 *
 * @author PEDRO DE HORTA
 */
public class Lista {

    public class Main {

        public static void main(String[] args) {
            // Crear una instancia de la lista personalizada
            Tallas tallas = new Tallas();

            // Agregar elementos a la lista
            tallas.agregar(25);
            tallas.agregar(30);
            tallas.agregar(42);
            tallas.agregar(19);
            tallas.agregar(20);
            tallas.agregar(50);

            // Acceder al elemento en el índice 2
            System.out.println("Elemento en el índice 2: " + tallas.accederPorIndice(2));

            // Eliminar el elemento en el índice 4
            tallas.eliminar(4);

            // Imprimir el tamaño de la lista
            System.out.println("Tamaño de la lista: " + tallas.tamano());

            // Imprimir todos los elementos de la lista
            System.out.println("Elementos de la lista:");
            for (int i = 0; i < tallas.tamano(); i++) {
                System.out.println(tallas.accederPorIndice(i));
            }
        }
    }

    

}


