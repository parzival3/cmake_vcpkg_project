set(BINARY ${CMAKE_PROJECT_NAME}_tst)


set(TEST_SOURCES main.cpp formula-tests.cpp)

add_executable(${BINARY} ${SOURCES} ${TEST_SOURCES} ${HEADERS})

target_link_libraries(${BINARY} PRIVATE GTest::gmock GTest::gtest GTest::gmock_main GTest::gtest_main)

enable_testing()
add_test(NAME ${BINARY} COMMAND ${BINARY})
