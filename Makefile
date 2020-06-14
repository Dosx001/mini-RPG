output: main.o Player.o Trials.o
	g++ main.o Player.o Trials.o -o mini_RPG.exe

main.o: main.cpp
	g++ -c -Wall main.cpp

Player.o: Player.cpp Player.h
	g++ -c -Wall Player.cpp

Trials.o: Trials.cpp Trials.h
	g++ -c -Wall Trials.cpp

Inventory.o: Inventory.cpp Inventory.h
	g++ -c -Wall Inventory.cpp

clean:
	rm *.o
