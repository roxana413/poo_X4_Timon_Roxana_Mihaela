// lab1.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <fstream>


int main()
{
    char input_string[100];
    char aux[100];
    char cuv[100][100];
    int n = 0;
    scanf("%[^\n]s", &input_string);
   
    char* token;
    
    token = strtok(input_string, " ");
    while (token)
    {
       // printf("%s\n", token);
       // printf("%d ", strlen(token));
        strcpy(cuv[n], token);
        n++;
        token = strtok(NULL, " ");
    }
    int max;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j <= n - 1; j++)
            if (strlen(cuv[i]) < strlen(cuv[j]))
            {
                strcpy(aux, cuv[i]);
                strcpy(cuv[i], cuv[j]);
                strcpy(cuv[j], aux);
            }
            else 
                if (strlen(cuv[i]) == strlen(cuv[j]))
                {
                    if (strcmp(cuv[i], cuv[j]) > 0)
                    {
                        strcpy(aux, cuv[i]);
                        strcpy(cuv[i], cuv[j]);
                        strcpy(cuv[j], aux);

                    }
                }

    }

    for (int i = 0; i < n ; i++)
    {
        printf("%s\n", cuv[i]);
    }

    return 0;
}

