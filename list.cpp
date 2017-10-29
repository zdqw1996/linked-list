#include <iostream>
using namespace std;

typedef struct list_node
{
    struct list_node *next;
    char name[128];
    int year;
    int nuber;
    int num;




}list_node;//节点的内容

typedef struct list
{
    list_node * list_head_node;//头结点
    list_node * list_tail_node;//末尾节点

}list;

typedef struct data
{
    list_node * data1;
    list_node * data2;
}data;//开辟结点用到的变量

list * list_init(int n)
{
    list * tmp_list = (list *)malloc(sizeof(list));
    if(tmp_list==NULL)
    {
        cout<<"节点开闭失败"<<endl;
        exit(-1);
    }//为了严谨，判断一下
    tmp_list->list_head = NULL;
    tmp_list->list_tail = NULL;
    int i;
    for(i=0; i < n; i++)
    {
        list_node * new_next =(list_node *)malloc(sizeof(list_node));
        if(new_next = NULL)
        {
            cout<<"节点创建失败"<<endl;
            exit(-1);
        } //为了严谨判断一下
        new_next->num = i+1;
        cout<<"请输入学生的姓名"<<endl;
        cin>>new_next->name；
        cout<<"请输入学生的年龄"<<endl;
        cin>>new_next->year;
        cout<<"请输入学生的姓名"<<endl;
        cin>>new_next->nuber；

        new_next->next = NULL;//一个节点赋值完成
        if(tmp_list->list_head =NULL)//如果后面没有节点了，则将头节点和末尾节点连接
        {
            tmp_list->list_head = new_next;
            tmp_list->list_tail = new_next;
        }
        else//如果还有则指向下一个
        {
            
            tmp_list->list_tail->next = new_next;//连接前后节点
            tmp_list->list_tail = new_next;//指向末尾节点
        }
        new_next = NULL;//清空，指向新节点
    }
    return tmp_list;//返回指针
} 

void list_print(list * tmp_list)
{
    list_node * temp_list = tmp_list->list_head;//将头节点指针给临时指针
    while(temp_list!=NULL)
    {
        cout<<"name  "<<temp_list->name<<endl;
        cout<<"year  "<<temp_list->num<<endl;
        cout<<"nuber  "<<temp_list->nuber<<endl;
    }

}
void list_free(list * tmp_list)
{
    list_node * temp_list = tmp_list->head;
    list_node * free_list = NULL;
    while(temp_list!=NULL)//直到尾节点为止
    {
        free_list->next = temp_list;
        temp_list = temp_list->next;
        list_free(free_list);
        free_list = NULL;
    }
    list_free(tmp_list);
    tmp_list = NULL;

}
void list_insert(list * tmp_list, int num)
{
    list_node * new_list = (list_node *)malloc(sizeof(list_node));
    if(new_list==NULL)
    {
        cout<<"falau"<<endl;
        exit(-1);
    }
    new_list->num = mun;
    cout<<"请输入学生的姓名"<<endl;
    cin>>new_next->name；
    cout<<"请输入学生的年龄"<<endl;
    cin>>new_next->year;
    cout<<"请输入学生的姓名"<<endl;
    cin>>new_next->nuber；
    new_list->next=NULL;
    new_list->next=tmp_list->head;
    tmp_list->list_head = new_list;
    new_list = NULL;


}

int main(int argc, char const *argv[])
{
    list* tmp_list = list_int(2);
    


}