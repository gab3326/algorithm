all: algorithm

algorithm: bubble.c
	gcc -o bubblesort bubble.c

clean:
	rm -rf bubblesort
