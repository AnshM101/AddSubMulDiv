//22070123020


#include<iostream>
using namespace std;

int main()
{
    std::cout<<"Hello World\n";
    int a,b,sum,sub,mul,div,logA,logO,bitA,bitO,bitX;
    cout<<"enter first number\n";
    cin>>a;
    cout<<"enter second number\n";
    cin>>b;
    sum=a+b;
    cout<<"The sum is: "<<sum<<endl;
    sub=a-b;
    mul=a*b;
    div=a/b;
    logA=a&&b;
    logO=a||b;
    bitA=a&b;
    bitO=a|b;
    bitX=a^b;
    //std::cout<<"Addition:"\n"; 
    cout<<"The difference is:"<<sub<<endl;
    cout<<"The product is:"<<mul<<endl;
    cout<<"The quotient is:"<<div<<endl;
    cout<<"Logical AND:"<<logA<<endl;
    cout<<"Logical OR:"<<logO<<endl;
    cout<<"Bitwise AND:"<<bitA<<endl;
    cout<<"Bitwise OR:"<<bitO<<endl;
    cout<<"Bitwise XOR:"<<bitX<<endl;
    return 0;
}
