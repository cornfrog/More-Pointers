all:
	@gcc pointers.c -o pointers
	@mv pointers bin
	@echo MAKE Success: use \'make run\' to run

run:
	@./bin/pointers

clean:
	@rm bin/pointers
	@echo MAKE CLEAN Success: use \'make\' to run
