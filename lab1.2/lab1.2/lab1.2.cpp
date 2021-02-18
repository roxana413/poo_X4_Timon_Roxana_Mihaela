// lab1.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <stdlib.h>
#include <string>

int main()
{

	FILE* fp = fopen("in.txt", "r");
	if (fp == NULL) {
		perror("Unable to open file!");
		exit(1);
	}
	int v[10];
	char chunk[128] = { 0 };
	int sum = 0, nr = 0;
	while (fgets(chunk, sizeof(chunk), fp )!= NULL) {
		
		//printf("\n Lungime string este %zu \n ", strlen(chunk));
		printf("%s\n", chunk);
		int y = strlen(chunk);
		


		
			for (int i = 0; i < y-1; i++)
			{
				int c;
				c = chunk[i] - 48;
				//printf("%d ", c);
				
				nr = nr * 10 + c;


			}
		
			sum = sum + nr;
			nr = 0;
		}
	
	printf("Suma string-urilor din fisierul de input este = %d",sum);
	fflush(stdout);

	fclose(fp);


}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
