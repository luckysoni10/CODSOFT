#include<iostream>
using namespace std;
int main()
{
    double a1,a2;
    int choice;
    cout<<"\t<<---CALCULATOR--->>";
    cout<<"\n\t*********************";
    do{
    cout<<"\n::OPERATIONS::\t1. Addition. ";
    cout<<"\n \t\t2. Substraction. ";
    cout<<"\n \t\t3. Multiplication. ";
    cout<<"\n \t\t4. Division. ";
    cout<<"\n \t\t5. Exit.";
    cout<<"\n\nEnter Your Choice :-> ";
    cin>>choice;
    cout<<"\n\nEnter Two Numbers One By One :-> ";
    cin>>a1>>a2;
    switch(choice)
    {
        case 1: cout<<a1<<" + "<<a2<<" = "<<a1+a2;break;
        case 2: cout<<a1<<" - "<<a2<<" = "<<a1-a2;break;
        case 3: cout<<a1<<" * "<<a2<<" = "<<a1*a2;break;
        case 4: if(a2==0)
        {
            cout<<"\nCan't divide by zero..!";
        }else{
            cout<<a1<<" / "<<a2<<" = "<<a1/a2;break;}
        case 5: cout<<"\nExiting the program..."; break;
        default:cout<<"Invalid Choice!!\n\n\n";break;
    }
    }while(choice !=5);
}
