
#include<iostream>
using namespace std;

int stack[100];
int top=-1;
int size;

int main()
{
    int ch,x;

    cout<<"Enter size of stack: ";
    cin>>size;

    do{
        cout<<"Which operation you want to perform:"<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Top"<<endl;
        cout<<"4.isEmpty"<<endl;
        cout<<"5.isFull"<<endl;
        cout<<"6.Exit"<<endl;
        
        cout<<"Enter choice: ";
        cin>>ch;

        if(ch==1)
        {
            if(top==size-1)
                cout<<"Stack Full"<<endl;
            else
            {
                cout<<"Enter element: ";
                cin>>x;
                top++;
                stack[top]=x;
            }
        }
        else if(ch==2)
        {
            if(top==-1)
                cout<<"Stack Empty"<<endl;
            else
            {
                cout<<"Deleted element "<<stack[top]<<endl;
                top--;
            }
        }
        else if(ch==3)
        {
            if(top==-1)
                cout<<"Stack Empty"<<endl;
            else
                cout<<"Top element "<<stack[top]<<endl;
        }
        else if(ch==4)
        {
            if(top==-1)
                cout<<"Stack is Empty"<<endl;
            else
                cout<<"Stack is Not Empty"<<endl;
        }
        else if(ch==5)
        {
            if(top==size-1)
                cout<<"Stack is Full"<<endl;
            else
                cout<<"Stack is Not Full"<<endl;
        }

    }while(ch!=6);

    return 0;
}
