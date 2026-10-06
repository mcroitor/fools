# Numele executabilului
TARGET = fools

# Compilatorul
CXX = g++

# Fisierele obiect necesare
OBJS = main.o Card.o Renderer.o Listener.o GameEngine.o

# Regula principala de constructie
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Regula pentru a transforma orice .cpp in .o
DEPFLAGS = -MMD -MP
DEPS = $(OBJS:.o=.d)

%.o: %.cpp
	$(CXX) $(DEPFLAGS) -c $< -o $@

-include $(DEPS)

# Curata fisierele generate
clean:
	rm -f *.o *.d $(TARGET) $(TARGET).exe
