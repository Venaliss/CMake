cmake_minimum_required(VERSION 3.10)

# Имя проекта
project(AreaCalculator)

# Тута добавляем опцию для выбора типа библиотеки
option(BUILD_SHARED "Build shared library" OFF)

# Указываем тип библиотеки
if(BUILD_SHARED)
    add_library(area SHARED area.cpp)
else()
    add_library(area STATIC area.cpp)
endif()

# Указываем исполняемую программу
add_executable(main main.cpp)

# Связь библиотеки с основной программой
target_link_libraries(main PRIVATE area)