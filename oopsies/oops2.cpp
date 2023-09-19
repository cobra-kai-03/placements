#include<iostream>
using namespace std;
/*
->Encapsulation/Information hiding /Data hiding-Wrapping up data member and function
->Fully encapsulated class->all data members are private
->Advantages- Data hiding, 
                increased security , 
                class can be made read only, 
                code reusability
*/
class student
{
    private:
        string name;
        int age;
        int height;
    
    public:
    int getage()
    {
        return this->age;
    }
};
int main()
{
    student first;
    cout<<"Hello"<<endl;
    return 0;
}