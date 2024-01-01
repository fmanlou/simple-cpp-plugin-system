aux_source_directory(. SRCS)

add_library(TestPlugin SHARED ${SRCS})

target_include_directories(TestPlugin PRIVATE ${CMAKE_SOURCE_DIR})
