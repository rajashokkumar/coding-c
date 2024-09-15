link_libraries(criterion)

add_executable(tests
    test_binary_search.c
    test_binary_search_2d.c
    test_find_first_last.c
    test_first_bad_version.c
    test_search_rotated_sorted.c
    test_find_min_rotated_sorted.c
)

target_include_directories(tests PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_link_libraries(tests PRIVATE impl criterion)

add_test(NAME all_tests COMMAND tests)
