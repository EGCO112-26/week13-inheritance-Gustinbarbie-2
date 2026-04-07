#include "MU_Person.h"


class student:public MU_person{
private:
          double gpa; 
	
public:
    student(long=001 ,double=1.0,string="Nattawut");
    ~student();
    void display(); // display_person
   
};

student::student(long id, double g,string n):MU_person(id,n){
// Finish constructor to set all values

    gpa=g;        
    cout<<"MU student constructor  "<<gpa<<endl;
         
}
student::~student(){
     cout<<"-------"<<endl;
     cout<<"student destructor  "<<gpa<<endl; 
}


void student::display(){
   cout<<"GPA: "<<gpa<<endl;
 
}