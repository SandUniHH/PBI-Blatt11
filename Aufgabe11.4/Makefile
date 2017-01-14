# Bocher Diedrich Sandmeier
#
# compile command: make
# test the program with several inputs: make test

CC=gcc # compiler to be used

bitvector_converter.x: bitvector_converter.c
	$(CC) -o bitvector_converter.x bitvector_converter.c -Wall -Werror

test:
	./bitvector_converter.x 0
	
	./bitvector_converter.x 10
	
	./bitvector_converter.x 123456
	
	./bitvector_converter.x 429496729