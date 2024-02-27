#include <iostream>

using namespace std;

float sum = 0;

int summ(int x,int y)
{
    sum = x + y;
    return sum;
}

float dif = 0;

int difference(int a, int b)
{
    dif = a - b;
    return dif;
}

float mult = 0;

int multiplication(int a, int b)
{
    mult = a * b;
    return mult;
}

float divis = 0;

int division(int a, int b)
{
    divis = a / b;
    return divis;
}

int main()
{
    float a;
    float b;

    char op;

    cout<<" operator(+ - * /) : "<<endl;
    cin>>op;

    cout<<"a = ";
    cin>>a;

    cout<<"b = ";
    cin>>b;

    switch(op)
    {
    case '+':
        cout<< a << op << b<<"="<<summ(a,b);
        break;

    case '-':
        cout<< a << op << b<<"="<<difference(a,b);
        break;

    case '*':
        cout<< a << op << b<<"="<<multiplication(a,b);
        break;

    case '/':
        cout<< a << op << b<<"="<<division(a,b);
        break;

    default:
        cout<<"The operator is not correct.";
        break;
    }
    return 0;
}
