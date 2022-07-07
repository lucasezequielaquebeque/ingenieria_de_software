:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include\ -c .\src\Folder.cpp
g++ -Wall -std=c++11 -I.\include\ -c .\src\File.cpp
g++ -Wall -std=c++11 -I.\include\ -c composite.cpp

:: Enlazo y genero el binario
g++ Folder.o File.o composite.o -o composite.exe

:: Limpio los códigos objeto
DEL .\*.o