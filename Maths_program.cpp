#include<iostream>
#include<fstream>
#include<conio.h>
#include<cstdlib>
#include<cmath>
using namespace std;
class calc
{
    public:
    int a,b,sum,multi,div,sub,ar_cic,n; /* a and b are primary variables. */
    long fact;
    void getdata();
    void sumation();
    void multiply();
    void divide();
    void subtract();
    void area();
    void factorial();
    void sum_display();
    void multi_display();
    void div_display();
    void sub_display();
    void ar_display();
    void file();
    void square();
    void cube();
};
void calc::getdata()
{
    cout<<"Enter value of a:"<<endl;
    cin>>a;
    cout<<"Enter value of b:"<<endl;
    cin>>b;
}
void calc::sumation()
{
    sum=a+b;
}
void calc::multiply()
{
    multi=a*b;
}
void calc::divide()
{
    div=b/a;
}
void calc::subtract()
{
    sub=a-b;
}
void calc::factorial()
{
    int i;
    fact=1;
    cout<<endl<<"Enter a Number:";
    cin>>n;
    for(i=n;i>0;i--)
    {
        fact=fact*i;
    }
    cout<<"Factorial="<<fact;
}
void calc::sum_display()
{
    cout<<"sum="<<sum<<endl;
    fstream st;
    st.open("E:\data.txt",ios::app);
    if(!st)
    {
        cout<<"File Creation Failed";
    }
    else{
        st<<"\nSum=:"<<sum;
        st.close();
    }
}
void calc::multi_display()
{
    cout<<"Multi:"<<multi<<endl;
    fstream st;
    st.open("E:\data.txt",ios::app);
    if(!st)
    {
        cout<<"File Creation Failed";
    }
    else{
        st<<endl<<"Multi=:"<<multi;
        st.close();
    }
}
void calc::div_display()
{
    cout<<"Divide:"<<div<<endl;
    fstream st;
    st.open("E:\data.txt",ios::app);
    if(!st)
    {
        cout<<"File Creation Failed";
    }
    else{
        st<<endl<<"Divide=:"<<div;
        st.close();
    }

}
void calc::sub_display()
{
    cout<<"Subtract:"<<sub<<endl;
    fstream st;
    st.open("E:\data.txt",ios::app);
    if(!st)
    {
        cout<<"File Creation Failed";
    }
    else{
        st<<"\nSubtract=:"<<sub;
        st.close();
    }
}
void calc::square()
    {
        system("cls");
        cout<<"\nEnter Number:";
        cin>>a;
        b=sqrt(a);
        cout<<"\nSquare root:"<<b;
        fstream st;
         st.open("E:\data.txt",ios::app);
    if(!st)
    {
        cout<<"File Creation Failed";
    }
    else{
        st<<"\nSquare root=:"<<b;
        st.close();
    }
    }
    void calc::cube()
    {
        system("cls");
        cout<<"\nEnter Number:";
        cin>>a;
        b=cbrt(a);
        cout<<"\nCube Root:"<<b;
        fstream st;
         st.open("E:\data.txt",ios::app);
    if(!st)
    {
        cout<<"File Creation Failed";
    }
    else{
        st<<"\nCube root=:"<<b;
        st.close();
    }

    }
int main()
{
    top:
    int choice,r,ar_cic,choice2;
    char ch;
    int choice1;
    calc c1;
    cout<<"----------------------------";
    cout<<"\n-MATHEMATICS PROGRAM BY JAS-";
    cout<<"\n-                          -";
    cout<<"\n----------------------------";
    cout<<"\n1.Simple calculator\n2.Area of circle\n3.Calculate Factorial\n4.Calculate Square Root\n5.Cube Root\n6.View Saved Data\n7.About Me\n99.Exit"<<endl;
    cout<<"\nEnter your choice:"<<endl;
    cin>>choice1;
    if(choice1==1)
    {
        system("cls");
    do{
             cout<<"----------------------------";
    cout<<"\n-MATHEMATICS PROGRAM BY JAS-";
    cout<<"\n-                          -";
    cout<<"\n----------------------------";
    cout<<endl<<"SIMPLE CALCULATOR USING FUNCTIONS";
    cout<<"\n1.Sum\n2.Multiply\n3.Divide\n4.Subtract\n5.Back To Main Menu\nEnter Ur choice=";
    cin>>choice;
    system("cls");
    switch(choice)
    {
    case 1:
        cout<<"Sum:";
        c1.getdata();
        c1.sumation();
        c1.sum_display();
        break;
    case 2:
        cout<<"Multiply:";
        c1.getdata();
        c1.multiply();
        c1.multi_display();
        break;
    case 3:
        cout<<"Divide:";
        c1.getdata();
        c1.divide();
        c1.div_display();
        break;
    case 4:
        cout<<"Subtract:";
        c1.getdata();
        c1.subtract();
        c1.sub_display();
        break;
    case 5:
        goto top;
    default:
        cout<<"Wrong Input";
    }
    cout<<"\nDo You Want to Continue:(y/n)="<<endl;
        cin>>ch;
        system("cls");
    }
        while(ch!='n');
    }
    else if(choice1==2)
    {
        do
        {
            system("cls");
             cout<<"----------------------------";
    cout<<"\n-MATHEMATICS PROGRAM BY JAS-";
    cout<<"\n-                          -";
    cout<<"\n----------------------------";
    cout<<"\nCalculation Of Area Of Circle:";
        cout<<endl<<"Enter value of radius:"<<endl;
        cin>>r;
        ar_cic=3.14*r*r;
        system("cls");
        cout<<"Area of circle:"<<ar_cic<<endl;
        fstream th;
    th.open("E:\data.txt",ios::app);
    if(!th)
    {
        cout<<"File Creation Failed";
    }
    else{
        th<<endl<<"Area=:"<<ar_cic;
        th.close();
    }
            cout<<endl<<"Do you want to continue (y/n)=";
            cin>>ch;
            system("cls");

    }
        while(ch!='n');
        }
        else if(choice1==3)
        {
            system("cls");
             cout<<"----------------------------";
    cout<<"\n-MATHEMATICS PROGRAM BY JAS-";
    cout<<"\n-                          -";
    cout<<"\n----------------------------";
            cout<<endl<<"Calculation Of Factorial:";
            do{
            c1.factorial();
            system("cls");
            cout<<"\nDo you want to continue:(y/n)=";
            cin>>ch;
            system("cls");
            }
            while(ch!='n');
        }
        else if(choice1==6)
        {
            system("cls");
             cout<<"----------------------------";
    cout<<"\n-MATHEMATICS PROGRAM BY JAS-";
    cout<<"\n-                          -";
    cout<<"\n----------------------------";
            system("type E:\data.txt");
            back:
            cout<<"\nDo You Want To Continue:(y/n)=";
            cin>>ch;
            system("cls");
            if(ch=='y')
            {
                goto top;

            }
            else if(ch=='n')
            {
                system("exit");
            }
            else
            {
                goto back;
            }
        }
        else if(choice1==4)
        {
            do{
                     cout<<"----------------------------";
    cout<<"\n-MATHEMATICS PROGRAM BY JAS-";
    cout<<"\n-                          -";
    cout<<"\n----------------------------";
            c1.square();
            cout<<"\nDo You Want To Continue:(Y/N):";
            cin>>ch;
            }
            while(ch!='n');
        }
        else if(choice1==5)
        {
            do{
               cout<<"----------------------------";
               cout<<"\n-MATHEMATICS PROGRAM BY JAS-";
               cout<<"\n-                          -";
               cout<<"\n----------------------------";
               c1.cube();
               cout<<"\nDo You want To Continue:(Y/N):";
               cin>>ch;
              }
            while(ch!='n');
        }
        else if(choice1==7)
        {
            about:
            system("CLS");
            cout<<"\n--CODER=Jaskaran Sembhi-- ";
            cout<<"\n\n--Our Website:csgyan.000webhostapp.com--";
            cout<<"\n\n\n\n\nEnter 1 To Get Back to Main menu or 99 to Exit...";
            cin>>choice2;
            switch(choice2)
            {
            case 1:
                system("CLS");
                goto top;
                break;
            case 99:
                system("exit");
                break;
            default:
                cout<<"\nWrong Input,Try Again....";
                goto about;
            }
        }
        else if(choice1==99)
        {
            system("exit");
        }
    else
    {
        cout<<"Wrong Input";
    }
    return 0;
}

