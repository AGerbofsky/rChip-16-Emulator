

INCLUDES = -I ./include

FLAGS = -g

OBJECTS = ./build/main.o ./memory.o ./build/control.o ./build/cpu.o ./build/vdp.o ./build/opcode.o

all: ${OBJECTS}
	gcc ${FLAGS} ${INCLUDES} ./src/main.c ${OBJECTS} -l ./lib -lSDL2 -o rc16

./build/main.o:src/main.cc
	g++ ${FLAGS} ${INCLUDES} ./src/main.cc -c -o ./build/main.o

./build/memory.o:src/memory.cc
	g++ ${FLAGS} ${INLCUDES} ./src/memory.cc -c -o ./build/memory.o

./build/control.o:src/control.cc
	g++ ${FLAGS} ${INCLUDES} ./src/control.cc -c -o ./build/control.o

./build/cpu.o:src/cpu.cc
	g++ ${FLAGS} ${INCLUDES} ./src/cpu.cc -c -o ./build/cpu.o

./build/vdp.o:src/vdp.cc
	g++ ${FLAGS} ${INCLUDES} ./src/vdp.cc -c -o ./build/vdp.o

./build/opcode.o:src/opcode.cc
	g++ ${FLAGS} ${INCLUDES} ./src/opcode.cc -c -o ./build/opcode.o

clean:
	del build\*
