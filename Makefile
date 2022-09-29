output: src/main.cpp build renderer
	g++ -c src/main.cpp -o objects/main.o
	g++ objects/main.o objects/Renderer.o -lsfml-graphics -lsfml-window -lsfml-system -o build/output

renderer: objects
	g++ -c src/Renderer.cpp -o objects/Renderer.o

build:
	mkdir build

objects:
	mkdir objects