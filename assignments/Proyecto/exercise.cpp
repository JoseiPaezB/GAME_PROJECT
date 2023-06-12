#include <vector>
#include <fstream>
#include "Friendly.hpp"
#include "Warrior.hpp"
#include <unistd.h>
using namespace std; 

int main() 
{
  vector<Personaje*>Personajes; 
  Personajes.push_back(new Warrior("HADES","GOD",75,15));
  Personajes.push_back(new Warrior("ZEUZ","DIOS",100,25));
  Personajes.push_back(new Friendly("BOY","HUMAN","SON OF KRATOS")); 
  Personajes.push_back(new Friendly("RES","ELF","HERRADERO"));

  Warrior w1("KRATOS","SEMIGOD",50,50);
  for (int i=0;i<Personajes.size();i++){
    if(Warrior* ptrC = dynamic_cast<Warrior *>(Personajes[i])){
      cout<<"\nVas a combatir con: "<<ptrC->getNombre()<<endl; 
      cout<<"\nel damage de " <<ptrC->getNombre()<<" es: "<<ptrC->getDamage()<<endl; 
      cout<<ptrC->animation(w1);
      sleep(1); 
    }else{
      cout<<ptrC->getNombre()<<endl;  
      cout<<ptrC->animation(w1);
      sleep(1);

    }

      

    }
  
}
