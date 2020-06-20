-include common.mk

#all: library.cpp main.cpp
#In this case:
#$@ evaluates to all
#$< evaluates to library.cpp
#$^ evaluates to library.cpp main.cpp

CC_INCLUDE = -I./
PROGRAM_NAME = factoryCreationalPattern
SRC_FILES := $(wildcard *.cpp)
OBJ_FILES := $(patsubst %.cpp,%.o,$(SRC_FILES))

all: $(PROGRAM_NAME)

$(PROGRAM_NAME): $(OBJ_FILES) 
	$(CC) $(CFLAGS) $(CC_INCLUDE) $(DEBUG) $(TESTFLAG) $^  -o $@
%.o: %.cpp
	$(CC) $(CFLAGS) $(CC_INCLUDE) -o $@ -c $<
clean:
	rm -f *.o $(PROGRAM_NAME)
