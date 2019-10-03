#include<iostream.h>
#include<conio.h>
void fun_i(char,int);
int main()
{
int n;
char chin;
cout<<"enter the value of chin and nin";
cin>>n>>chin;
fun_i(chin,n);
cout<<"data type \t range";
cout<<"int \t -32767 to 32768";
cout<<"char \t 127 to -128";
fun_i(chin,n);
}
//////////////////////////////////
void fun_i(char a,int b)
{
for (int i=0;i<b;i++)
{
cout<<a;
}
}

