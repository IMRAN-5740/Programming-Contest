#include<iostream>
using namespace std;

class animal
{
private:
    int age;
    string name;

public:
    void set_value(int Age, string Name);

    void details();
};


void animal:: set_value(int Age, string Name)
{
    age = Age;
    name = Name;
}

void animal:: details()
{
    cout<<"Age = "<<age<<endl;
    cout<<"Name = "<<name<<endl<<endl;
}

int main()
{
    animal Zebra, Dolphin;

    int n;
    char str[50];

    cout<<"Input the information of Zebra:"<<endl;

    cin>>n;
    getchar();
    gets(str);
    Zebra.set_value(n,str);

     cout<<"\nInput the information of Dolphin:"<<endl;

    cin>>n;
    getchar();
    gets(str);
    Dolphin.set_value(n,str);

    cout<<"\nZebra details"<<endl;
    Zebra.details();

    cout<<"Dolphin details"<<endl;
    Dolphin.details();


    return 0;
}
