CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp


TARGET = megaphone

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)