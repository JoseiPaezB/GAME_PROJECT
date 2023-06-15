#include <vector>
#include <fstream>
#include <stdexcept>
#include "Friendly.hpp"
#include "Warrior.hpp"
#include <unistd.h>
using namespace std; 


int ChekeaDatoIngresado(int n){
while(true){
  try{
    if(n<1){
      throw "JUGAD@R ESE NO ES UN DATO VALIDO"; 
    }
    if(n>5){
      throw "JUGAD@R ESE NO ES UN DATO VALIDO"; 
    }
    return n;

  }catch(const char* msj){
    cout<<msj<<endl; 

    cout<<"JUGAD@R DIGITA NUEVAMENTE UN VALOR"<<endl;
    cin>>n; 
  }
}
}



int cierreDePuerta1(int cont){ 
  static int contador=0; 
  contador += cont; 
  return contador;  
}

int cierreDePuerta2(int cont){
  static int contador=0; 
  contador += cont; 
  return contador; 
}

int cierreDePuerta3(int cont){
  static int contador=0; 
  contador += cont; 
  return contador; 
}

int cierreDePuerta4(int cont){
  static int contador=0; 
  contador += cont; 
  return contador; 
}



int main() 
{
  srand((unsigned) time(NULL));


 vector<Friendly*>Amigos; 
 vector<Warrior*>Dioses; 
  Dioses.push_back(new Warrior("HADES","GOD",75,75)); 
  Dioses.push_back(new Warrior("ZEUZ","DIOS",100,75));
  Amigos.push_back(new Friendly("BOY","HUMAN","SON OF KRATOS")); 
  Amigos.push_back(new Friendly("RES","ELF","HERRADERO"));

  /*
  cout<<"\t\tUN JUEGO POR JOSE IGNACIO PAEZ"<<endl; 
  sleep(1);

  ifstream archivo; 
  archivo.open("titulo.txt"); 
  string linea;
  while (std::getline(archivo, linea)) {
    cout << linea << endl;
    sleep(1);
  }*/
  int valor,vida,n,z,golpe,res,i;
  Warrior w1("KRATOS","SEMIGOD",200,50);
  

int opc; 

while(opc!=4){
  cout<<"\nMENU DE JUEGO"<<endl; 
  cout<<"1.JUGAR \n2.HISTORIA \n3.CREDITOS \n4.SALIR"<<endl; 
  cin>>opc; 
  if(opc==1){
  int deba,vidaActual,r; 
  deba=200; 
  cout<<w1; 
  cout<<w1.getNombre()<<" BIENVENIDO A ATHENAS"<<endl;
  ifstream arch; 
    arch.open("Kratos.txt"); 
    string ti;
    while (std::getline(arch, ti)) {
    cout << ti << endl;
    sleep(0);
    }
  z=1; 
  while(z!=0){
    ifstream archive; 
    archive.open("Objetivo.txt"); 
    string tin;
    while (std::getline(archive, tin)) {
    cout << tin << endl;
    sleep(1);
    }
    cout<<"\n\nPresiona 1 para continuar"<<endl; 
    int r; 
    cin>>r; 
    if(r==1){
    ifstream archi; 
    archi.open("Cuarto1.txt"); 
    string lin;
    while (std::getline(archi, lin)) {
    cout << lin << endl;
    sleep(1);
    }
    int s; 
    cin>>s;
    if(s==1){
      //cout<<w1.getHealth()<<endl; 
      valor=cierreDePuerta1(0); 
      if (valor>=1){
        cout<<"ESTE CAMINO YA HA SIDO CURZADO"<<endl; 
      }
      else{
      while(w1.getHealth()<=250){
        cout<<"\n\tAl acercarte parece inofensivo sin emabrgo"<<endl; 
        cout<<"\n\tPara interactuar con el te pide de 1 a 5, "<<endl;
        cout<<"\n\tCuidado al darlas, tu destino depende de ello"<<endl;  
        cin>>n;
        z=ChekeaDatoIngresado(n);  
        if(z>3){
          Amigos[0]->recieve(n);
          sleep(1); 
          valor=Amigos[0]->animation(); 
          sleep(1); 
          w1+valor;
            //w1.printHealth(valor);
          cout<<"\nDEBERAS SEGUIR RECORRIENDO"<<endl; 
          break; 
          

        }else{
          Amigos[0]->recieve(n);
          sleep(1); 
          break;
          
        }
      }
      valor=cierreDePuerta1(1); 
    
    }
  }else{
    cout<<"HAS DECIDIO NO INTERACTUAR"<<endl;
    sleep(1); 
    cout<<"Bajo tu propio riesgo..."<<endl; 
  }
  }else{
    cout<<"SALIENDO AL Menu.."<<endl;
    break;
  }
  
    ifstream arch; 
    arch.open("hades.txt"); 
    string li;
    while (std::getline(arch, li)) {
    cout << li << endl;
    sleep(0);
    }
    
      bool avanzarSiguienteSeccion = false;
      for (int i=0;i<Dioses.size();i++){
        if(avanzarSiguienteSeccion==true){
        break; 
      }else if(Warrior* ptrC = dynamic_cast<Warrior *>(Dioses[i])){
      
        while(Dioses[i]->DeadOrAlive()==true){
          if(w1.DeadOrAlive()==false){
            cout<<"HAS MUERTO, LA SIGUIENTE PIENSA MEJOR TU CAMINO"<<endl; 
            sleep(2); 
            z=0; 
            break;
            avanzarSiguienteSeccion=true; 
          }
          else if(Dioses[i]->DeadOrAlive()==true){
            
          
            sleep(2);
            vida=Dioses[i]->animation(); 
            sleep(2); 
            w1.recieve(vida); 
            sleep(2); 
            res=w1.getHealth(); 
            if(res!=0){
              sleep(2); 
              golpe= w1.animation(); 
              sleep(2); 
              Dioses[i]->recieve(golpe); 
              if (Dioses[i]->DeadOrAlive()==false){
                  cout<<w1.getNombre()<<" HAS MATADO A "<<Dioses[i]->getNombre()<<endl; 
                  sleep(2); 
                  cout<<"TU SALUD ACTUAL ES DE "<<w1.getHealth()<<endl; 
                  sleep(2); 
                  cout<<"AVANZARAS A LA SIGUIENTE SECCION"<<endl; 
                  sleep(2); 
                  avanzarSiguienteSeccion = true; 
                  break; 
              }
              
            }else{
              cout<<"GAME OVER, LA SIGUIENTE VEZ PIENSA MEJOR TU CAMINO"<<endl; 
              sleep(2); 
              z=0; 
              break;
              avanzarSiguienteSeccion=true; 

              break;
            }
      
        }else if(Dioses[i]->DeadOrAlive()==false){
          cout<<w1.getNombre()<<"HAS MATADO A"<<Dioses[i]->getNombre()<<endl; 
          sleep(2); 
          cout<<"AVANZARAS A LA SIGUIENTE SECCION"<<endl; 
          sleep(2); 
          break; 
        }
      }
      }
    }
    cierreDePuerta3(1); 
    cierreDePuerta4(1); 
    
    

    }
      while(w1.getHealth()<=250){
        cout<<"\n\tPara interactuar con este personaje debes dar un numero del 1 al 5"<<endl; 
        cin>>n;
        z=ChekeaDatoIngresado(n);  
        if(z>3){
          Amigos[0]->recieve(n);
          sleep(1); 
          valor=Amigos[0]->animation(); 
          sleep(1); 
          w1+valor;
            //w1.printHealth(valor);
          cout<<"DEBERAS SEGUIR RECORRIENDO"<<endl; 
          break; 
          

        }else{
          Amigos[0]->recieve(n);
          sleep(1); 
          break;
          
        }
      }
      valor=cierreDePuerta1(1); 
    
    }
    
  }
}
  /*
    //cout<<w1.getHealth()<<endl; 
    valor=cierreDePuerta2(0); 
    if (valor>=1){
      cout<<"ESTE CAMINO YA HA SIDO CURZADO"<<endl; 
    }
    else{
    while(w1.getHealth()<=250){
      cout<<"\n\tPara interactuar con este personaje debes dar un numero del 1 al 5"<<endl; 
      cin>>n;
      z=ChekeaDatoIngresado(n);  
      if(z>3){
        Amigos[1]->recieve(n);
        sleep(1); 
        valor=Amigos[1]->animation(); 
        sleep(1); 
        w1+valor;
          //w1.printHealth(valor);
        cout<<"DEBERAS SEGUIR RECORRIENDO"<<endl; 
        break; 
          

      }else{
        Amigos[1]->recieve(n);
        sleep(1); 
        break;
          
      }
    
    
    }
    cierreDePuerta2(1); 

  }
  }
    /*else if(r==5){
      z=0;
      
    }
  
  else if(opc==2){
    ifstream archivo; 
    archivo.open("historia.txt"); 
    string linea;
    while (std::getline(archivo, linea)) {
      cout << linea << endl;
      sleep(1);
    }
    cout<<"DIGITA 1 PARA REGRESAR"<<endl; 
    cin>>n; 
    if(n==1){
      break;
    }else{
      cout<<"DIGITA UNA OPCION VALIDA"<<endl;
      cin>>n; 
    }
    
  }else if(opc==3){
    ifstream archivo; 
    archivo.open("Autor.txt"); 
    string linea;
    while (std::getline(archivo, linea)) {
      cout << linea << endl;
      sleep(1);}
      cout<<"DIGITA 1 PARA REGRESAR"<<endl; 
      cin>>n; 
      if(n==1){
        break;
      }else{
        cout<<"DIGITA UNA OPCION VALIDA"<<endl;
        cin>>n; 
      }
    

  }else if(opc==4){
    cout<<"SALIENDO..."<<endl; 
    break; 
  }else{
    cout<<"DIGITA UNA OPCION VALIDA"<<endl; 
    cin>>opc; 
  }
  

*/




