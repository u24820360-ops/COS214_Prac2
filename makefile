flags= -g -std=c++11 -Werror -Wall
target=wayfarer
objects=main.o Traveller.o MovementState.o Dash.o Teleport.o Walk.o \
	Location.o Region.o Map.o \
	MapDecorator.o FuelStation.o TouristAttraction.o University.o

Walk.o : Walk.cpp Walk.h Traveller.h MovementState.h
	g++ $(flags) -c Walk.cpp

Dash.o : Dash.cpp Dash.h Traveller.h MovementState.h Teleport.h
	g++ $(flags) -c Dash.cpp

Teleport.o : Teleport.cpp Teleport.h Dash.h Traveller.h MovementState.h
	g++ $(flags) -c Teleport.cpp

Traveller.o : Traveller.cpp Traveller.h MovementState.h
	g++ $(flags) -c Traveller.cpp

MovementState.o : MovementState.cpp MovementState.h Traveller.h
	g++ $(flags) -c MovementState.cpp

Map.o : Map.cpp Map.h
	g++ $(flags) -c Map.cpp

Location.o : Location.cpp Location.h Map.h
	g++ $(flags) -c Location.cpp

Region.o : Region.cpp Region.h Map.h
	g++ $(flags) -c Region.cpp

MapDecorator.o : MapDecorator.cpp MapDecorator.h Map.h
	g++ $(flags) -c MapDecorator.cpp

FuelStation.o : FuelStation.cpp FuelStation.h MapDecorator.h Map.h
	g++ $(flags) -c FuelStation.cpp

TouristAttraction.o : TouristAttraction.cpp TouristAttraction.h MapDecorator.h Map.h
	g++ $(flags) -c TouristAttraction.cpp

University.o : University.cpp University.h MapDecorator.h Map.h
	g++ $(flags) -c University.cpp

main.o : main.cpp Traveller.h Location.h Region.h Map.h \
	MapDecorator.h FuelStation.h TouristAttraction.h University.h
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