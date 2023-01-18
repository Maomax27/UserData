#include "function.h"
/*
Author: Mauricio Garzon Llanos
Description: This program will take in user info and store it in a linked list
*/
int main()
{
    int option=0;
    while(1)
    {
        printf("WELCOME : PLEASE SELECT AN OPTION\n");
        printf("1. New List\n");
        printf("2. Exit\n");
        scanf("%d", &option);
        switch(option)
        {
            case 1:
                printf("\nNew List was selected :)\n");
                start();//starts program with functions from function.h
                return 0;
                break;
            case 2:
                printf("\n--Program ended--\n");
                return 0;
                break;
            default: 
            printf("\nPlease select a valid option\n");
                return 0;
                break;
        }
        option=0;
    }

    return 0;
}