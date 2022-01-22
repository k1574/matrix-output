#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int width, dummy;
int colw = 3,
	spacew = 1;

char chars[]="abcdef0123456789";

void
loop(void)
{
	int i, j, k, n;
	char c[5];
	c[4] = 0 ;
	n = width/(colw + spacew) ;
	for(i = 0 ; i<n ; ++i){
		for(j=0 ; j<colw ; ++j ){
			printf("%c", chars[rand() % (sizeof(chars)-1)]);
		}
		for(j=0 ; j<spacew ; ++j){
			printf(" ");
		}
	}
	printf("\n");
}

int
main(int argc, char *argv[])
{
	width = 80 ;
	srand(time(0));
	while(1){
		//usleep(500*1000);
		loop();
	}
	return 0 ;
}
