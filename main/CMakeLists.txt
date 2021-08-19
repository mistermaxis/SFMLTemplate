include_directories(${CMAKE_SOURCE_DIR}/game/include)

add_executable(sfml main.cpp)

target_link_libraries(sfml game)