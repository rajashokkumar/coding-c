link_libraries(criterion)

add_executable(tests
    test_binary_search.c
)

target_include_directories(tests PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_link_libraries(tests PRIVATE impl criterion)

add_test(NAME all_tests COMMAND tests)
