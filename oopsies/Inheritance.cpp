#include<iostream>
using namespace std;

//Inheritance
/*
class Human
{
    public:
    int height;
    int weight;
    int age;

    public:
    int getage()
    {
        return this->age;
    }
    int setweight(int w)
    {
        this->weight=w;
    }
};

class male: public Human{
    public:
    string color;

    void sleep()
    {
        cout<<"Male sleeping"<<endl;
    }
};

int main()
{
    male obj;
    cout<<obj.age<<endl;
    obj.setweight(81); 
    cout<<obj.weight<<endl;
    cout<<obj.height<<endl;
    cout<<obj.color<<endl;
    obj.sleep();
    return 0;
}
*/
/*
    Super class     Subclass        Final
    public          public          public
    public          private         private
    public          protected       protected
    protected       public          protected
    protected       protected       protected
    protected       private         private
    private         not accessible for all permutation
    which means private data members can't be inherited
*/

/*
Types of Inheritance
    ->single
    ->multi level
    ->multiple
    ->hybrid
    ->heirarchical
*/


//Single inheritance
/*
class Animal
{
    public:
    int age;
    int weight;


    public:
    void speak()
    {
        cout<<"Animal Speaking "<<endl;
    }
};

class Dog: public Animal{

};

int main()
{
    Dog d;
    d.speak();
    cout<<d.age<<endl;
    cout<<d.weight<<endl;
    return 0;
}
*/

//Multilevel Inheritance
/*
class Animal
{
    public:
    int age;
    int weight;


    public:
    void speak()
    {
        cout<<"Animal Speaking "<<endl;
    }
};

class Dog: public Animal{

};

class kutta:public Dog{

};
int main()
{
    kutta d;
    d.speak();
    cout<<d.age<<endl;
    cout<<d.weight<<endl;
    return 0;
}
*/

//Multiple Inheritance
/*
class Animal
{
    public:
    int age;
    int weight;


    public:
    void speak()
    {
        cout<<"Animal Speaking "<<endl;
    }
};

class Human{
    public:
    string color;

    public:
    void listen(){
        cout<<"Listening Human"<<endl;
    }
};

class hybrid: public Animal,public Human{

};
int main()
{
    hybrid d;
    d.speak();
    d.listen();
    cout<<d.age<<endl;
    cout<<d.weight<<endl;
    return 0;
}
*/

//Hierarchical Inheritance
/*
class A{
    public:
    void func()
    {
        cout<<"Inside function"<<endl;
    }
};
class B: public A{
    public:
    void func2()
    {
        cout<<"Inside Function 2"<<endl;
    }
};
class C: public A{
    public:
    void func3(){
        cout<<"Inside Function 3"<<endl;
    }
};

int main()
{
    A a;
    a.func();
    B b;
    b.func2();
    b.func();
    C c;
    c.func3();
    c.func();

    return 0;
}
*/

//Hybrid Inheritance- combination of more than one type of inheritance



/*
Inheritance Ambiguity
If there is a multilevel inheritance and two of it's parent classes have functions with same name 
To resolve this we've 
*/

class A{
    public:
    void fun()
    {
        cout<<"I'm A "<<endl;
    }
};

class B{
    public:
    void fun()
    {
        cout<<"I'm B"<<endl;
    }
};
class C: public A,public B{

};
int main()
{
    C ob;
    ob.A::fun();
    ob.B::fun();
}