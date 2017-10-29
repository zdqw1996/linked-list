#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int i;
    char name[128];
    int year;
    struct node *next;

};

struct node *creat()
{
    struct node *newnode = malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        cout<<"erro"<<endl;
        exit(-1);

    }
    else
    {
        cout<<"请输入名字"<<endl;
        cin.getline(newnode->name, 8);
        cout<<"请输入year"<<endl;
        cin>>newnode->year;
    }
    newnode->next = NULL;
    return newnode;

}
void insert(struct node **head, int num)
{
    struct node *tmp = *head;
    while(tmp->next)
    {
        tmp = tmp->next;
        i++;
        if(i == num)
        {
            break;
        }
        struct node *tail = tmp->next;
        if(tail ==NULL)
        {
            tmp->next = creat();
        }
        else
        {
            tmp->next = creat();
            tmp->next->next = tail;

        }

}
void delate(struct **head, int num)
{
    struct node *temp = *head;
    struct node *denode;
    int i = 0;
    while(temp->next)
    {
        denode = temp;
        temp = temp->next;
        i++;
        if(i == num)
        {
            break;

        }
    }
        if(i != num)
        {
            return;

        }
        denode->next = temp->next;
        free(temp);
        temp =NULL;
}
int main(void)
{
    struct node *head = NULL;
    head = creat();

}

