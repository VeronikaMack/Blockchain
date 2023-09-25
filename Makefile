
CXX = g++
CXXFLAGS = -std=c++11 -Wall

TARGET = program

SRCS = V1.0.cpp funkcijos.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = funkcijos.h mylib.h

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
