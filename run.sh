g++ -shared -fPIC -o libplugin.so plugin.cpp
g++ -o test test.cpp -L. -lplugin 
g++ -o main main.cpp