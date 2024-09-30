CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp myReplace.cpp
HEADERS = myReplace.hpp

TARGET = replace

all: $(TARGET)

$(TARGET): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)