# Task #1: Clases y Operadores  
**course:** Programación Orientada a Objetos 2  
**unit:** Unidad 1  
**cmake project:** poo2_unit_1
## Instructions
Subir a gradescope los siguientes archivos:

- **number.h y number.cpp**, contienen la declaración (.h) y definición (.cpp) de la clase **number_t**
- **search_odds.h y search_odds.cpp**, contienen la declaración (.h) y definición (.cpp) de la función **search_odds**
- **calculate_pentagon.h y calculate_pentagon.cpp**, contienen la declaración (.h) y definición (.cpp) de la función **calculate_pentagon**
- **quick_sort.h y quick_sort.cpp**, contienen , contienen la declaración (.h) y definición (.cpp) de la clase **quick_sort** y de funciones adicionales de soporte.

## Question #1 - number type (10 points)

Desarrollar la clase **number_t** que encapsule valores enteros (tipo T) que sin usar templates y desarrollar los siguientes métodos y operadores:
- constructor por default `number_t()`
- constructor por parametros y operador de asignación por copia `number_t(const T& value)`, `number_t& operator=(const T& value)`.
- operador de incremento (`++`) y decremento (`--`) prefijo y postfijo  
- operadores de adición/resta asignación (`+=`, `-=`)  
- operadores de división/multiplicación asignación (`/=`, `*=`)  
- operadores de potencia (`^`)
- operadores de potencia asignación (`^=`)
- operadores ostream `<<`
- operadores istream `>>`

**Use Case:**  
```cpp
    number_t n1;
    cin >> n1;
    number_t n2{ 20 };
    number_t n3 = n1 + n2;
    number_t n4;
    number_t n5;
    const number_t n6 = n5;
    
    number_t* n7 = new number_t(5);
    number_t* n8 = new number_t;
    cin >> *n8;
    
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    n4 = 10 + n3;
    cout << n4 << endl;
    n5 = n2 + n3;
    cout << n5 << endl;
    cout << n6 << endl;
    cout << *n7 << endl;
    cout << *n8 << endl;
    delete n8;
    delete n7;
```

## Question #2 - search odds (2 points)

Elaborar la función **search_odds** que tome como parametro un vector de objetos del tipo **number_t** y retornar en un vector todos los números (**number_t**) que aparezcan en el vector una cantidad impar de veces.

**Use Case:**
```cpp
    auto r1 = search_odds({ 1, 1, 2, -2,
                           5, 2, 4, 4, -1, -2, 5 });
    cout << r1.front() << endl;     // -1

    auto r2 = search_odds({ 20, 1, 1, 2, 2, 
                           3, 3, 5, 5, 4, 20, 4, 5 });
    cout << r2.front() << endl;     // 5
```

## Question #3 - calculate pentagon (2 points)

Elaborar la función **calculate_pentagon** que tome como parametro un numero positivo (**n**) y que calcule cuantos puntos existen en una figura pentagonal alrededor de un punto central en **n** iteraciones.  
En la imagen se puede ver que en la primera iteración (*n=1*) solo se obtiene 1 punto, en la segunda (*n=2*) se obtiene 6 y en la tercera (*n=3*) se obtiene 31.
<p align="center">
<img src="pentagon_number.png" width="500">
</p>    
  
**Use Case:**  
```cpp
    number_t x;
    cin >> x;
    cout << calculate_pentagon(x) << endl;
```

## Question #4 - quicksort (6 points)

Elaborar las funciones **partition** y **quick_sort** que implementen el algoritmo de ordenamiento **quick** en forma recursiva e implementar la clase **quicksort_t** basado en la función **quick_sort**, esta clase debe sobrecargar el operador << para recibir el nombre del archivo, abrirlo y ordenarlo usando la función **quick_sort** (en el ejemplo el archivo se llama **in.txt**), ordenarlo y sobrecargar el operador **>>** que creara un archivo con el nombre de archivo descrito (en el ejemplo **out.txt**) y grabará el contenido del archivo **in.txt** ordenado.

    Ejemplo:  
    ```
    quicksort_t qs;
    qs << "in.txt";
    qs >> "out.txt";  

**Use Case:**  
```cpp
    // Ejemplo # 1
    quicksort_t qs = { 10, 4, 1, 3, 7,
                       8, -4, -3, 100, 2, 9};
    cout << qs << endl;

    // Ejemplo # 2
    {
        quicksort_t qs;
        qs << "in_4_4.txt";
        qs >> "out_4_4.txt";
    }
    ifstream file("out_4_4.txt");
    
    int value = 0;
    while (file >> value)
        cout << value << " ";
    cout << endl;
```

 
