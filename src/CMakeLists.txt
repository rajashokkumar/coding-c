add_library(impl
    binary_search.c
    binary_search_2d.c
    search_insert_position.c
)

target_include_directories(impl PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
