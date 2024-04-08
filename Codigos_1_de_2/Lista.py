class Tallas:
    def __init__(self):
        self.lista = []

    def agregar(self, elemento):
        self.lista.append(elemento)

    def eliminar(self, indice):
        if 0 <= indice < len(self.lista):
            del self.lista[indice]
        else:
            print("Índice fuera de rango.")

    def acceder_por_indice(self, indice):
        if 0 <= indice < len(self.lista):
            return self.lista[indice]
        else:
            print("Índice fuera de rango.")
            return None

    def tamano(self):
        return len(self.lista)


# Ejemplo de uso
if __name__ == "__main__":
    # Crear una instancia de la lista personalizada
    lista_tallas = Tallas()

    # Agregar elementos a la lista
    lista_tallas.agregar(25)
    lista_tallas.agregar(30)
    lista_tallas.agregar(42)
    lista_tallas.agregar(19)
    lista_tallas.agregar(20)
    lista_tallas.agregar(50)

    # Acceder al elemento en el índice 2
    print("Elemento en el índice 2:", lista_tallas.acceder_por_indice(2))

    # Eliminar el elemento en el índice 4
    lista_tallas.eliminar(4)

    # Imprimir el tamaño de la lista
    print("Tamaño de la lista:", lista_tallas.tamano())

    # Imprimir todos los elementos de la lista
    print("Elementos de la lista:")
    for elemento in lista_tallas.lista:
        print(elemento)