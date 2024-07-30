# Define compiler and flags
CXX = g++
CXXFLAGS = -I/opt/homebrew/Cellar/sdl2/2.30.5/include/SDL2 -I/opt/homebrew/Cellar/sdl2_image/2.8.2_1/include/SDL2 -MMD -MP
LDFLAGS = -L/opt/homebrew/Cellar/sdl2/2.30.5/lib -L/opt/homebrew/Cellar/sdl2_image/2.8.2_1/lib -lSDL2 -lSDL2_image

# Define the target executable and the source files
TARGET = pixeld
SRC = drawPixel.cpp RenderWindow.cpp
OBJ = $(SRC:.cpp=.o)
DEP = $(OBJ:.o=.d)

# Default rule
all: $(TARGET)

# Rule to build the target
$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(LDFLAGS)

# Rule to build object files
%.o: %.cpp
	$(CXX) -c $< -o $@ $(CXXFLAGS)

# Include dependency files
-include $(DEP)

# Clean rule
clean:
	rm -f $(TARGET) $(OBJ) $(DEP)
