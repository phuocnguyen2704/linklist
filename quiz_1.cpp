#include<iostream>
#include<vector>
using namespace std;
    class LLNode {
        public:
            int val;
            LLNode* next;
            LLNode();
            LLNode(int val, LLNode* next);
    };
LLNode * new_node(int x)
{
    LLNode * temp=new LLNode();
    temp->val=x;
    temp->next=nullptr;
    return temp;    
}
LLNode* addLinkedList(LLNode* l0, LLNode* l1) {
    LLNode * resuilt;   // printer point head linklist
    LLNode * current;   // printer point node current 
    LLNode * Node;      // Node linklist
    int sum,carry=0;
    while (l0 && l1)
    {
        int sum=l0->val+l1->val+ carry;
        if (sum > 10)
        {
            carry=1;
            sum=sum%10;
        }
        else carry=0;
        Node=new_node(sum);
        if (resuilt==nullptr) resuilt=current=Node;
        else 
        {
            current->next=Node;
            current=Node;
        }
        if (l0)     l0=l0->next;
        if(l1)    l1=l1->next;
    }
    if (carry >0)
    {
        current->next=new_node(carry);
    }
    return resuilt;
}