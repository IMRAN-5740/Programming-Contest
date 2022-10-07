#include <bits/stdc++.h>

using namespace std;

class student{
    int id;
    int age;
    char name[50];

public:
    void set(int Id, int Age, char Name[50]);
    void show();
};

void student :: set(int Id, int Age, char Name[50])
{

    id = Id;
    age = Age;
    strcpy(name,Name);
}

void student :: show()
{
    cout<<"id = "<<id<<endl;
    cout<<"age = "<<age<<endl;
    cout<<"name = "<<name<<endl<<endl;
}

int main()
{
    int n;
    cout<<"Input the number of student: ";
    cin>>n;
   student st[n];
    int id;
    int age;
    char name[50];

    cout<<"\nInput the information of student id, age and name sequentially :"<<endl;
   for(int i=0; i<n; i++)
   {
      
       cin>>id;
       cin>>age;
       getchar();
       gets(name);
       st[i].set(id, age, name);
   }

   cout<<endl;

    for(int i=0; i<n; i++)
   {

       cout<<"student "<<i+1<<" details"<<endl;
       st[i].show();
   }


    return 0;
}
