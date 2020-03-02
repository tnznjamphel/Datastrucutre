#include<iostream>
using namespace std;

class Node{
    int data;
    Node *next;

    public:
    Node(int d){
        data=d;
    }

friend class Cllist;
};
class Cllist{

private:
    Node *cursor;

public:
    Cllist();
    //  ̃Cllist();
    bool empty();
    int front(); 
    int back(); 
    void advance();
    void add(int e);
    void remove(){
        Node *old= cursor->next;
        if(old==cursor)
            cursor=NULL;
        else
            cursor->next=old->next;
        delete old;
        
    }
};
Cllist::Cllist(){
    cursor=NULL;
}
/*Cllist:: ̃Cllist()
{
    while(!empty())
        remove();    
}
*/
bool Cllist::empty(){
    return cursor==NULL;
}
void Cllist::add(int d){
    Node *node= new Node(d);
    if(cursor==NULL){
        node->next=node;
        cursor=node;
    }
    else{
        node->next=cursor->next;
        cursor->next=node;
    }
}
//advance the cursor to the next element in the list
void Cllist::advance(){
    cursor=cursor->next;
}

//this function returns the element at the cursor
int Cllist::back(){      
    return cursor->data;
}
int Cllist::front(){
    return cursor->next->data;
}

int main(){
    Cllist list;
    list.add(3);
    list.add(2);
    list.add(1);
    cout<<"\n front of the list : ";
    int f=list.front();
    cout<<f;
    cout<<"\n back of the list : ";
    int b=list.back();
    cout<<b;
    cout<<"\n after advance() the change in front : ";
    list.advance();
    f=list.front();
    cout<<f;
    cout<<"\n after remove() the change in front : ";
    list.remove();
    f=list.front();
    cout<<f;
    return 0;
}