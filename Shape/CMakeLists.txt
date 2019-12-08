cmake_minimum_required(VERSION 3.2)
add_library(shapes Rectangle.cpp Shape.cpp)
set_target_properties(shapes PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
)
if (MSVC)
    target_compile_options(shapes PRIVATE
        /W4
    )
else ()
    target_compile_options(shapes PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
endif()