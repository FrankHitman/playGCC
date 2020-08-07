.PHONY: clean
CC = arm-linux-gnueabihf-gcc

main.exe:add.o div.o sub.o
	$(CC) sources/main.c $^ -o $@
add.o:sources/add.c
	$(CC) -c $^ -o $@
div.o:sources/div.c
	$(CC) -c $^ -o $@
sub.o:sources/sub.c
	$(CC) -c $^ -o $@
clean:
	@rm -rf *.o