output: src/main.cpp build renderer keyboard
	g++ -c src/main.cpp -o objects/main.o
	g++ objects/main.o objects/Renderer.o objects/Keyboard.o -lsfml-graphics -lsfml-window -lsfml-system -o build/output

renderer: objects
	g++ -c src/Renderer.cpp -o objects/Renderer.o

keyboard: objects
	g++ -c src/Keyboard.cpp -o objects/Keyboard.o

build:
	mkdir build

objects:
	mkdir objects