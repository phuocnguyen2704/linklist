#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *pnext;
    Node (int n)
    {
        this->data=n;
        this->pnext=nullptr;
    }

};
class link_list 
{
    public:
    Node * head;
    link_list()
    {
        this->head=nullptr;
    }
    void insert(int data)
    {
        Node *newNode= new Node (data);
        if (head==nullptr)
        {
            this->head=newNode;
        }
        else 
        {
            Node *p=this->head;
            while (p->pnext!=nullptr)
            {
                p=p->pnext;
            }
            p->pnext=newNode;
        }
    }
    void display()
    {

        while (this->head!=nullptr)
        {
            cout<<head->data<< "   ";
            head=head->pnext;
        }
    }

};
int main ()
{
    link_list L;
    L.insert(10);
    L.insert(100);
    L.insert(1000);
    L.insert(5);
    L.display();
}
