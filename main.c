#include "advent.h"

#define execute(s) 	printf("Solving %d...\n", s); 			\
					fflush(stdout); 						\
					strcpy(path,folder);            		\
					strcat(path, "/" #s ".txt");    		\
					clock_gettime(CLOCK_MONOTONIC, &begin); \
					get##s##a(path); 	            		\
					get##s##b(path);	            		\
					clock_gettime(CLOCK_MONOTONIC, &end); 	\
					showTime(s);


struct timespec begin, end;
double timeAll = 0;
char folder[10], path[20];
bool sample = false, skip = false;

void showTime(int i) {
	double time = (end.tv_nsec-begin.tv_nsec)/1000000000.0+(end.tv_sec-begin.tv_sec);
	timeAll += time;
	printf("Runtime %d: %f\n_______________________________\n\n", i, time);
}					

int main(int argc, char* argv[]) {
	for (int i = 1; i < argc; i++) {
		if (strcmp(argv[i],"sample") == 0) sample = true;
		if (strcmp(argv[i],"skip") == 0) skip = true;
	}

	strcpy(folder,"input");
	if (sample)
		strcpy(folder,"samples");
		
	
	printf("\n\n#################\n### Solutions ###\n#################\n\n");
	
	// execute(0) // EXAMPLE
	/*execute(1)
	execute(2)
	execute(3)
	execute(4)
	execute(5)
	execute(6)
	execute(7)
	execute(8)
	execute(9)
	execute(10)
	execute(11)
	execute(12)
	execute(13)
	execute(14)
	execute(15)
	execute(16)
	execute(17)
	execute(18)
	execute(19)
	execute(20)
	execute(21)
	execute(22)
	execute(23)*/
	execute(24)
	execute(25)
	
	printf("Overall Runtime: %f\n_______________________________\n", timeAll);
	#if defined(_WIN32) || defined(_WIN64)
	if (!skip)
		system("Pause");
	#endif

	return 0;
}
