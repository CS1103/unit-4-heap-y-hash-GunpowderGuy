# Tarea #6: Estructura de datos fundamentales - Heap y Hash

Problemas del curso de Programación Orientada a Objetos 2 - CS1103

## Instrucciones

Subir a gradescope **solo** los siguientes archivos:
- `crisscross_pairs.h`
- `find_min_subtext.h` `find_min_subtext.cpp`
- `have_same_elements.h`
- `median.h`
- `remove_duplicates.h`
- `top_distance.h`

## Problema #1 - Obtener mediana - Heap

Diseñar y desarrollar el template de clase **`median`** que permita la busqueda en tiempo constante del valor de la mediana de una colección de valores numéricos.

**Casos de uso**
```cpp
    // Caso de uso #1
    median<int> m {1, 2, 3, 5};
    cout << m << endl;
    // Caso de uso #2
    median<double> m {1, 2, 2.4, 5};
    cout << m << endl;
    // Caso de uso #3
    median<float> m {1, 2, 5, 6, 7, 3, 11, 2, 4, 3, 7};
    cout << m << endl;
    // Caso de uso #4
    median<int> m {1};
    cout << m << endl;
```
## Problema #2 - Distancia máxima - Heap

Generar el template de función **`top_distance`** para que permita devolver valores máximos y mínimos, permita seleccionar los  t valores máximos o mínimos y que permita seleccionar la posición del punto de origen.

**Casos de uso**
```cpp
    // Caso de uso #1
    vector< point<int> > values = {
        {1, 1}, {1, 2}, {1, 2}, {1, 4}, {1, 5},
        {2, 1}, {2, 2}, {2, 2}, {2, 4}, {2, 5},
        {3, 1}, {3, 2}, {3, 2}, {3, 4}, {3, 5},
        {4, 1}, {4, 2}, {4, 2}, {4, 4}, {4, 5} };
    auto result = top_distance<4, greater<int>>(values, point<int>{0, 0});
    for (const auto& item: result)
        cout << item << endl;
    // Caso de uso #2
    vector< point<int> > values = {
        {1, 1}, {1, 2}, {1, 2}, {1, 4}, {1, 5},
        {2, 1}, {2, 2}, {2, 2}, {2, 4}, {2, 5} };
    auto result = top_distance<3, less<int>>(values, point<int>{30, 40});
    for (const auto& item: result)
        cout << item << endl;
    // Caso de uso #3
    vector< point<int> > values = {
        {1, 1}, {1, 2}, {1, 2}, {1, 4}, {1, 5},
        {2, 1}, {2, 2}, {2, 2}, {2, 4}, {2, 5},
        {3, 1}, {3, 2}, {3, 2}, {3, 4}, {3, 5},
        {4, 1}, {4, 2}, {4, 2}, {4, 4}, {4, 5} };
    auto result = top_distance<7, greater<int>>(values, point<int>{0, 0});
    for (const auto& item: result)
        cout << item << endl;
```
## Problema #3 - Buscar subtexto minimo - Heap

Dado un texto 'T' y un patrón 'P', escribir una función **`find_min_subtext`** que, utilizando heaps, encuentre y retorne la porción del texto 'R' (contando espacios como caracter válido), de manera tal que los caracteres de P se encuentran en alguna parte de R, pero siguiendo el mismo orden de aparición de P. R tiene que ser la porción de texto que tenga el mínimo número de caracteres posible que cumpla con los requisitos.

```cpp
    // Caso de uso #1
    string text = "ABNT AuToN AuTooN sArTeN ATeN";
    string result = find_min_subtext(text, "ATN");
    cout << result << endl;
    // Caso de uso #2
    string text = "El rey de constantinopla esta constantinoplizado. " 
            "consta que constanza, no lo pudo desconstantinoplizar. "
            "El desconstantinoplizador que desconstantinoplizare "
            "al rey de constantinopla, buen desconstantinoplizador será.";
    string result = find_min_subtext(text, "csp");
    cout << result;
    // Caso de uso #3
    string text = "El hipopotamo Hipo está con hipo, ¿quien le quita el hipo"
    " al hipopotamo Hipo";
    string result = find_min_subtext(text, "hpm");
    cout << result;
```
## Problema #4 - Pares cruzado - Hash

Dado un contenedor de pares ordenados, Escribir el template de función **`crisscross_pairs`** que busque para cada par ordenado `p1 (i,j)` el par ordenado `p2 (j,i)` y  retorne ambos pares encontrados en un contenedor del mismo tipo que el original.

```cpp
    // Caso de uso #1
    using sorted_pair = pair<int, int>;
    vector<sorted_pair> vec {	{1, 2}, {1, 1}, {2, 1},
                                {1, 4}, {3, 2}, {4,1}};
    auto result = crisscross_pairs(vec); // {{1, 2}, {2, 1}, {1, 4}, {4,1}}
    // Caso de uso #2
    using sorted_pair = std::pair<int, int>;
    vector<sorted_pair> vec {
    {1, 2}, {1, 1}, {2, 1}, {1, 4}, {3, 2}, {4,1}, {1, 2}, {4, 5}, {7, 1}, {7, 1}, {1, 7}};
    auto result = crisscross_pairs(vec);
    for (const auto& item: result)
    cout << item.first << " " << item.second << endl;
    // Caso de uso #3
    using sorted_pair = std::pair<int, int>;
    vector<sorted_pair> vec {{1, 2}};
    auto result = crisscross_pairs(vec);
    for (const auto& item: result)
    cout << item.first << " " << item.second << endl;
    // Caso de uso #4
    using sorted_pair = std::pair<int, int>;
    vector<sorted_pair> vec {};
    auto result = crisscross_pairs(vec);
    for (const auto& item: result)
    cout << item.first << " " << item.second << endl;
```
## Problema #5 - Los mismos elementos - Hash

Dado 2 contenedores cuyos valores no se encuentran ordenados, desarrollar un template de función **`have_same_elements`** que permite verificar si ambos arreglos contienen los mismos elementos y cuyo tiempo sea lineal O(n).

```cpp
    // Caso de uso #1
    forward_list<int> fl {1, 2, 3, 4, 5};
    vector<int> vec {1, 2, 3, 3, 4, 5, 5};
    list<int> lst {2, 4, 5, 3, 1};
    cout << boolalpha;
    cout << have_same_elements(fl, vec) << endl; // false
    cout << have_same_elements(fl, lst) << endl; // true
```
## Problema #6 - Remover duplicados - Hash

Desarrollar un template de función **`remove_duplicates`** que en tiempo lineal O(n) que permita remover los valores duplicados de un contenedor y genere por default el mismo contenedor o permita seleccionar el tipo de contenedor resultado. **NOTA**: los valores deben mantener el orden y debe removerse todos excepto el primero.

```cpp
    // Caso de uso #1
    forward_list<double> source {1.7, 2.5, 3, 4, 2.5, 0.5, 1.7, 1.4, 0.5, 3, 3};
    auto result = remove_duplicates(source);
    for (const auto& item: result)
        cout << item << " ";
    cout << endl;
    // Caso de uso #2
    vector<double> source {1.7, 2.5, 3, 4, 2.5, 0.5, 1.7, 1.4, 0.5, 3, 3};
    auto result = remove_duplicates(source);
    for (const auto& item: result)
        cout << item << " ";
    cout << endl;
    // Caso de uso #3
    vector<int> source {1, 2, 3, 4, 5, 5, 7, 4, 5, 3, 3};
    auto result = remove_duplicates(source);
    for (const auto& item: result)
        cout << item << " ";
    cout << endl;
    // Caso de uso #4
    list<int> source {1, 2, 3, 4, 5, 5, 7, 4, 5, 3, 3};
    auto result = remove_duplicates<int, list, vector>(source);
    for (const auto& item: result)
        cout << item << " ";
    cout << endl;
```
