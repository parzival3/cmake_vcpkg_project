set(BINARY ${CMAKE_PROJECT_NAME})

set(SOURCES main.cpp)
set(HEADERS formula.h)

add_executable(${BINARY}_run ${SOURCES} ${HEADERS})
