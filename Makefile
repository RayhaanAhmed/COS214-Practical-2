CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = wayfarer

SRCS = main.cpp \
       Traveller.cpp TravelMode.cpp FootMode.cpp CarMode.cpp BoatMode.cpp AirMode.cpp \
       Trip.cpp RouteStrategy.cpp ShortestRoute.cpp FastestRoute.cpp ScenicRoute.cpp SafestRoute.cpp \
       Place.cpp Placedecorator.cpp \
       BiomeProducts.cpp BiomeFactory.cpp

OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)