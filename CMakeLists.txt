cmake_minimum_required(VERSION 3.22)

project("Simple-Cpp-Plugin-System")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

add_subdirectory(plugins)

aux_source_directory(. SRCS)

add_executable(main ${SRCS})
