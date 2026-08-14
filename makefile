flags= -g -std=c++11 -Werror -Wall
target=wayfarer
objects=main.o Traveller.o MovementState.o Dash.o Teleport.o Walk.o Location.o Region.o Map.o

Walk.o : Walk.cpp Traveller.h MovementState.h
	g++ $(flags) -c Walk.cpp

Dash.o : Dash.cpp Dash.h Traveller.h MovementState.h Teleport.h 
	g++ $(flags) -c Dash.cpp

Teleport.o : Teleport.cpp Dash.h Traveller.h MovementState.h Teleport.h 
	g++ $(flags) -c Teleport.cpp

Traveller.o : MovementState.h Traveller.cpp Traveller.h
	g++ $(flags) -c Traveller.cpp

MovementState.o : MovementState.h MovementState.cpp Traveller.h
	g++ $(flags) -c MovementState.cpp 

main.o : Traveller.h main.cpp Location.h Region.h Map.h
	g++ $(flags) -c main.cpp

$(target) : $(objects)
	g++ $(flags) -o $(target) $(objects)

all : $(target)

run : $(target)
	./$(target)





clean : 
	rm -f *.o $(target) && clear

mem : $(target)
	valgrind --leak-check=full --log-file=memory_report.txt ./$(target)
