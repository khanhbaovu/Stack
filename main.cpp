#include <iostream>

using namespace std;

struct node {
    float data;
    node *next;
};

class Stack {
private:
    node *start;
public:
    Stack();
    void Add(float);
    void Delete();
    void See();
};

Stack::Stack() {
    start = NULL;
}

void Stack::Add(float info) {
    node *p = new node;

    p->data = info;

    if (start == NULL) {
        start = p;
        return;
    }

    p->next = start;

    start = p;
}

void Stack::Delete() {
    node *temp;

    temp = start;

    start = start->next;

    delete temp;
}

void Stack::See() {
    for(node *k = start; k!=NULL; k=k->next) {
        cout<<k->data<<endl;
    }
}

int main()
{
    int m=0;

    Stack stackx;

    while(m>-1) {
        switch(m) {
        case 1:
            float num;
            cout<<"Enter number: ";
            cin>>num;
            stackx.Add(num);
            break;
        case 2:
            stackx.Delete();
            break;
        case 3:
            stackx.See();
            break;
        case 0:
            break;
        }
        cout<<"What do you want?";
        cin>>m;
    }

    return 0;
}
