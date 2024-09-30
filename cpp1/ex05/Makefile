CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Harl.cpp
HEADERS = Harl.hpp

TARGET = Harl

all: $(TARGET)

$(TARGET): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)