
  
   #include "hplayer.h"
   #include <string.h>
  
    // Creates an undefined event
    human::human( )
    {

    }
    
    
    bool human::Decision() const
    {
        return decide ;
    }

    void human::setname(string Nname)
    {
        Nname = name;
        return Nname;
    }

    string human::setname(string setame)
    {
       name++;
       name += setname;
    }
    
 
    				 