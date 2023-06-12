#include "Friendly.hpp"

Friendly::Friendly(){
    story="-"; 
}
Friendly::Friendly(std::string n,std::string d,std::string s):Personaje(n,d){//:Personaje(n,d)
    story=s; 
}

std::string Friendly::getStory()const{
    return story; 
}

void Friendly::setStory(std::string story_){ 
    story=story_;
}

int Friendly::estatus(){
    #include <cstdlib> 
    std::string string;
    srand((unsigned) time(NULL));
    int random = (rand() % 100);
    return random; 
    }

int Friendly::animation(Personaje& p1){
    std::string string;
    int res; 
    res=0; 
    if (estatus()<=30){
        string="NO ESTA DISPUESTO A HABLAR !";
        std::cout<<"================================"<<std::endl; 
        std::cout<<"\t"<<string<<std::endl;
        std::cout<<"================================"<<std::endl; 
        return res; 
    }else{ 
        string=getStory(); 
        std::cout<<"================================"<<std::endl; 
        std::cout<<"La historia de "<<getNombre()<<" es:"<<std::endl;
        std::cout<<"\t"<<string<<std::endl;
        std::cout<<"================================"<<std::endl; 
        #include <cstdlib> 
        srand((unsigned) time(NULL));
        int random = (rand() % 5);
        std::cout<<p1.getNombre()<<" Has recibido " << random*5 <<" puntos de vida " <<std::endl;
        //std::cout<<p1.getNombre()<<" Tu nueva salud es: "<<p1.getHealth()<<std::endl;
        //recieve(random,p1); 
        
        
}

}

void Friendly::recieve(int donation,Personaje& p1){
    if(donation>3){
        //std::cout<<p1.getNombre()<<"Has recibido" << donation*5 <<"puntos de vida" <<std::endl;
        animation(p1);
    }else{ 
        std::string nom; 
        nom=getNombre();
        std::cout<<"\t"<<nom<<std::endl;
        std::cout<<"================================"<<std::endl; 
        std::cout<<"\t"<<"ESTA DORMIDO"<<std::endl;
        std::cout<<"================================"<<std::endl; 
    }
}

void Friendly::imprimeAmigo(){
    imprime(); 
    
}

