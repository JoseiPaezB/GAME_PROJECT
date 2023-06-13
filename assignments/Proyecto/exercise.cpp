#include <vector>
#include <fstream>
#include "Friendly.hpp"
#include "Warrior.hpp"
#include <unistd.h>
using namespace std; 

int main() 
{
  
 vector<Personaje*>Personajes; 
  Personajes.push_back(new Warrior("HADES","GOD",75,25));
  Personajes.push_back(new Warrior("ZEUZ","DIOS",100,50));
  Personajes.push_back(new Friendly("BOY","HUMAN","SON OF KRATOS")); 
  Personajes.push_back(new Friendly("RES","ELF","HERRADERO"));

  Warrior w1("KRATOS","SEMIGOD",100,100);
  int valor,vida,n;
  string nombre; 
  cout<<"\t\tUN JUEGO POR JOSE IGNACIO PAEZ"<<endl; 
  sleep(1);

  ifstream archivo; 
  archivo.open("titulo.txt"); 
  string linea;
  while (std::getline(archivo, linea)) {
    cout << linea << endl;
    sleep(1);
  }

  for (int i=0;i<Personajes.size();i++){
  if(Friendly* ptrC=dynamic_cast<Friendly*>(Personajes[i])){
    cout<<"\n\tPara interactuar con este personaje debes dar un numero del 1 al 5"<<endl; 
    cin>>n; 
    if(n>3){
      Personajes[i]->recieve(n);
      valor=Personajes[i]->animation(); 
      w1.printHealth(valor); 
    }else{
      Personajes[i]->recieve(n);
    }

    }else{
      vida=Personajes[i]->animation(); 
      w1.recieve(vida); 

    }
  }
  
}

