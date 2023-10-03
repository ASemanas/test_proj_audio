cmake_minimum_required(VERSION 3.10)

project(Test_proj VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(include/AudioFile)
list(APPEND EXTRA_LIBS include/AudioFile)
list(APPEND EXTRA_INCLUDES "${PROJECT_BINARY_DIR}/include/AudioFile")

add_executable(Test_proj test_proj.cxx)

target_link_libraries(Test_proj ${EXTRA_LIBS})

target_include_directories(Test_proj PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           ${EXTRA_INCLUDES}
                           )