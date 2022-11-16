main.exe: main.o Player.o Utils.o Entity.o
	g++ -g main.o Player.o Utils.o Entity.o -o main.exe -static-libstdc++ -Wall -Wno-missing-braces -I ../include/raylib -L ../libs/raylib -lraylib -lopengl32 -lgdi32 -lwinmm
main.o: ../src/main.cpp
	g++ -g -c ../src/main.cpp -o main.o -I ../include/raylib
Player.o: ../src/Player.cpp 
	g++ -g -c ../src/Player.cpp -o Player.o -I ../include/raylib
Utils.o: ../src/Utils.cpp 
	g++ -g -c ../src/Utils.cpp -o Utils.o -I ../include/raylib
Entity.o: ../src/Entity.cpp
	g++ -g -c ../src/Entity.cpp -o Entity.o -I ../include/raylib
clean:
	del /f main.o Player.o Utils.o Entity.o