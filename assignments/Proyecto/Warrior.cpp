#include "Warrior.hpp"

Warrior::Warrior(){
    maxHealth=40; 
    maxDamage=40;
}

Warrior::Warrior(std::string n, std::string d, int h, int D):Personaje(n,d){
    maxHealth=h; 
    maxDamage=D; 
}

void Warrior::setHealth(int maxHealth_){
    maxHealth=maxHealth_; 
}

void Warrior::setDamage(int maxDamage_){
    maxDamage=maxDamage_; 
}

int Warrior::getDamage()const{
    return maxDamage; 
}

int Warrior::getHealth()const{ 
    return maxHealth; 
}

bool Warrior::DeadOrAlive(){
    if(getHealth()>0){
        std::cout<<"\t"<<getNombre()<<std::endl; 
        std::cout<<"================================"<<std::endl; 
        std::cout<<"\t"<<"VIVO"<<std::endl;
        std::cout<<" ================================"<<std::endl; 
        return 1; 
    }else{
        std::cout<<"\t"<<getNombre()<<std::endl; 
        std::cout<<"================================"<<std::endl; 
        std::cout<<"\t"<<"MUERTO"<<std::endl;
        std::cout<<" ================================"<<std::endl; 
        return 0; 
    }
}

/*int Warrior::HealthPercentage(){
    int health; 
    health=getHealth(); 
    char arrBar[20]={"###################"}; 
    if(health!=maxHealth){
        for (int i = 0; i < sizeof(arrBar); i++){
            
        }
    
    }
    }*/

    void Warrior::printHealth(){
        std::cout<<"La salud actual de "<< getNombre() <<" es de "<<getHealth()<<std::endl; 
    }

    void Warrior::printPercentage(){
        imprime(); 
        //getHealth()
        //HealthPercentage(); 
    }

    int Warrior::animation(Personaje& p1){
        #include <cstdlib> 
        srand((unsigned) time(NULL));
        int random = (rand() % maxHealth);
        std::cout<<"\t"<<getNombre()<<std::endl; 
        std::cout<<"======================================"<<std::endl; 
        std::cout<<"\tATACO CON "<< random <<" de PODER"<<std::endl;
        std::cout<<" ================================"<<std::endl; 
        int health; 
        recieve(random,p1); 
    }

    void Warrior::recieve(int hit,Personaje& p1){
        std::cout<<"\t"<<p1.getNombre()<<std::endl; 
        std::cout<<"======================================"<<std::endl; 
        std::cout<<" RECIBISTE "<< hit <<" de daño"<<std::endl;
        std::cout<<" ================================"<<std::endl; 
        int res; 
        res=getHealth()-hit; 
        if(res>0){
            setHealth(res);
            //HealthPercentage();
        }else{
            setHealth(0);
            DeadOrAlive(); 
        }

    }