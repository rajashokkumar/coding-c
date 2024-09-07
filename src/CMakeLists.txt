add_library(impl
    binary_search.c
)

target_include_directories(impl PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
