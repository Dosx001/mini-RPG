CC = c++
OBJS = main.o Player.o Trials.o Inventory.o Menu.o
FLAGS = -c -Wall
EXE = mini_RPG.exe

link: $(OBJS)
	$(CC) $(OBJS) -o $(EXE)

%.o: %.cpp Player.h
	$(CC) $(FLAGS) $*.cpp

%.o: %.cpp Trials.h
	$(CC) $(FLAGS) $*.cpp

%.o: %.cpp Inventory.h
	$(CC) $(FLAGS) $*.cpp

%.o: %.cpp Menu.h
	$(CC) $(FLAGS) $*.cpp

clean:
	rm *.o $(EXE)
