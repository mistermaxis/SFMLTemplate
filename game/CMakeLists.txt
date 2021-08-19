include_directories(${CMAKE_SOURCE_DIR}/game/include)

add_library(game game.cpp)

target_link_libraries(game -lsfml-graphics -lsfml-window -lsfml-system)