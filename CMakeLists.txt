project(Practikum_2)

add_library(
    greeting
    greeting.hpp
    greeting.cpp
)

add_executable(main 
    main.cpp)

target_link_libraries(main PRIVATE greeting)
