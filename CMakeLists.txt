cmake_minimum_required(VERSION 3.10)
project(MaxScore)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Especificar el directorio include
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

# Crear el ejecutable
add_executable(solution src/Solution.cpp)

# Habilitar testing
enable_testing()

# Agregar tests si existen
if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/tests/tests.cpp)
    add_executable(tests tests/tests.cpp)
    add_test(NAME AllTests COMMAND tests)
endif()

# Habilitar flags de compilación útiles
if(MSVC)
    target_compile_options(solution PRIVATE /W4)
else()
    target_compile_options(solution PRIVATE -Wall -Wextra -pedantic)
endif()