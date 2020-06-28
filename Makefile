CC = c++
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:%.cpp=%.o)
FLAGS = -c -Wall
EXE = mini_RPG.exe

link: $(OBJS)
	$(CC) $(OBJS) -o $(EXE)

%.o: %.cpp %.h
	$(CC) $(FLAGS) $*.cpp

clean:
	rm *.o $(EXE)
