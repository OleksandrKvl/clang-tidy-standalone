# Contains wrappers for functions/macros used in original clang-tidy CMake files

macro(add_clang_library name)
    cmake_parse_arguments(ARG
        ""
        ""
        "DEPENDS;LINK_LIBS"
        ${ARGN}
        )
    
    add_library(${name} ${ARG_UNPARSED_ARGUMENTS})

    # if(ARG_DEPENDS)
    #     add_dependencies(${name} ${ARG_DEPENDS})
    # endif()

    # if(ARG_LINK_LIBS)
    #     add_dependencies(${name} ${ARG_LINK_LIBS})
    # endif()

endmacro()

function(clang_target_link_libraries target type)
    target_link_libraries(${target} ${type} ${ARGN})
endfunction()

macro(add_clang_tool name)
    add_executable(${name} ${ARGN})
endmacro()
