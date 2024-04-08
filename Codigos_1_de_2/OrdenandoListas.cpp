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
        void O_Random(int arr[], int size);

        int main()
        {
            // Conjunto de datos inicial Lista de Tallas_cpp
            int Tallas_cpp[] = {25, 30, 42, 19, 20, 50};
            // vamos almacenar el tamaño de nuestro Lista en una variable llamada size
            int size = sizeof(Tallas_cpp) / sizeof(Tallas_cpp[0]);
            // crearemos un pequeño menu para ejeutar los algoritomos de Ordenamiento
            while (true)
            {
                // Mostrar el menu
                cout << "Menú para ejecutar los algoritmos de ordenamiento a nuestra Lista: " << endl;
                cout << "1. Insertion Sort (Ordenamiento por insercion)" << endl;
                cout << "2. Bubble Sort (Ordenamiento de burbuja)" << endl;
                cout << "3. Random Sort (Ordenamiento aleatorio)" << endl;
                cout << "4. Salir" << endl;

                // pedimos ingrese una opción por teclado
                int opcion;
                cout << "Ingresa un numero del 1 al 5 para ejecutar un algoritmo de ordenamiento (o 4 para salir):";
                cin >> opcion;

                // Evaluamos la opción ingresada para ejecutar cualquiera de las opciones
                switch (opcion)
                {
                case 1:
                    // Antes de ordenar
                    std::cout << "Antes de ordenar:" << std::endl;
                    for (int i = 0; i < size; i++)
                    {
                        std::cout << Tallas_cpp[i] << " ";
                    }
                    std::cout << std::endl;

                    // Llamamos al método de ordenamiento
                    O_Insercion(Tallas_cpp, size);

                    // Después de ordenar
                    std::cout << "Después de ordenar con O_Insercion:" << std::endl;
                    for (int i = 0; i < size; i++)
                    {
                        std::cout << Tallas_cpp[i] << " ";
                    }
                    std::cout << std::endl;
                    return 0;
                case 2:
                    // Antes de ordenar
                    std::cout << "Antes de ordenar:" << std::endl;
                    for (int i = 0; i < size; i++)
                    {
                        std::cout << Tallas_cpp[i] << " ";
                    }
                    std::cout << std::endl;

                    // Llamamos al método de ordenamiento
                    O_Burbuja(Tallas_cpp, size);

                    // Después de ordenar
                    std::cout << "Después de ordenar con O_Burbuja:" << std::endl;
                    for (int i = 0; i < size; i++)
                    {
                        std::cout << Tallas_cpp[i] << " ";
                    }
                    std::cout << std::endl;

                    return 0;
                case 3:
                    // Antes de ordenar aleatoriamente
                    std::cout << "Antes de ordenar aleatoriamente:" << std::endl;
                    for (int i = 0; i < size; i++)
                    {
                        std::cout << Tallas_cpp[i] << " ";
                    }
                    std::cout << std::endl;

                    // Llamamos al método de ordenamiento aleatorio
                    O_Random(Tallas_cpp, size);

                    // Después de ordenar aleatoriamente
                    std::cout << "Después de ordenar aleatoriamente:" << std::endl;
                    for (int i = 0; i < size; i++)
                    {
                        std::cout << Tallas_cpp[i] << " ";
                    }
                    std::cout << std::endl;

                    return 0;
                case 4:
                    cout << "Saliendo del programa..." << endl;
                    return 0; // Terminar la ejecucion del programa
                default:
                    // cualqueir otro digito pro fuera de los elegidos incialmente se notifica quee sta incorrecto
                    cout << "Opcion invalida. Por favor, ingresa un numero del 1 al 4." << endl;
                }
            }

            return 0;
        }


        // empezamos a crear todos los metodos para cada uno de los algoritmos de ordenamiento

        void O_Insercion(int tallas1[], int size)
        {
            // Iteramos sobre la lista desde el segundo elemento hasta el final
            for (int i = 1; i < size; i++)
            {
                int key = tallas1[i]; // Guardamos el valor actual que vamos a insertar
                int j = i - 1;

                // Movemos los elementos de la lista que son mayores que key hacia adelante
                // hasta encontrar la posición correcta para insertar key
                while (j >= 0 && tallas1[j] > key)
                {
                    tallas1[j + 1] = tallas1[j];
                    j = j - 1;
                }

                tallas1[j + 1] = key; // Insertamos key en su posición correcta
            }
        }

        void O_Burbuja(int tallasb[], int size)
        {
            // Iteramos sobre la lista
            for (int i = 0; i < size - 1; i++)
            {
                // Últimos i elementos ya están en su lugar, así que no necesitamos compararlos
                for (int j = 0; j < size - i - 1; j++)
                {
                    // Comparamos elementos adyacentes y los intercambiamos si están en el orden incorrecto
                    if (tallasb[j] > tallasb[j + 1])
                    {
                        // Intercambio de valores usando una variable temporal
                        int temp = tallasb[j];
                        tallasb[j] = tallasb[j + 1];
                        tallasb[j + 1] = temp;
                    }
                }
            }
        }

        // Función Adicional para intercambiar dos elementos
        void swap(int& a, int& b) {
            int temp = a; // Almacenamos el valor de a temporalmente
            a = b;        // Asignamos el valor de b a a
            b = temp;     // Asignamos el valor temporal de a a b
        }

        void O_Random(int tallasr[], int size) {
            // Semilla para la generación de números aleatorios
            srand(time(nullptr));

            // Mezcla aleatoriamente los elementos en la lista
            for (int i = 0; i < size - 1; i++) {
                int random_index = rand() % size; // Genera un índice aleatorio
                swap(tallasr[i], tallasr[random_index]);
            }
        }
