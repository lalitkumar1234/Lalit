# include <iostream>
using namespace std;

class test
{
    public:int x,y,sum;
            float fsum;
    void first()
    {
        cout<<"Enter first number\n";
    }
    void second()
    {
        cout<<"Enter second number\n";
    }
    int add()
    {
        sum=x+y;
        cout<<sum;
    }
    int minus()
    {
        sum=x-y;
        cout<<sum;
    }
    int mult()
    {
        sum=x*y;
        cout<<sum;
    }
    int divide()
    {
        sum=x/y;
        cout<<fsum;
    }
};


int main()
{
    test c;
    int choice;
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Divition\n";
    cin>>choice;
    switch (choice){
        case 1:

        c.first();
        cin>>c.x;
        c.second();
        cin>>c.y;
        c.add();
        break;

        case 2:
        c.first();
        cin>>c.x;
        c.second();
        cin>>c.y;
        c.minus();
        break;

        case 3:
        c.first();
        cin>>c.x;
        c.second();
        cin>>c.y;
        c.mult();
        break;

        case 4:
        c.first();
        cin>>c.x;
        c.second();
        cin>>c.y;
        c.divide();
        break;
    }
    return 0;
}
