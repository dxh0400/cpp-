#include <iostream>
using namespace std;
class Student{
public:
    int id;//datamember
    string name;//datamember
    };
    int main(){
    Student s1;//creating an object of Student
    s1.id=201;
    s1.name="sonoo Jaiswal";
    cout<<s1.id<<endl;
    cout<<s1.name<<endl;
    return 0;
    }
