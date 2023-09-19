#include<iostream>
using namespace std;

/*
Polymorphism-When something exists in multiple forms

Types of polymorphism
->Compile time polymorphism
->Run time polymorphism
*/

/*  Compile time polymorphism / static polymorphism
    ->Function overloading
    ->Operating overloading
*/

//Function overloading
/*

class A{
    public:
    void sayhello()
    {
        cout<<"Hello"<<endl;
    }
    int sayhello(char name)
    {
        return 1;
    }
    void sayhello(string name)
    {
        cout<<"Hello"<<name<<endl;
    }
};


int main()
{
    A ob;
    ob.sayhello();
    return 0;
}
*/

//Operator overloading
// return_type  operator+   (input)
/*
class B
{
    public:
    int a;
    int b;

    public:
    int add()
    {
        return a+b;
    }
    void operator+(B &ob)
    {
        cout<<"Hello"<<endl;
        
        int val1=this->a;
        int val2=ob.a;
        cout<<"Output "<<val2-val1<<endl;
        
    }

    void operator() ()
    {
        cout<<"Bracket"<<this->a<<endl;
    }
};

int main()
{
    B ob1,ob2;
    ob1.a=4;
    ob2.a=7;
    ob1 + ob2;
    ob1();
    return 0;
}
*/

//Run time polymorphism/dynamic polymorphism
/*
Rules
->same name
->same parameter
->depends on inheritance
*/
/*
class Animal{
    public:
    void speak()
    {
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Animal{
    public:
    void speak()
    {
        cout<<"Barking"<<endl;
    }
};

int main()
{
    Dog d;
    d.speak();
    return 0;
}
*/