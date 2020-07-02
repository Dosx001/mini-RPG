CXX = c++
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:%.cpp=%.o)
FLAGS = -c -Wall
EXE = mini_RPG.exe
PY = Player.cpp Player.h 
INVT = Inventory.cpp Inventory.h
MU = Menu.cpp Menu.h
TRL = Trials.cpp Trials.h 
CLS = Classes.cpp Classes.h

link: $(OBJS)
	$(CXX) $(OBJS) -o $(EXE)

main.o: main.cpp $(PY) $(INVT) $(MU)
	$(CXX) $(FLAGS) main.cpp

Player.o: $(PY) $(INVT) $(TRL) $(CLS) 
	$(CXX) $(FLAGS) Player.cpp

Menu.o: $(MU) $(PY) $(INVT)
	$(CXX) $(FLAGS) Menu.cpp

Precompiled Header: pch.h
	$(CXX) pch.h

%.o: %.cpp %.h
	$(CXX) $(FLAGS) $*.cpp

clean:
	rm *.o $(EXE)
