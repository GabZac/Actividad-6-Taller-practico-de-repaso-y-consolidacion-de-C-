/* 
   ====================================================================
   Materia: Laboratorio de Programación (LPR) — 5° Año
   Institución: E.E.S.T. N.º 1 "Eduardo Ader" - Vicente López
   Curso: 5° Año 5° 3°
   Estudiante: Gabriel Zacarias
   Archivo: src/main.cpp
   Actividad 6: Suite de Taller de Repaso e Integración
   ====================================================================
*/

#include <iostream>

using namespace std;

// Prototipos de funciones modulares (Cumpliendo diseño Top-Down)
int sumaRecursiva(int n);
void intercambiarValores(int* ptrA, int* ptrB);

int main() {
    cout << "=====================================================" << endl;
    cout << "  TALLER INTEGRADOR REPASO - ESTUDIANTE: Gabriel Zacarias " << endl;
    cout << "=====================================================" << endl;

    // --- RETO 1: RECURSIVIDAD ---
    cout << "\n=== RETO 1: SUMA RECURSIVA ===" << endl;
    int num = 5;
    cout << "Suma acumulada de 1 hasta " << num << ": " << sumaRecursiva(num) << endl;

    // --- RETO 2: ARRAYS Y BÚSQUEDA SECUENCIAL ---
    cout << "\n=== RETO 2: BÚSQUEDA EN MEMORIA CONTIGUA ===" << endl;
    const int TAM = 10;
    int vectorDatos[TAM] = {12, 45, 78, 90, 122, 5, 18, 33, 67, 99};
    int numeroBuscar = 18;
    bool hallado = false;

    for (int i = 0; i < TAM; i++) {
        if (vectorDatos[i] == numeroBuscar) {
            cout << "[SISTEMA] Valor " << numeroBuscar << " hallado en el indice [" << i << "]" << endl;
            cout << "          Direccion RAM Hexadecimal: " << &vectorDatos[i] << endl;
            hallado = true;
            break; // Interrupción optimizada del ciclo O(n) tras hallar coincidencia
        }
    }

    if (!hallado) {
        cout << "[SISTEMA] El valor " << numeroBuscar << " no existe en el arreglo." << endl;
    }

    // --- RETO 3: INTERCAMBIO CON PUNTEROS ---
    cout << "\n=== RETO 3: INTERCAMBIO DE CELDAS ===" << endl;
    int x = 100, y = 500;
    cout << "Valores previos  -> X: " << x << " | Y: " << y << endl;

    // Invocación pasando direcciones físicas de memoria mediante operador '&'
    intercambiarValores(&x, &y);

    cout << "Valores actuales -> X: " << x << " | Y: " << y << endl;
    cout << "=====================================================" << endl;

    return 0; // Código 0: Ejecución exitosa en Windows
}

// Desarrollo del Módulo 1: Función recursiva con caso base de corte explícito
int sumaRecursiva(int n) {
    if (n <= 0) return 0; // Caso base obligatorio para prevenir desbordamientos (Stack Overflow)
    return n + sumaRecursiva(n - 1); // Llamada recursiva con reducción del parámetro
}

// Desarrollo del Módulo 3: Permutación física en RAM mediante desreferenciación con '*'
void intercambiarValores(int* ptrA, int* ptrB) {
    int temporal = *ptrA; // Copia el contenido de la primera celda en un búfer temporal
    *ptrA = *ptrB;        // Escribe el valor de la segunda celda en la primera posición
    *ptrB = temporal;     // Asigna el valor guardado en el búfer a la segunda celda
}
