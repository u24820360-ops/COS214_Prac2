flags = -g -std=c++11 -Werror -Wall \
	-IState -IComposite -IDecorator -IAbstractFactory -IStrategy

target = wayfarer
OBJDIR = build

objects = \
	$(OBJDIR)/main.o \
	$(OBJDIR)/WorldManager.o \
	$(OBJDIR)/Traveller.o \
	$(OBJDIR)/MovementState.o \
	$(OBJDIR)/Walk.o \
	$(OBJDIR)/Dash.o \
	$(OBJDIR)/Teleport.o \
	$(OBJDIR)/Swim.o \
	$(OBJDIR)/Map.o \
	$(OBJDIR)/Location.o \
	$(OBJDIR)/Region.o \
	$(OBJDIR)/MapDecorator.o \
	$(OBJDIR)/FuelStation.o \
	$(OBJDIR)/TouristAttraction.o \
	$(OBJDIR)/University.o \
	$(OBJDIR)/ForestBuilder.o \
	$(OBJDIR)/ForestBiome.o \
	$(OBJDIR)/ForestNpc.o \
	$(OBJDIR)/ForestObstacle.o \
	$(OBJDIR)/CityBuilder.o \
	$(OBJDIR)/CityBiome.o \
	$(OBJDIR)/CityNpc.o \
	$(OBJDIR)/CityObstacle.o \
	$(OBJDIR)/DesertBuilder.o \
	$(OBJDIR)/DesertBiome.o \
	$(OBJDIR)/DesertNpc.o \
	$(OBJDIR)/DesertObstacle.o \
	$(OBJDIR)/OceanBuilder.o \
	$(OBJDIR)/OceanBiome.o \
	$(OBJDIR)/OceanNpc.o \
	$(OBJDIR)/OceanObstacle.o \
	$(OBJDIR)/NetherBuilder.o \
	$(OBJDIR)/NetherBiome.o \
	$(OBJDIR)/NetherNpc.o \
	$(OBJDIR)/NetherObstacle.o\
	$(OBJDIR)/RouteContext.o \
	$(OBJDIR)/Fastest.o \
	$(OBJDIR)/Shortest.o \
	$(OBJDIR)/Safest.o

$(OBJDIR):
	mkdir -p $(OBJDIR)

# --- root ---
$(OBJDIR)/main.o: main.cpp | $(OBJDIR)
	g++ $(flags) -c main.cpp -o $@

$(OBJDIR)/WorldManager.o: WorldManager.cpp WorldManager.h | $(OBJDIR)
	g++ $(flags) -c WorldManager.cpp -o $@

# --- State ---
$(OBJDIR)/Traveller.o: State/Traveller.cpp State/Traveller.h | $(OBJDIR)
	g++ $(flags) -c State/Traveller.cpp -o $@

$(OBJDIR)/MovementState.o: State/MovementState.cpp State/MovementState.h | $(OBJDIR)
	g++ $(flags) -c State/MovementState.cpp -o $@

$(OBJDIR)/Walk.o: State/Walk.cpp State/Walk.h | $(OBJDIR)
	g++ $(flags) -c State/Walk.cpp -o $@

$(OBJDIR)/Dash.o: State/Dash.cpp State/Dash.h | $(OBJDIR)
	g++ $(flags) -c State/Dash.cpp -o $@

$(OBJDIR)/Teleport.o: State/Teleport.cpp State/Teleport.h | $(OBJDIR)
	g++ $(flags) -c State/Teleport.cpp -o $@

$(OBJDIR)/Swim.o: State/Swim.cpp State/Swim.h | $(OBJDIR)
	g++ $(flags) -c State/Swim.cpp -o $@

# --- Composite ---
$(OBJDIR)/Map.o: Composite/Map.cpp Composite/Map.h | $(OBJDIR)
	g++ $(flags) -c Composite/Map.cpp -o $@

$(OBJDIR)/Location.o: Composite/Location.cpp Composite/Location.h | $(OBJDIR)
	g++ $(flags) -c Composite/Location.cpp -o $@

$(OBJDIR)/Region.o: Composite/Region.cpp Composite/Region.h | $(OBJDIR)
	g++ $(flags) -c Composite/Region.cpp -o $@

# --- Decorator ---
$(OBJDIR)/MapDecorator.o: Decorator/MapDecorator.cpp Decorator/MapDecorator.h | $(OBJDIR)
	g++ $(flags) -c Decorator/MapDecorator.cpp -o $@

$(OBJDIR)/FuelStation.o: Decorator/FuelStation.cpp Decorator/FuelStation.h | $(OBJDIR)
	g++ $(flags) -c Decorator/FuelStation.cpp -o $@

$(OBJDIR)/TouristAttraction.o: Decorator/TouristAttraction.cpp Decorator/TouristAttraction.h | $(OBJDIR)
	g++ $(flags) -c Decorator/TouristAttraction.cpp -o $@

$(OBJDIR)/University.o: Decorator/University.cpp Decorator/University.h | $(OBJDIR)
	g++ $(flags) -c Decorator/University.cpp -o $@

# --- Abstract Factory ---
$(OBJDIR)/ForestBuilder.o: AbstractFactory/ForestBuilder.cpp AbstractFactory/ForestBuilder.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/ForestBuilder.cpp -o $@

$(OBJDIR)/ForestBiome.o: AbstractFactory/ForestBiome.cpp AbstractFactory/ForestBiome.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/ForestBiome.cpp -o $@

$(OBJDIR)/ForestNpc.o: AbstractFactory/ForestNpc.cpp AbstractFactory/ForestNpc.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/ForestNpc.cpp -o $@

$(OBJDIR)/ForestObstacle.o: AbstractFactory/ForestObstacle.cpp AbstractFactory/ForestObstacle.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/ForestObstacle.cpp -o $@

$(OBJDIR)/CityBuilder.o: AbstractFactory/CityBuilder.cpp AbstractFactory/CityBuilder.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/CityBuilder.cpp -o $@

$(OBJDIR)/CityBiome.o: AbstractFactory/CityBiome.cpp AbstractFactory/CityBiome.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/CityBiome.cpp -o $@

$(OBJDIR)/CityNpc.o: AbstractFactory/CityNpc.cpp AbstractFactory/CityNpc.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/CityNpc.cpp -o $@

$(OBJDIR)/CityObstacle.o: AbstractFactory/CityObstacle.cpp AbstractFactory/CityObstacle.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/CityObstacle.cpp -o $@

$(OBJDIR)/DesertBuilder.o: AbstractFactory/DesertBuilder.cpp AbstractFactory/DesertBuilder.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/DesertBuilder.cpp -o $@

$(OBJDIR)/DesertBiome.o: AbstractFactory/DesertBiome.cpp AbstractFactory/DesertBiome.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/DesertBiome.cpp -o $@

$(OBJDIR)/DesertNpc.o: AbstractFactory/DesertNpc.cpp AbstractFactory/DesertNpc.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/DesertNpc.cpp -o $@

$(OBJDIR)/DesertObstacle.o: AbstractFactory/DesertObstacle.cpp AbstractFactory/DesertObstacle.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/DesertObstacle.cpp -o $@

$(OBJDIR)/OceanBuilder.o: AbstractFactory/OceanBuilder.cpp AbstractFactory/OceanBuilder.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/OceanBuilder.cpp -o $@

$(OBJDIR)/OceanBiome.o: AbstractFactory/OceanBiome.cpp AbstractFactory/OceanBiome.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/OceanBiome.cpp -o $@

$(OBJDIR)/OceanNpc.o: AbstractFactory/OceanNpc.cpp AbstractFactory/OceanNpc.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/OceanNpc.cpp -o $@

$(OBJDIR)/OceanObstacle.o: AbstractFactory/OceanObstacle.cpp AbstractFactory/OceanObstacle.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/OceanObstacle.cpp -o $@

$(OBJDIR)/NetherBuilder.o: AbstractFactory/NetherBuilder.cpp AbstractFactory/NetherBuilder.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/NetherBuilder.cpp -o $@

$(OBJDIR)/NetherBiome.o: AbstractFactory/NetherBiome.cpp AbstractFactory/NetherBiome.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/NetherBiome.cpp -o $@

$(OBJDIR)/NetherNpc.o: AbstractFactory/NetherNpc.cpp AbstractFactory/NetherNpc.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/NetherNpc.cpp -o $@

$(OBJDIR)/NetherObstacle.o: AbstractFactory/NetherObstacle.cpp AbstractFactory/NetherObstacle.h | $(OBJDIR)
	g++ $(flags) -c AbstractFactory/NetherObstacle.cpp -o $@

# --- Strategy ---
$(OBJDIR)/RouteContext.o: Strategy/RouteContext.cpp Strategy/RouteContext.h | $(OBJDIR)
	g++ $(flags) -c Strategy/RouteContext.cpp -o $@
$(OBJDIR)/Fastest.o: Strategy/Fastest.cpp Strategy/Fastest.h | $(OBJDIR)
	g++ $(flags) -c Strategy/Fastest.cpp -o $@
$(OBJDIR)/Shortest.o: Strategy/Shortest.cpp Strategy/Shortest.h | $(OBJDIR)
	g++ $(flags) -c Strategy/Shortest.cpp -o $@
$(OBJDIR)/Safest.o: Strategy/Safest.cpp Strategy/Safest.h | $(OBJDIR)
	g++ $(flags) -c Strategy/Safest.cpp -o $@

$(target): $(objects)
	g++ $(flags) -o $(target) $(objects)

all: $(target)

run: $(target)
	./$(target)

clean:
	rm -rf $(OBJDIR) $(target) && clear

mem: $(target)
	valgrind --leak-check=full --show-leak-kinds=all --log-file=memory_report.txt ./$(target)