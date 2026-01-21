CFLAGS = -std=c++23 -Wall -Wextra -Wpedantic
LDFLAGS = -lglut -lGL

renderer: *.cpp *.hpp
	g++ $(CFLAGS) -o renderer *.cpp $(LDFLAGS)

.PHONY: test clean

test: renderer
	./renderer

clean:
	rm -f renderer
