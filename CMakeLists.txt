include(FetchContent)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

find_program(CCACHE_PROGRAM ccache)

if(CCACHE_PROGRAM)
    MESSAGE("CCACHE support enabled")
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_PROGRAM}")
    set_property(GLOBAL PROPERTY RULE_LAUNCH_LINK "${CCACHE_PROGRAM}")
endif()

set(CMAKE_BUILD_TYPE "DEBUG")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE 1)

set(FETCHCONTENT_QUIET FALSE)

FetchContent_Declare(
    flatbuffer
    GIT_REPOSITORY "https://github.com/google/flatbuffers"
    GIT_TAG e08da4dea29449c235096a688a361fa914868b76
    GIT_PROGRESS TRUE
)
FetchContent_MakeAvailable(flatbuffer)

FetchContent_Declare(
    fmtlib
    GIT_REPOSITORY "https://github.com/fmtlib/fmt"
    GIT_TAG 1557ab764422d5087619fea3994012066644a11e
    GIT_PROGRESS TRUE
)
FetchContent_MakeAvailable(fmtlib)

FetchContent_Declare(
    nlohmann
    GIT_REPOSITORY "https://github.com/nlohmann/json"
    GIT_TAG 4d4c2730365084f2a68fb7a01110ae66fad059a3
    GIT_PROGRESS TRUE
)
FetchContent_Populate(nlohmann)
include_directories(${nlohmann_SOURCE_DIR}/include)

set(FLATC ${FlatBuffers_BINARY_DIR}/flatc)
message("flatc compiler at: ${FLATC}")

add_subdirectory(schemas)
include_directories(schemas)

function(add_code name)
    add_executable(${name} ${name}.cpp)
    target_link_libraries(${name} PRIVATE flatbuffers fmt::fmt)
endfunction()

add_code(animal_test)
add_code(animal_test_obj)
add_code(world_test)
#add_code(world_test_obj)
