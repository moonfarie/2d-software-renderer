CFLAGS = -std=c++23
LDFLAGS = -lglut

renderer: *.cpp *.hpp
	g++ $(CFLAGS) -o renderer *.cpp $(LDFLAGS)

.PHONY: test clean

test: renderer
	./renderer

clean:
	rm -f renderer
