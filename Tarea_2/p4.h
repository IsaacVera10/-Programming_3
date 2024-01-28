//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_UNIT2_TASK2_V2021_P4_H
#define POO2_UNIT2_TASK2_V2021_P4_H


using namespace std;
/*
La solución más común y efectiva para manejar punteros inteligentes es implementar un sistema de contadores de referencia.
Este sistema rastrea cuántas instancias del puntero inteligente están apuntando al mismo objeto y se asegura de que el objeto
se libere correctamente una vez que todas las instancias del puntero inteligente hayan terminado su ciclo de vida.

A continuación, te muestro cómo podrías implementar un sistema de contadores de referencia para tu clase smart_ptr:

Agregar un contador de referencia a la clase smart_ptr.
Incrementar el contador cada vez que se crea una nueva instancia que apunte al mismo objeto.
Decrementar el contador cada vez que se destruye una instancia o se asigna un nuevo valor al puntero inteligente.
Liberar el objeto cuando el contador llegue a cero.
*/
template <typename T>
class smart_ptr {
    T* data = nullptr;
    int* ref_count = nullptr;  // Contador de referencia

public:
    smart_ptr() : ref_count(new int(1)) {}  // Inicializar el contador a 1
    smart_ptr<T>(T value) : data(new T(value)), ref_count(new int(1)) {}
    smart_ptr(const smart_ptr& other) : data(other.data), ref_count(other.ref_count) {
        ++(*ref_count);  // Incrementar el contador cuando se copia
    }

    smart_ptr& operator=(const smart_ptr& other) {
        if (this != &other) {
            // Decrementar el contador actual
            if (--(*ref_count) == 0) {
                delete data;
                delete ref_count;
            }

            // Copiar los datos y el contador
            data = other.data;
            ref_count = other.ref_count;

            // Incrementar el contador
            ++(*ref_count);
        }
        return *this;
    }

    ~smart_ptr() {
        if (--(*ref_count) == 0) {
            delete data;
            delete ref_count;
        }
    }

    T& operator*() {
        return *data;
    }

    T* operator->() {
        return data;
    }
};

template<typename T, typename ...Params>
smart_ptr<T> make_smart_ptr(Params ...params) {
    return smart_ptr<T>(T(params...));
}

class point {
    int x;
    int y;
public:
    point(int x, int y): x{x}, y{y} {}
    point() = default;

    friend ostream& operator<< (ostream& os, const point& p) {
        os << "{" << p.x <<", " << p.y << "}" << endl;
        return os;
    }

    [[nodiscard]] int get_x() const { return x; }
    [[nodiscard]] int get_y() const { return y; }
};

void question_4_1();
void question_4_2();

#endif //POO2_UNIT2_TASK2_V2021_P4_H
