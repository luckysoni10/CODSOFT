#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    srand((unsigned int) time(NULL));
    int a=(rand()%100)+1;
    int b=0,c=0;
    cout<<"\t<<---Number Guessing Game--->>";
    cout<<"\n\t******************************";
    do{
        cout<<"\n\nEnter any number between (1-100) -->> ";
        cin>>b;
        if(b>a)
        {
            cout<<endl<<"\n\nEntered Number is Higher!!";
        }
        else
        {
            if(b<a)
            {
                cout<<endl<<"\n\nEntered Number is Lower!!";
            }
            else
            {
                cout<<endl<<"\n\nCongrulations!! You Have Guessed The Number Successfully....";
            }
        }
        c++;
    }while(b!=a);
    cout<<"\n\nAnswer is :: "<<b;
    cout<<"\nNumber of Guesses :: "<<c<<"\n\n";
}


