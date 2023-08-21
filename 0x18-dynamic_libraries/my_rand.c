#include <stdio.h>

// Define an array to store the sequence of numbers
static int sequence[] = {9, 8, 10, 24, 75, 9};
static int index = 0;

int my_rand() {
	// Return the next number in the sequence
	int num = sequence[index];

	// Increment the index and wrap around if needed
	index = (index + 1) % (sizeof(sequence) / sizeof(sequence[0]));

	return num;
}
