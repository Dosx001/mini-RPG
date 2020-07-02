CXX = c++
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:%.cpp=%.o)
FLAGS = -c -Wall
EXE = mini_RPG.exe

link: $(OBJS)
	$(CXX) $(OBJS) -o $(EXE)

main.o: main.cpp Player.h Inventory.h Menu.h
	$(CXX) $(FLAGS) main.cpp

Player.o: Player.cpp Player.h Inventory.h Trials.h Classes.h
	$(CXX) $(FLAGS) Player.cpp

Menu.o: Menu.cpp Menu.h Player.h Inventory.h
	$(CXX) $(FLAGS) Menu.cpp

%.o: %.cpp %.h
	$(CXX) $(FLAGS) $*.cpp

clean:
	rm *.o $(EXE)
