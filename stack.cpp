#include<iostream>
#include<string.h>
using namespace std;
    class Node
    {
        public:
        Node *pnext;
        string data;
        Node (string data)
        {
            this->data=data;
            this->pnext=nullptr;
        }
    };
class stack
{
    public:
    Node *ptop;
    stack()
    {
        this->ptop=nullptr;
    }
    void push(string data)
    {
        Node * newnode = new Node(data);
        if (this ->ptop==nullptr)
        {
            ptop=newnode;
        }
        else 
        {
            Node *p = this->ptop;
            while (p->pnext!=nullptr)
            {
                p=p->pnext;
            }
            p->pnext=newnode;
        }
    }
    string pop()
    {
        Node *p=this->ptop;
        while ((p->pnext)->pnext!=nullptr)
        {
            p=p->pnext;
        }
        return p->pnext->data;
        delete p->pnext
    }
    void display()
    {
        Node*p=this->ptop;
        while (p!=nullptr)
        {
            cout<<p->data<<"    ";
            p=p->pnext;
        }
    }
};
int main ()
{
    stack L;
    L.push("abc");
    L.push("def");
    L.push("ghi");
    L.push("klm");
    cout<< L.pop()<<endl;
    L.display();
}