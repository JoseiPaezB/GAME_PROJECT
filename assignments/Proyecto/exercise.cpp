#include <vector>
#include <fstream>
#include <stdexcept>
#include "Friendly.hpp"
#include "Warrior.hpp"
#include <unistd.h>
#include <set>
using namespace std; 

int ChekeaDatoIngresado4(int n){
while (true) {
        try {
            if (n != 1 && n != 2) {
                throw "JUGAD@R ESE NO ES UN DATO VALIDO";
            }
            return n;
        } catch (const char* msj) {
            cout << msj << endl;
            cout << "JUGAD@R DIGITA NUEVAMENTE UN VALOR" << endl;
            cin >> n;
        }
    }
}

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

int ChekeaDatoIngresado2(int n){
while(true){
  try{
    if(n<1){
      throw "JUGAD@R ESE NO ES UN DATO VALIDO"; 
    }
    if(n>4){
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
int ChekeaDatoIngresado3(int n){
while(true){
  try{
    if(n!=1){
      throw "JUGAD@R ESE NO ES UN DATO VALIDO"; 
    }
    return n; 
    

  }catch(const char* msj){
    cout<<msj<<endl; 

    cout<<"\nJUGAD@R DIGITA NUEVAMENTE UN VALOR:"<<endl;
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
void historia(){
  ifstream a; 
    a.open("historia.txt"); 
    string t;
    while (std::getline(a, t)) {
    cout << t << endl;
    sleep(2);
    }
}
void HADES(){
  ifstream a; 
    a.open("hades.txt"); 
    string t;
    while (std::getline(a, t)) {
    cout << t << endl;
    sleep(0);
    }
}
void gameOver(){
   ifstream a; 
    a.open("gameover.txt"); 
    string t;
    while (std::getline(a, t)) {
    cout << t << endl;
    sleep(0);
    }
}
void victoria(){
   ifstream a; 
    a.open("victoria.txt"); 
    string t;
    while (std::getline(a, t)) {
    cout << t << endl;
    sleep(0);
    }
}
void ZEUS(){
  ifstream a; 
    a.open("ZEUS.txt"); 
    string t;
    while (std::getline(a, t)) {
    cout << t << endl;
    sleep(0);
    }
}

int GetUniqueInput(const std::set<int>& usedNumbers) {
     int number;

    
    std::cin >> number;

    while (usedNumbers.count(number) || number < 1 || number > 10) {
        std::cout << "\nTRATA OTRO: ";
        std::cin >> number;
    }

    return number;
}

int GetUniqueInput2(const std::set<int>& usedNumbers2) {
     int number;

    
    std::cin >> number;

    while (usedNumbers2.count(number) || number < 1 || number > 10) {
        std::cout << "\nTRATA OTRO: ";
        std::cin >> number;
    }

    return number;
}


std::string storyBoy(){
  string story="Te contare mi Historia Kratos\n"
  "Yo no tengo nombre solo me conocen como Boy\n,"
  "He recorrido varios lugares y reinos hasta que por alguna razón terminé aquí\n"
  "Me asusta este lugar, los Dioses acaban con cualquiera que es de afuera\n"
  "Kratos, te pido que logres hablar con Zeus y que permitas mi entrada legítima\n"
  "Te dare una bebida mágica que aumentará tu vida\n"
  "Buena suerte Guerrero\n";


  return story; 
}

std::string storyPandora(){
  string story="KRATOS!\n"
  "Soy yo Pandora,\n"
  "A causa de Zeus he sido encerrada y mantenida en una celda porque tiene miedo de mi.\n"
  "Pero por qué tendría miedo de mi, si es que solo soy una simple niña débil. \n"
  "Tengo entendido que su debilidad tenía algo que ver con el número tres,\n"
  "Pero cuidado, te daré mi daga impar favorita para que lo puedas vencer. \n"
  "Espero salgas victorioso de esto...\n";
  return story; 
}

int main() 
{
  srand((unsigned) time(NULL));

std::set<int> usedNumbers;
std::set<int> usedNumbers2;
 vector<Friendly*>Amigos; 
 vector<Warrior*>Dioses; 
  Dioses.push_back(new Warrior("HADES","DIOS del Inframundo",1,45)); 
  Dioses.push_back(new Warrior("ZEUZ","DIOS del Rayo",100,150));
  Amigos.push_back(new Friendly("BOY","HUMANO",storyBoy())); 
  Amigos.push_back(new Friendly("PANDORA","HUMANA Y NIÑA",storyPandora()));

historia(); 


while(true){
cout<<"\n\n\nDigita 1 para continuar"<<endl; 
int gj;
cin>>gj;
int gjj=ChekeaDatoIngresado3(gj); 
if(gjj!=1){
  continue; 
}else{
  break; 
}
}



  
  cout<<"\t\tUN JUEGO POR JOSE IGNACIO PAEZ"<<endl; 
  sleep(3);

  ifstream archivo; 
  archivo.open("titulo.txt"); 
  string linea;
  while (std::getline(archivo, linea)) {
    cout << linea << endl;
    sleep(1);
  }
  int valor,vida,n,z,golpe,res,i,y;
  Warrior w1("KRATOS","SEMIGOD",200,50);
  

int opc; 
sleep(2);
while(opc!=4){
  ifstream arch; 
  arch.open("MENU.txt"); 
  string ti;
  while (std::getline(arch, ti)) {
    cout << ti << endl;
    sleep(0);
    }
  cin>>opc; 
  int w=ChekeaDatoIngresado2(opc); 
  if(w==1){
  int deba,vidaActual,r,pa; 
  pa=1;
  deba=200; 
  sleep(2);
  cout<<" BIENVENIDO Al OLIMPO"<<endl;
  sleep(2); 
  cout<<"\n\nTU PERSONAJE ES: "<<endl;
  cout<<"\n"<<w1; 
  sleep(3);
  ifstream arch; 
    arch.open("Kratos.txt"); 
    string ti;
    while (std::getline(arch, ti)) {
    cout << ti << endl;
    sleep(0);
    }
  z=1; 
  while(z!=0){
    if (pa==0){
      break; 
    }
    sleep(3);
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
    int T=ChekeaDatoIngresado3(r); 
    if(T==1){
    ifstream archi; 
    archi.open("Cuarto1.txt"); 
    string lin;
    while (std::getline(archi, lin)) {
    cout << lin << endl;
    sleep(1);
    }
    int s; 
    cin>>s;
    int ss=ChekeaDatoIngresado4(s); 
    if(ss==1){
      //cout<<w1.getHealth()<<endl; 
      valor=cierreDePuerta1(0); 
      if (valor>=1){
        cout<<"ESTE CAMINO YA HA SIDO CURZADO"<<endl; 
      }
      else{
      while(w1.getHealth()<=250){
        cout<<"\n\tAl acercarte parece inofensivo sin emabrgo"<<endl; 
        cout<<"\n\tPara interactuar con el te pide un numero del 1 a 5, "<<endl;
        cout<<"\n\tCuidado al dar tu numero, tu VIDA depende de ello"<<endl;  
        cin>>n;
        int f=ChekeaDatoIngresado(n);  
        
        if(f>3){
          Amigos[0]->imprimeAmigo(); 
          sleep(1); 
          sleep(1);
          Amigos[0]->recieve(f);
          sleep(1); 
          valor=Amigos[0]->animation(); 
          sleep(1); 
          w1+valor;
          std::string barra=w1.HealthPercentage();
          cout<<"BARRA DE SALUD"<<"\n"<<barra<<"\n";
          cout<<"\nDEBERAS SEGUIR RECORRIENDO"<<endl;
          int q; 
          cout<<"DIJITA 1 PARA CONTINUAR: "<<endl; 
          cin>>q;
          int qq=ChekeaDatoIngresado3(q); 
          if(qq==1)
          {
          break; }
          

        }else{
          Amigos[0]->imprimeAmigo();
          sleep(1); 
          Amigos[0]->recieve(f);
          sleep(1); 
          std::string barra=w1.HealthPercentage();
          cout<<"BARRA DE SALUD"<<"\n"<<barra<<"\n";
           cout<<"\nDEBERAS SEGUIR RECORRIENDO"<<endl;
          int k; 
          cout<<"DIJITA 1 PARA CONTINUAR: "<<endl; 
          cin>>k;
          int kk=ChekeaDatoIngresado3(k); 
          if(kk==1)
          {
          break; }
          
        }
      }
      
    
    }
  }else{
    cout<<"HAS DECIDIO NO INTERACTUAR"<<endl;
    sleep(1); 
    cout<<"Bajo tu propio riesgo...\n"<<endl; 
    int g; 
    cout<<"DIJITA 1 PARA CONTINUAR: "<<endl; 
    cin>>g;
    int gg=ChekeaDatoIngresado3(g); 
    

  }
  }else{
    cout<<"SALIENDO AL Menu.."<<endl;
    break;
  }
    sleep(2);
    ifstream arch; 
    arch.open("Calabozo.txt"); 
    string li;
    while (std::getline(arch, li)) {
    cout << li << endl;
    sleep(1);
    }
    sleep(3); 
    HADES(); 
    Dioses[0]->imprime();
    cout<<"\n\nNO te queda mas remedio que pelear"<<endl; 

    int v; 
    cout<<"DIJITA 1 PARA CONTINUAR: "<<endl; 
    cin>>v;
    int vv=ChekeaDatoIngresado3(v); 
    

    cout<<"\n\n\nRECUERDA QUE TU VIDA ES: "<<w1.getHealth()<<endl; 
    std::string barra=w1.HealthPercentage();
    cout<<"BARRA DE SALUD "<<w1.getNombre() <<":"<<"\n"<<barra<<"\n";
    
    
      bool avanzarSiguienteSeccion = false;
      for (int i=0;i<Dioses.size();i++){
        if(avanzarSiguienteSeccion==true){
        break; 
      }else if(Warrior* ptrC = dynamic_cast<Warrior *>(Dioses[i])){
      cout<<"\n\n\nLA VIDA DE "<<Dioses[i]->getNombre()<<" es: "<<Dioses[i]->getHealth()<<endl; 
      
        while(Dioses[i]->DeadOrAlive()==true){
          if(w1.DeadOrAlive()==false){
            cout<<"HAS MUERTO, LA SIGUIENTE PIENSA MEJOR TU CAMINO"<<endl; 
            std::string barra=w1.HealthPercentage();
            cout<<"BARRA DE SALUD"<<"\n"<<barra<<"\n";
            sleep(2); 
            //w1.setHealth(200); 
            Dioses[0]->setHealth(75);
            Dioses[1]->setHealth(100);
            z=0; 
            pa=0;
            avanzarSiguienteSeccion=true; 
            break;
            
          }
          else if(Dioses[i]->DeadOrAlive()==true){
            
            std::string barra=Dioses[i]->HealthPercentage();
            cout<<"BARRA DE SALUD "<<Dioses[i]->getNombre()<<":"<<"\n"<<barra<<"\n";
            sleep(2);
            vida=Dioses[i]->animation(); 
            sleep(2); 
            w1.recieve(vida); 
            sleep(2); 
            res=w1.getHealth(); 
            if(res!=0){
              std::string barra=w1.HealthPercentage();
              cout<<"BARRA DE SALUD "<<w1.getNombre()<<":"<<"\n"<<barra<<"\n";
              sleep(2); 
              cout<<"\nPARA RESPONDER CON UN GOLPE, DEBES DIGITAR UN NUMERO DEL UNO AL DIEZ"<<endl; 
              cout<<"\nDEPENDIENDO DE LA CANTIDAD QUE INGRESES, RESPONDERAS CON UN GOLPE"<<endl; 
              int n = GetUniqueInput(usedNumbers);
              usedNumbers.insert(n);
              //int d=ChekeaDatoIngresado(n);  
              if(n%2==0){
                golpe= w1.animation(); 
              sleep(2); 
              Dioses[i]->recieve(golpe); 
              if (Dioses[i]->DeadOrAlive()==false){
                  cout<<w1.getNombre()<<" HAS MATADO A "<<Dioses[i]->getNombre()<<endl; 
                  sleep(2); 
                  cout<<"TU SALUD ACTUAL ES DE "<<w1.getHealth()<<endl; 
                  sleep(2); 
                  std::string barra=w1.HealthPercentage();
                  cout<<barra<<"\n"; 
                  sleep(2); 
                  cout<<"\nDEBERAS SEGUIR RECORRIENDO"<<endl;
                  avanzarSiguienteSeccion = true; 
                  break;
                  
                   
              }

              }

              
              
            }else{
              std::string barra=w1.HealthPercentage();
              cout<<"BARRA DE SALUD"<<"\n"<<barra<<"\n"; 
              sleep(2); 
              //w1.setHealth(200); 
              Dioses[0]->setHealth(75);
              Dioses[1]->setHealth(100);
              z=0; 
              pa=0;
              gameOver();
              avanzarSiguienteSeccion=true; 
              break;
            }
      
        }else if(Dioses[i]->DeadOrAlive()==false){
          cout<<w1.getNombre()<<"HAS MATADO A"<<Dioses[i]->getNombre()<<endl; 
          sleep(2); 
          sleep(2); 
          break; 
        }
      }
      }
    }
    
    cout<<"\n\nPresiona 1 para continuar"<<endl; 
    int b; 
    cin>>b;
    int bb=ChekeaDatoIngresado3(b); 

  if(w1.getHealth()==0){
    w1.setHealth(200);
    break;}
    else{

    ifstream archi; 
    archi.open("path.txt"); 
    string lin;
    while (std::getline(archi, lin)) {
    cout << lin << endl;
    sleep(1);
    }
    sleep(1); 
    ifstream pp; 
    pp.open("Tunel.txt"); 
    string n;
    while (std::getline(pp, n)) {
    cout << n << endl;
    sleep(0);
    }
    cout<<"\nDECIDIRIAS INTERACTUAR ? \n1.SI \n2.NO"<<endl; 
    int s; 
    cin>>s;
    int w=ChekeaDatoIngresado4(s); 
    if(w==1){
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
       cin>>y;
        int fk=ChekeaDatoIngresado(y);  
        if(fk>3){
          Amigos[1]->imprime(); 
          Amigos[1]->recieve(y);
          sleep(1); 
          valor=Amigos[1]->animation(); 
          sleep(1); 
          w1+valor;
          std::string barra=w1.HealthPercentage();
          cout<<"BARRA DE SALUD"<<"\n"<<barra<<"\n"; 
          sleep(1); 

            //w1.printHealth(valor);
          cout<<"\nDEBERAS SEGUIR RECORRIENDO"<<endl; 
          int ji; 
          cout<<"DIJITA 1 PARA CONTINUAR: "<<endl; 
          cin>>ji;
          int jj=ChekeaDatoIngresado3(ji); 
          if(jj==1)
          {
          break; }
          

        }else{
          Amigos[1]->imprimeAmigo();
          Amigos[1]->recieve(y);
          sleep(1); 
          std::string barra=w1.HealthPercentage();
          cout<<"BARRA DE SALUD"<<"\n"<<barra<<"\n";
          cout<<"\nDEBERAS SEGUIR RECORRIENDO"<<endl;
          int m; 
          cout<<"DIJITA 1 PARA CONTINUAR: "<<endl; 
          cin>>m;
          int mm=ChekeaDatoIngresado3(m); 
          if(mm==1)
          {
          break; }
          
        }
      }
      
    
    }
  }else{
    cout<<"HAS DECIDIO NO INTERACTUAR"<<endl;
    sleep(1); 
    cout<<"Bajo tu propio riesgo...\n"<<endl; 
    
    int x; 
    cout<<"DIJITA 1 PARA CONTINUAR: "<<endl; 
    cin>>x;
    int xx=ChekeaDatoIngresado3(x); 
    
  }
  
  }
    
/*cout<<"\n\nPresiona 1 para continuar"<<endl; 
    int w; 
    cin>>w;
    int f=ChekeaDatoIngresado3(w); */
  if(w1.getHealth()<=50){
    sleep(3); 
    cout<<"\n TU VIDA ES DEMASIADO BAJA PARA AVANZAR,\n"<<endl; 
    sleep(3); 
    cout<<"\nDEBERAS VOLVER A JUGAR Y ADMINISTRAR MEJOR TU VIDA\n\n"<<endl; 
    sleep(3);
    w1.setHealth(200); 
    Dioses[0]->setHealth(75);
    Dioses[1]->setHealth(100);
    break;}
    else{
    sleep(2); 
    ifstream arch; 
    arch.open("olimpo.txt"); 
    string li;
    while (std::getline(arch, li)) {
    cout << li << endl;
    sleep(1);
    }

    sleep(1);

    ZEUS(); 


    Dioses[1]->imprime();  

    sleep(1); 
    int h; 
    cout<<"DIJITA 1 PARA CONTINUAR: "<<endl; 
    cin>>h;
    int hh=ChekeaDatoIngresado3(h); 
    


    cout<<"\n\n\nRECUERDA QUE TU VIDA ES: "<<w1.getHealth()<<endl; 
    std::string barra=w1.HealthPercentage();
    cout<<"\nBARRA DE SALUD "<<"\n"<< barra <<"\n";
    
      bool avanzarSiguienteSeccion = false;
      for (int i=1;i<Dioses.size();i++){
        if(avanzarSiguienteSeccion==true){
        break; 
      }else if(Warrior* ptrC = dynamic_cast<Warrior *>(Dioses[i])){
      cout<<"\n\n\nLA VIDA DE "<< Dioses[i]->getNombre() <<" es: "<< Dioses[i]->getHealth() <<endl; 
      
        while(Dioses[i]->DeadOrAlive()==true){
          if(w1.DeadOrAlive()==false){
            std::string barra=w1.HealthPercentage();
            cout<<"\nBARRA DE SALUD"<<"\n"<<barra<<"\n";
            cout<<"\nHAS MUERTO, LA SIGUIENTE PIENSA MEJOR TU CAMINO"<<endl; 
            //w1.setHealth(200); 
            Dioses[0]->setHealth(75);
            Dioses[1]->setHealth(100);
            sleep(2); 
            z=0; 
            pa=0;
            avanzarSiguienteSeccion=true; 
            break;
            
          }
          else if(Dioses[i]->DeadOrAlive()==true){
            std::string barra=Dioses[i]->HealthPercentage();
            cout<<"BARRA DE SALUD "<<Dioses[i]->getNombre()<<":"<<"\n"<<barra<<"\n";
          
            sleep(2);
            vida=Dioses[i]->animation(); 
            sleep(2); 
            w1.recieve(vida); 
            sleep(2); 
            res=w1.getHealth(); 
            if(res!=0){

              sleep(2); 
              std::string barra=w1.HealthPercentage();
              cout<<"\nBARRA DE SALUD "<<w1.getNombre()<<":"<<"\n"<<barra<<"\n";
              cout<<"\nPARA RESPONDER CON UN GOLPE, DEBES DIGITAR UN NUMERO DEL UNO AL DIEZ"<<endl; 
              cout<<"\nDEPENDIENDO DE LA CANTIDAD QUE INGRESES, RESPONDERAS CON UN GOLPE"<<endl; 
              int n = GetUniqueInput2(usedNumbers2);
              usedNumbers2.insert(n);
              //int d=ChekeaDatoIngresado(n);  
              if(n%2==1){
                golpe= w1.animation(); 
              sleep(2); 
              Dioses[i]->recieve(golpe); 
              if (Dioses[i]->DeadOrAlive()==false){
                  cout<<w1.getNombre()<<" HAS MATADO A "<<Dioses[i]->getNombre()<<endl; 
                  sleep(2); 
                  cout<<"TU SALUD ACTUAL ES DE "<<w1.getHealth()<<endl; 
                  sleep(2); 
                  std::string barra=w1.HealthPercentage();
                  cout<<"\nBARRA DE SALUD"<<"\n"<<barra<<"\n";

                  victoria();
                  w1.setHealth(200); 
                  Dioses[0]->setHealth(75);
                  Dioses[1]->setHealth(100);
                  sleep(2); 
                  avanzarSiguienteSeccion = true; 
                  break; 
              }

              }

              
            }else{

              gameOver(); 
              Dioses[0]->setHealth(75);
              Dioses[1]->setHealth(100);

              sleep(2); 
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

    }
    if(w1.getHealth()==0){
      cout<<"Digita 1 para regresar"<<endl; 
      w1.setHealth(200); 
      int rr; 
      cin>>rr;
      int ff=ChekeaDatoIngresado3(rr); 
      if(ff==1)
      {cout<<"REGRESANDO AL MENU..."<<endl; 
      break;}
      break; 
    }
  cout<<"Digita 1 para regresar"<<endl; 
  int rr; 
  cin>>rr;
  int ff=ChekeaDatoIngresado3(rr); 
  if(ff==1)
  {cout<<"REGRESANDO AL MENU..."<<endl; 
  break;}

  }
  
  }
else if(w==2){
    ifstream archivo; 
    archivo.open("historia.txt"); 
    string linea;
    while (std::getline(archivo, linea)) {
      cout << linea << endl;
      sleep(1);
    }
    cout<<"DIGITA 1 PARA REGRESAR"<<endl; 
    cin>>n; 
    int nn=ChekeaDatoIngresado4(n);
    
    
  }else if(w==3){
    ifstream archivo; 
    archivo.open("Autor.txt"); 
    string linea;
    while (std::getline(archivo, linea)) {
      cout << linea << endl;
      sleep(1);}
      cout<<"DIGITA 1 PARA REGRESAR"<<endl; 
      cin>>n; 
      int nn=ChekeaDatoIngresado4(n); 
    

  }else if(w==4){
    cout<<"SALIENDO..."<<endl; 
    break; 
  }else{
    cout<<"DIGITA UNA OPCION VALIDA: "<<endl; 
    cin>>opc; 
  }
  }

}




