INCLUDES=-lpthread $(shell curl-config --libs) $(shell pkg-config --libs ncurses)
OUTPUT_NAME=main
SRC_FOLDER=src
INCLUDE_FOLDER=include
MAIN_FILE=main.c

main:
	gcc $(INCLUDES) -o $(OUTPUT_NAME) -I $(INCLUDE_FOLDER) $(SRC_FOLDER)/$(MAIN_FILE)  
