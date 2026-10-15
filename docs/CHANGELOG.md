# 📑 Changelog - Bitácora de Versionado SemVer

Todos los cambios notables realizados en este proyecto escolar se registrarán de manera rigurosa en este archivo bajo las especificaciones de buenas prácticas de control de versiones.

**Proyecto:** Suite de Repaso, Consolidación y Respaldo Dual-Remote (Actividad 6)  
**Institución:** E.E.S.T. N° 1 "Eduardo Ader" — Vicente López  
**Asignatura:** Laboratorio de Programación (LPR) — 5° Año  
**Curso:** 5° Año 5° 3° (Grupos A-B)  
**Profesores:** Mansilla Muñoz York Elías, Gandulia Yamil  
**Desarrolladores:** Gabriel Zacarías, Sofía Mojica, Leonel De Armas, Mateo Roberts (Grupo N.º 3)  

---

## - 2026-10-15
### Aprobado
- **Baseline Aprobado:** Configuración inicial e integración completa del entorno de pruebas local (`VS Code` + `MinGW-w64`).

### Añadido
- **Módulo de Recursividad:** Implementación de la función matemática `int sumaRecursiva(int n)` con condición de corte condicional explícita para contener fugas de memoria (*Stack Overflow*).
- **Módulo de Búsqueda Secuencial:** Estructuración de un array contiguo de datos enteros de 4 bytes e implementación de bucle indexado optimizado por complejidad O(n) mediante corte asincrónico `break`.
- **Módulo de Intercambio Físico:** Implementación de la subrutina `void intercambiarValores(int* ptrA, int* ptrB)` para la permutación de valores directamente en celdas de memoria externas mediante desreferenciación con punteros (`*`).
- **Estrategia Anti-Caídas (Dual-Remote):** Configuración avanzada del archivo oculto de Git para realizar transmisiones de respaldo automatizadas y simultáneas hacia los servidores remotos de **GitHub** y **GitLab**.
- **Arquitectura de Repositorio:** Adición de los archivos estructurales obligatorios `.gitignore`, `.gitattributes`, `LICENSE` y la estructura estándar de las carpetas `src/`, `docs/manuales/` y `capturas/`.

### Modificado
- **Personalización de la Cabecera:** Actualización del bloque de comentarios internos del archivo `src/main.cpp` con las credenciales de los integrantes del grupo escolar.

### Solucionado
- **Error de Redirección:** Corrección de la salida de datos de consola redirigiendo el flujo de ejecución hacia la terminal interna interactiva de VS Code, solucionando el bloqueo de edición por solo lectura (*Cannot edit in read-only editor*).
- **Sincronización Remota:** Resolución de conflictos de historial ajeno (`[rejected] main -> main (fetch first)`) mediante comandos de consolidación `git pull origin main --allow-unrelated-histories`.

---

## - 2026-10-13
### Añadido
- **Esqueleto del Repositorio:** Estructura inicial del software provista por la plantilla del docente con soporte para compilación modular rudimentaria.
