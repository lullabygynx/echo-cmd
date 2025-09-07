#include <stdio.h>
#include <unistd.h>


int main(int argc, char **argv){
	
	for (int i = 1; i < argc; i++){
//		ssize_t written = write(1, argv[i], strlen(argv[1]));
		write(1, argv[i], strlen(argv[1]));
		
		if (i < argc - 1){
			write(1, " ", 1);
		}
	}
	
	write(1, "\n", 1);
	
	return 0;
}