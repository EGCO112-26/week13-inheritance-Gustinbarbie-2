#include "NODE.h"


class MU_person:public NODE{
private: 
  
protected:
  long id;
	string name;

public:
	MU_person(long=001 ,string ="Prapaporn");
  void display_person();
  ~MU_person();
};



MU_person::~MU_person(){
  cout<<"Destructor id="<<id<<endl;
}
MU_person::MU_person(long id,string n):NODE(id){
   	  // Set up all MU_Person values
        name=n;
         cout<<"MU person constructor "<<id<<endl;
}

void MU_person::display_person()
{
  cout<<"Info :"<<endl;
  cout<<"id:"<<id<<endl;
  cout<<"Name : "<<name<<endl;
    
}