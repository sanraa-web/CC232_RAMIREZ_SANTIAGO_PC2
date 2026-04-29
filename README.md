## PC2 - CC232

### Estudiante
- Nombre: Santiago Alejandro Ramirez Aguilar
- Código: 20231438F
- Problema asignado: LeetCode 1696 - Jump Game VI
- Enlace: https://leetcode.com/problems/jump-game-vi/description/

## Problema asignado
**https://leetcode.com/problems/jump-game-vi/**

### Tema principal
- Semana: 3
- Estructura o técnica principal: Deque

### Resumen de la solución
Se utiliza programación dinámica con una deque de máximos decreciente. `dp[i]` almacena la máxima puntuación hasta la posición `i`. Para cada posición, se consulta el máximo de `dp` en el rango `[i-k, i-1]` usando una deque que mantiene los índices ordenados por valor de forma decreciente.

### Complejidad
- Tiempo: O(n)
- Espacio: O(n)

### Invariante o idea clave
La deque mantiene índices en orden decreciente de sus valores `dp`. Al procesar cada posición `i`, se remove el índice más antiguo si está fuera del rango válido `[i-k, i-1]`, y se añade el nuevo índice manteniendo la propiedad decreciente.

### Archivos relevantes
- include/
- src/
- tests/
- demos/

### Compilación
```bash
cmake -S . -B build
cmake --build build
```

### Ejecución
```bash
./build/solution.exe
```

### Casos de prueba
Describe al menos 3 casos:
1.
2.
3.

### Historial de commits
Indica que el historial debe verse en el video.

### Declaración de autoría
Declaro que entiendo el código entregado, que puedo explicarlo, compilarlo, ejecutarlo y modificarlo sin ayuda externa durante la grabación.


