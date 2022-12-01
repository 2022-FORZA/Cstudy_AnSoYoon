#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int Queue[10000] = { 0 };
int Front = 0;
int Rear = 0;


void push(int num)
{
    Queue[Front++] = num;
}

int pop()
{
    if (Rear == Front)
        return -1;
    int tmp = Queue[Rear];
    Queue[Rear++] = 0;
    return tmp;
}

int size()
{
    return Front - Rear;
}

int empty()
{
    if (Front == Rear)
        return 1;
    else
        return 0;
}

int front()
{
    if (Front == Rear)
        return -1;
    else
        return Queue[Rear];
}

int back()
{
    if (Front == Rear)
        return -1;
    else
        return Queue[Front - 1];
}

int main()
{
    int num;
    vector<int> ans;
    char cmd[8] = { 0 };
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%s", cmd);
        if (strcmp(cmd, "push") == 0)
        {
            int integer;
            scanf("%d", &integer);
            push(integer);
        }
        if (strcmp(cmd, "pop") == 0)
            ans.push_back(pop());
        if (strcmp(cmd, "size") == 0)
            ans.push_back(size());
        if (strcmp(cmd, "empty") == 0)
            ans.push_back(empty());
        if (strcmp(cmd, "front") == 0)
            ans.push_back(front());
        if (strcmp(cmd, "back") == 0)
            ans.push_back(back());
    }
    vector<int>::iterator iter;
    for (iter = ans.begin(); iter != ans.end(); iter++)
        printf("%d\n", *iter);
}

