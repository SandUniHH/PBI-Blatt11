# Bocher Diedrich Sandmeier
#
# compile command: make
# create file with output for 1 <= k <= 20 program: make 20

CC=gcc # compiler to be used

wuerfel.x: wuerfel.c
	$(CC) -o wuerfel.x wuerfel.c -Wall -Werror
	
20:
	./wuerfel.x 20 | cat > bis_20_wuerfel.txt