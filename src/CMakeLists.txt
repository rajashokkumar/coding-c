add_library(impl
    binary_search.c
    binary_search_2d.c
    search_insert_position.c
    find_first_last.c
    first_bad_version.c
    search_rotated_sorted.c
    find_min_rotated_sorted.c
)

target_include_directories(impl PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
