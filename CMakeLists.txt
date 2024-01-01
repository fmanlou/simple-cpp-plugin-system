cmake_minimum_required(VERSION 3.22)

project("Simple-Cpp-Plugin-System")

add_subdirectory(plugins)

aux_source_directory(. SRCS)

add_executable(main ${SRCS})
