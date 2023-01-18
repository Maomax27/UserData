#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//structure for user information
typedef struct User
{
    char Fname[10];
    char Lname[10];
    int age;
    struct User* next;
    struct User* prev;
}User;
User* createNode(char fname[10],char lname[10],int agel);
void createUser(User* head);
void createList(int num);

void start()
{
    

}

User* createNode(char fname[10],char lname[10],int agel)
{
    User *newkid = (User*)malloc(sizeof(User));

    if(newkid !=NULL)
    {
    strcpy(newkid->Fname,fname);
    strcpy(newkid->Lname,lname);
    newkid->age=agel;
    }
    else
    {
        printf("\n----Memmory allocation failed----");
    }

    return newkid;
}

void createUser(User* head)
{
    User* head;
    char fname[50];
    char lname[50];
    int age=0;
    printf("\n\nPlease insert student information:\n");
    printf("\nFirst Name: ");
    scanf("%s", fname);
    printf("\nLast Name: ");
    scanf("%s", lname);
    printf("\nAge: ");
    scanf("%d", &age);

    head = createNode(fname,lname,age);
}

void createList(int num)
{
    
}