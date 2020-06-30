cmake_minimum_required(VERSION 3.8)
project(Herencia01)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp CPersona.cpp CPersona.h Definiciones.h CAlumno.cpp CAlumno.h)
add_executable(Herencia01 ${SOURCE_FILES})