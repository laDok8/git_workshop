#include<stdio.h>
#include<string.h>


int main(int argc, char **argv){
	FILE *f = fopen(argv[1],"r");

	if(argc==3){
		return 1;
	}

	if(strcmp("-l", argv[1] == 0){
		int c, i=0;
		while((c = fgetc(f)) != EOF){
			if(c == '\n'){		
				i++;
			}
		}
		printf("%d\n", i);
	}

	if(strcmp("-c", argv[1]) == 0){
		int c,i=0;
		while((c = fgetc(f)) != EOF){
			i++;
		}
		printf("%d\n", i);
	}
	return 0;

}
