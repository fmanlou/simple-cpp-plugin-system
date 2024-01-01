project("Simple-Cpp-Plugin-System")

add_library(NotifyPlugin SHARED notifyplugin.cpp)
add_executable(main main.cpp pluginloader.cpp)
