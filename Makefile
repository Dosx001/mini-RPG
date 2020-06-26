CC = c++
SRCS = main.cpp Player.cpp Trials.cpp Inventory.cpp Menu.cpp pch.cpp
OBJS = $(SRCS:%.cpp=%.o)
FLAGS = -c -Wall
EXE = mini_RPG.exe

link: $(OBJS)
	$(CC) $(OBJS) -o $(EXE)

%.o: %.cpp %.h
	$(CC) $(FLAGS) $*.cpp

clean:
	rm *.o $(EXE)
