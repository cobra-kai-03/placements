#include<iostream>
#include<cstring>
#include<string>
using namespace std;

//Fora n empty class 1 byte of memroy is allocated as a sake of identification
class Hero
{
    //properties
    private:
    int health;
    public:
    char*name;
    char level;
    static int time;
    //Default constructor
    Hero()
    {
        //This is also a default constructor if we initialise this the compiler won't invoke it's own default constructor
        cout<<"Constructor called"<<endl;
        name=new char[100];
    }
    
    //parameterised constructor
    Hero(int health)
    {
       // cout<<"Address in this-> "<<this<<endl;
        this->health=health;
    }

    Hero(int health,char level)
    {
       // cout<<"Address of this-> "<<this<<endl;
        this->health=health;
        this->level=level;
    }

    //Copy constructor
    Hero(Hero &temp)
    {
        char*ch=new char[(strlen(temp.name)+1)];
        strcpy(ch,temp.name);
        this->name=ch;
        cout<<"Copy constructor called"<<endl;
        this->level=temp.level;
        this->health=temp.health;
    }
    void print()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Health: "<<health<<endl;
        cout<<"Level: "<<level<<endl;
    }

    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health=h;
    }
    void setlevel(char c)
    {
        level=c;
    }
    void setname(char name[])
    {
        strcpy(this->name,name);
    }
    static int random()
    {
        return time;
    }
    //Destructor
    ~Hero()
    {
        cout<<"Destructor bhai called"<<endl;
    }

    
};

//static data member syntax(datatype classname  scoperesolution operator name = value)
int Hero::time=0;

int main()
{
    //creation of Object
    /*
    Hero h1;
    cout<<sizeof(h1);
    */

   /*
   Hero jug;
   //setter and getter is used to access private attributes of the class
   //use of setter
   jug.sethealth(20);
   //use of getter
   cout<<"Jug health is "<<jug.gethealth()<<endl;

   cout<<"Size of jug "<<sizeof(jug)<<endl;
   */


    /*
    //static allocation
    Hero a;
    //to print statically allocated object
    a.sethealth(20);
    a.setlevel('b');
    cout<<"Level of a is "<<a.level<<endl;
    cout<<"Health of a is "<<a.gethealth()<<endl;
    //dynamic allocation
    Hero*h=new Hero;
    //setting dynamic object
    h->sethealth(30);
    h->setlevel('p');
    //To print dynamically allocated object
    cout<<"Level of h is "<<(*h).level<<endl;
    cout<<"Health of h is "<<(*h).gethealth()<<endl;
    //Alternate method
    cout<<"Level of h is "<<h->level<<endl;
    cout<<"Health of h is "<<h->gethealth()<<endl;
    */


   //During object creation constructor is invoked
   /*
   Following are the properties of a constructor
   ->Invoked during object creation
   ->No return type
   ->No input parameters
   */



    /*
   Hero jug(10); //jug.Hero() ->default constructor
    jug.print();
   //cout<<"Address of jug is "<<&jug<<endl;
   Hero*h=new Hero(11);
   //cout<<"Address of h is"<<h<<endl;
    h->print();
    Hero temp(40,'B');
   // cout<<"Address of temp is "<<&temp<<endl;
   temp.print();
   */

    /*
    Hero jug(70,'C');
    jug.print();

    //copy constructor
    Hero betty(jug);
    betty.print();
    */
    //shallow copy constructor is the on where changes made in first object is reflected on the other because they share the sane address space
    //this happens with default copy constructor

    //In deep copy we use copy constructor we've written

    /*
    Hero h1;
    h1.sethealth(12);
    h1.setlevel('D');
    char name[4]="Jug";
    h1.setname(name);
    cout<<"h1 printing!!!"<<endl;
    h1.print();
    Hero h2(h1);
    cout<<"h2 printing!!!"<<endl;
    h2.print();
    h1.name[0]='B';
    cout<<"h1 printing!!!"<<endl;
    h1.print();
    cout<<"h2 printing!!!"<<endl;
    h2.print();
    */

   //Copy assignment operator
   //h1=h2;

   //Destructor- used to deallocate memory
   /*
   Properties of destructors:
   ->Same name as the class
   ->No return type
   ->No input parameters
   ->automatically called for static object
   ->for dynamic manually called
   */
   /*
   Hero a;
   Hero*b=new Hero();
    //destructor manually called
   delete b;
   */
   //const keyword
   //initialisation list

   //static keyword
   //cout<<Hero::time<<endl;

   cout<<Hero::random()<<endl;
    return 0;
}
