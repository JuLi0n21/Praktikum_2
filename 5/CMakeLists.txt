project(Practikum_5)

add_library(
    teamstatistics
    TeamStatistics.hpp
    TeamStatistics.cpp
    
)

add_executable(main 
    main.cpp)

    target_link_libraries(main PRIVATE teamstatistics)
