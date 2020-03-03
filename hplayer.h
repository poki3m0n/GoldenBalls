// Register.h
#include<string.h>

#ifndef HPLAYER_H_
#define HPLAYER_H_

class human
{

  public:
  
   
  

    void setname(string Nname);
    bool Decision();
    string getname(string setname);
    
    
    				 
  private:
    
    string name;
    bool decide=false;
    
    
};

#endif