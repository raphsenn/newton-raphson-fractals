CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11
LDFLAGS =

SRCS = complex.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = main
CLEAN_FILES = $(EXEC) fractal.ppm $(OBJS)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(CLEAN_FILES)

.PHONY: all clean
