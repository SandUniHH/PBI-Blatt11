# Bocher Diedrich Sandmeier
#
# compile command: make
# check for differences: make diff

CC=gcc # compiler to be used

ascii.x: ascii.c
	$(CC) -o ascii.x ascii.c -Wall -Werror

diff:
	./ascii.x | diff - ascii.output