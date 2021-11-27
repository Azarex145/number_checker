#include <iostream>
using namespace std;

int menu(){
    int ch=0;
    cout<<"\nMENU"<<endl;
    cout<<"1-EVEN OR ODD"<<endl;
    cout<<"2-PRIME"<<endl;
    cout<<"3-PALINDROME"<<endl;
    cout<<"4-ARMSTRONG\n"<<endl;
    cout<<"ENTER YOUR CHOICE(1-4)"<<endl;
    cin>>ch;
    return ch;
}

// function for checking even or odd number
void evenOrOdd(){
    int n;
    cout<<"\nENTER A NUMBER"<<endl;
    cin>>n;
    if(n%2==0)
    {    
        cout<<"EVEN NUMBER"<<endl;
        cout<<"_____________________________________"<<endl;
    }
    else
    {    
        cout<<"ODD NUMBER"<<endl;
        cout<<"_____________________________________"<<endl;
    }
}

// function for checking prime number
void prime(){
    int i,count=0,n;
    cout<<"\nENTER A NUMBER"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    {   cout<<"PRIME NUMBER"<<endl;
        cout<<"_____________________________________"<<endl;
    }
    else
    {   cout<<"NOT A PRIME NUMBER"<<endl;  
        cout<<"_____________________________________"<<endl;
    }
}

// function for checking palindrome number
void palindrome(){
    int n, t,d,rev=0;
    cout<<"\nENTER A NUMBER"<<endl;
    cin>>n;
    t=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==t)
    {    
        cout<<"PALINDROME NUMBER"<<endl;
        cout<<"_____________________________________"<<endl;
    }
    else
    {    
        cout<<"NOT A PALINDROME NUMBER"<<endl;
        cout<<"_____________________________________"<<endl;
    }
}

// function for checking armstrong number
void armstrong(){
    int n,t,d,sum=0;
    cout<<"\nENTER A NUMBER"<<endl;
    cin>>n;
    t=n;
    while(n>0)
    {
        d=n%10;
        sum=sum+(d*d*d);
        n=n/10;
    }
    if(sum==t)
    {    
        cout<<"ARMSTRONG NUMBER"<<endl;
        cout<<"_____________________________________"<<endl;
    }
    else
    {    
        cout<<"NOT A ARMSTRONG NUMBER"<<endl;
        cout<<"_____________________________________"<<endl;
    }
}

string contnu(){
    cout <<"\nDO YOU WANT TO CONTINUE?(y/n)"<<endl;
    string q1;
    cin>>q1;
    return q1;
}

void thanku(){
    cout<<"\n*************************************"<<endl;
    cout<<"     THANKS FOR VISITING THIS APP"<<endl;
    cout<<"*************************************"<<endl;  
}

int main(){
    int c;
    cout<<"*************************************"<<endl;
    cout<<"    WELCOME TO NUMBER CHECKER APP"<<endl;
    cout<<"*************************************"<<endl;
    while(1>0)
    {
        c=menu();
        switch (c)
        {
            case 1:
            evenOrOdd();
            break;
            case 2:
            prime();
            break;
            case 3:
            palindrome();
            break;
            case 4:
            armstrong();
            break;
            default:
            cout<<"INVALID INPUT"<<endl;
            break;
        }
        string con;
        con=contnu();
        if(con=="y")
            continue;
        else if(con=="n")  
        {
            thanku();
            break;
        }
        else
        {
            cout <<"INVALID INPUT"<<endl;
            contnu();
        }
    }
    return 0;
}