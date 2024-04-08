#include <iostream>

// Definición de la clase Tallas
class Tallas {
private:
    int* lista; // Puntero para almacenar los elementos de la lista
    int capacity; // Capacidad máxima de la lista
    int size; // Tamaño actual de la lista

public:
    // Constructor de la clase
    Tallas(int initialCapacity = 10) : capacity(initialCapacity), size(0) {
        lista = new int[capacity]; // Se reserva memoria para el array
    }

    // Destructor para liberar la memoria reservada
    ~Tallas() {
        delete[] lista;
    }

    // Método para agregar un elemento a la lista
    void agregar(int elemento) {
        if (size < capacity) {
            lista[size] = elemento;
            size++; // Se incrementa el tamaño de la lista
        } else {
            std::cout << "Error: la lista está llena." << std::endl;
        }
    }

    // Método para eliminar un elemento en un índice dado
    void eliminar(int indice) {
        if (indice >= 0 && indice < size) {
            for (int i = indice; i < size - 1; i++) {
                lista[i] = lista[i + 1];
            }
            size--; // Se decrementa el tamaño de la lista
        } else {
            std::cout << "Índice fuera de rango." << std::endl;
        }
    }

    // Método para acceder a un elemento por índice
    int accederPorIndice(int indice) {
        if (indice >= 0 && indice < size) {
            return lista[indice];
        } else {
            std::cout << "Índice fuera de rango." << std::endl;
            return -1;
        }
    }

    // Método para obtener el tamaño de la lista
    int tamano() {
        return size;
    }
};

// Función principal para el ejemplo
int main() {
    // Crear una instancia de la lista personalizada
    Tallas tallas;

    // Agregar elementos a la lista
    tallas.agregar(25);
    tallas.agregar(30);
    tallas.agregar(42);
    tallas.agregar(19);
    tallas.agregar(20);
    tallas.agregar(50);

    // Acceder al elemento en el índice 2
    std::cout << "Elemento en el índice 2: " << tallas.accederPorIndice(2) << std::endl;

    // Eliminar el elemento en el índice 4
    tallas.eliminar(4);

    // Imprimir el tamaño de la lista
    std::cout << "Tamaño de la lista: " << tallas.tamano() << std::endl;

    // Imprimir todos los elementos de la lista
    std::cout << "Elementos de la lista:" << std::endl;
    for (int i = 0; i < tallas.tamano(); i++) {
        std::cout << tallas.accederPorIndice(i) << std::endl;
    }

    return 0;
}
