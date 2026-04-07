#include "NODE.h"
#include <string>
#include <iostream>

class MU_person:public NODE{
private: 
  
protected:
  long id;
  std::string name;

public:
  MU_person(long=001 ,std::string ="Prapaporn");
  void display_person();
  ~MU_person();
};

MU_person::~MU_person(){
  std::cout<<"Destructor id="<<id<<std::endl;
}
MU_person::MU_person(long id, std::string n):NODE(id){
    name=n;
    std::cout<<"MU person constructor "<<id<<std::endl;
}

void MU_person::display_person()
{
  std::cout<<"Info :"<<std::endl;
  std::cout<<"id:"<<id<<std::endl;
  std::cout<<"Name : "<<name<<std::endl;
}