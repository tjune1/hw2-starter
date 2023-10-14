#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
	int opt;
	bool scramble = false;
	bool unscramble = false;
	while ((opt = getopt(argc, argv, "us")) != -1) {
		switch (opt) {
		case 's':
			scramble = true;
			break;
		case 'u':
			unscramble = true;
			break;
		case '?':
			fprintf(stderr, "unknown option: %c\n", optopt);
			return 1;
		default:
			fprintf(stderr, "unexpcted option: %c\n", opt);
			abort();
		}
	}

	// TODO command line error checking
	if (argc != 4){
		fprintf(stderr, "usage: %s <-s|-u>")
	}
	// This suppresses warnings; TODO remove after you use these variables
	(void) scramble;
	(void) unscramble;

	// file is now in argv[2] and key is in argv[3]
	// TODO FILE* fin = fopen( /* Read from input file */ );
	// TODO Remember to handle errors!

	// TODO do your thing

	// TODO close the file

	return 0;
}
