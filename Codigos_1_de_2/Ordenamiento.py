def main():
    #Conjunto de datos inicial arary de edades_python
    edades_python = [25, 30, 42, 19, 20, 55, 33, 28, 36, 40, 22, 27]
    #crearemos un pequeño menu par aejeutar los algoritomos de Ordenamiento
    while True:
        # Mostramos el menú
        print("\nMenú para ejecutar los algoritmos de ordenamiento a nuestro Array: edades_python = [25, 30, 42, 19, 20, 55, 33, 28, 36, 40, 22, 27]" )
        print("1. Insertion Sort (Ordenamiento por inserción)")
        print("2. Bubble Sort (Ordenamiento de burbuja)")
        print("3. Selection Sort (Ordenamiento por selección)")
        print("4. Merge Sort (Ordenamiento por mezcla)")
        print("5. Random Sort (Ordenamiento aleatorio)")
        print("6. Salir")

        #pedimos ingrese una opcion por teclado
        opcion = input("Ingresa un número del 1 al 5 para ejecutar un algoritmo de ordenamiento (o 6 para salir): ")

        # Evaluamos la opción ingresada
        if opcion == '1':
            O_Insercion(edades_python)
            print("Array ordenado por inserción:", edades_python)
        elif opcion == '2':
            O_Burbuja(edades_python)
            print("Array ordenado por burbuja:", edades_python)
        elif opcion == '3':
            O_Select(edades_python)
            print("Array ordenado por selección:", edades_python)
        elif opcion == '4':
            O_Mezcla(edades_python)
            print("Array ordenado por mezcla:", edades_python)
        elif opcion == '5':
            O_Random(edades_python)
            print("Array ordenado aleatoriamente:", edades_python)
        elif opcion == '6':
            print("Saliendo del programa...")
            break
        else:
            #cualqueir otro digito pro fuera de los elegidos incialmente se notifica quee sta incorrecto
            print("Opción inválida. Por favor, ingresa un número del 1 al 6.")

# empezamos a crear todos los metodos para cad uno de los algoritmos de ordenamiento

def O_Insercion(edadesi):
    # Iteramos sobre cada elemento del array
    for i in range(1, len(edadesi)):
        # Guardamos el valor actual para comparar y colocar en la posición correcta
        current_value = edadesi[i]
        # Inicializamos el índice para comparar con el valor actual
        j = i - 1
        # Movemos los elementos mayores que el valor actual una posición hacia adelante
        while j >= 0 and edadesi[j] > current_value:
            edadesi[j + 1] = edadesi[j]
            j -= 1
        # Colocamos el valor actual en la posición correcta
        edadesi[j + 1] = current_value
    return edadesi


def O_Burbuja(edadesb):
    n = len(edadesb)
    # Iteramos sobre todos los elementos del array
    for i in range(n):
        # En cada iteración, el elemento más grande se moverá hacia el final,
        # por lo que podemos reducir el rango de comparación
        for j in range(0, n - i - 1):
            # Comparamos elementos adyacentes y los intercambiamos si están en el orden incorrecto
            if edadesb[j] > edadesb[j + 1]:
                edadesb[j], edadesb[j + 1] = edadesb[j + 1], edadesb[j]
    return edadesb

def O_Select(edadess):
    # Iteramos sobre cada elemento del array
    for i in range(len(edadess)):
        # Encontramos el índice del elemento mínimo en el subarray no ordenado
        indice_minimo = i
        for j in range(i + 1, len(edadess)):
            if edadess[j] < edadess[indice_minimo]:
                indice_minimo = j
        # Intercambiamos el elemento mínimo encontrado con el primer elemento del subarray no ordenado
        edadess[i], edadess[indice_minimo] = edadess[indice_minimo], edadess[i]
    return edadess


def O_Mezcla(edadesm):
    # Si el tamaño del array es mayor que 1, se necesita ordenar de lo contrario no
    if len(edadesm) > 1:
        # Encontrar el punto medio del array
        mid = len(edadesm) // 2
        
        # Dividir el array en dos mitades
        left_half = edadesm[:mid]
        right_half = edadesm[mid:]

        # Llamada recursiva para ordenar ambas mitades
        O_Mezcla(left_half)
        O_Mezcla(right_half)

        # Fusionar las mitades ordenadas
        i = j = k = 0
        
        # Iterar sobre las dos mitades y fusionarlas
        while i < len(left_half) and j < len(right_half):
            # Comparar los elementos de las dos mitades y agregar el más pequeño al array resultante
            if left_half[i] < right_half[j]:
                edadesm[k] = left_half[i]
                i += 1
            else:
                edadesm[k] = right_half[j]
                j += 1
            k += 1

        # Añadir los elementos restantes de la mitad izquierda, si hay alguno
        while i < len(left_half):
            edadesm[k] = left_half[i]
            i += 1
            k += 1

        # Añadir los elementos restantes de la mitad derecha, si hay alguno
        while j < len(right_half):
            edadesm[k] = right_half[j]
            j += 1
            k += 1
    return edadesm

import random

def O_Random(edadesr):
    n = len(edadesr)
    # Realizamos un número suficiente de intercambios aleatorios
    # para mezclar el array
    for _ in range(n * n):
        # Elegimos dos índices aleatorios en el arreglo
        i, j = random.randint(0, n - 1), random.randint(0, n - 1)
        # Intercambiamos los elementos en esos índices
        edadesr[i], edadesr[j] = edadesr[j], edadesr[i]
    return edadesr


if __name__ == "__main__":
    main()