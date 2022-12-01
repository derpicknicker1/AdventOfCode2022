/*
PLACE INSTRUCTIONS HERE
*/

#include "advent.h"

static char input[30];


/*##########################
# Get input data from file #
##########################*/
static int getInput(char *f) {

	FILE *file=fopen(f, "r");
	if (file == NULL) {
		printf("ERR: CAN NOT OPEN '%s'\n\n", f);
		return false;
	}
	
	// This is a example for reading ONE line from file.
	// Change it to the needed method (multiline, nodes, etc.)
	if (fscanf(file,"%[^\n]",input) ) {
		fclose(file);
		return true;
	}
	else {
		fclose(file);
		return false;
	}

}


/*##########################
# Function to solve part A #
##########################*/
void get0a(char * f) {

	if (!getInput(f))
		return;

	/* Process data for part A here */

	printf("0a: %s\n", input);

}


/*##########################
# Function to solve part B #
##########################*/
void get0b(char *f) {

	if (!getInput(f))
		return;

	/* Process data for part B here */	
	
	printf("0b: %s\n\n", input);

}