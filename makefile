flags = -g -std=c++11 -Werror -Wall \
	-IState -IComposite -IDecorator -IAbstractFactory

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
	$(OBJDIR)/University.o

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

$(target): $(objects)
	g++ $(flags) -o $(target) $(objects)

all: $(target)

run: $(target)
	./$(target)

clean:
	rm -rf $(OBJDIR) $(target) && clear

mem: $(target)
	valgrind --leak-check=full --log-file=memory_report.txt ./$(target)