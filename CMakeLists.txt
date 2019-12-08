cmake_minimum_required(VERSION 3.2)

project(editor VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})
# project(editor VERSION 0.0.1)

configure_file(version.h.in version.h)

find_package(GTest REQUIRED)

add_executable(editor main.cpp)

add_library(helloworld lib.cpp)
add_library(document Document.cpp)
add_library(editorlib Editor.cpp)


add_subdirectory(Shape)

set_target_properties(editor helloworld editorlib document PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
)
target_include_directories(helloworld
    PRIVATE "${CMAKE_BINARY_DIR}"
)
target_link_libraries(editor PRIVATE
    helloworld editorlib document shapes 
)

if (MSVC)
    target_compile_options(editor PRIVATE
        /W4
    )
    target_compile_options(helloworld PRIVATE
        /W4
    )
    target_compile_options(document PRIVATE
        /W4
    )
    target_compile_options(editorlib PRIVATE
        /W4
    )
else ()
    target_compile_options(editor PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
    target_compile_options(helloworld PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
    target_compile_options(document PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
    target_compile_options(editorlib PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
endif()

install(TARGETS editor RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT example@example.com)

include(CPack)

enable_testing()