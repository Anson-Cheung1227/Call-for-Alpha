main.exe: obj/main.o obj/Player.o obj/Utils.o obj/Entity.o obj/Gun.o
	g++ -g obj/main.o obj/Player.o obj/Utils.o obj/Entity.o obj/Gun.o -o main.exe -static-libgcc -static-libstdc++ -Wall -Wno-missing-braces -I ../include/raylib -L ../libs/raylib -dynamic -lraylib -lopengl32 -lgdi32 -lwinmm -static -lstdc++ -lpthread
obj/main.o: ../src/main.cpp
	g++ -g -c ../src/main.cpp -o obj/main.o -I ../include/raylib
obj/Player.o: ../src/Player.cpp ../src/Player.h 
	g++ -g -c ../src/Player.cpp -o obj/Player.o -I ../include/raylib
obj/Utils.o: ../src/Utils.cpp ../src/Utils.h
	g++ -g -c ../src/Utils.cpp -o obj/Utils.o -I ../include/raylib
obj/Entity.o: ../src/Entity.cpp ../src/Entity.h
	g++ -g -c ../src/Entity.cpp -o obj/Entity.o -I ../include/raylib
obj/Gun.o: ../src/Gun.cpp ../src/Gun.h
	g++ -g -c ../src/Gun.cpp -o obj/Gun.o -I ../include/raylib
clean:
	del /f obj\main.o obj\Player.o obj\Utils.o obj\Entity.o obj\Gun.o