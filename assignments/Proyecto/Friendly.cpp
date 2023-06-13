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

int Friendly::animation(){
    std::string string,nom;
    int res; 
    res=0; 
    if (estatus()<=30){
        nom=getNombre();
        std::cout<<"\t\n"<< nom<<std::endl;
        string="NO ESTA DISPUESTO A HABLAR !";
        std::cout<<"================================"<<std::endl; 
        std::cout<<string<<std::endl;
        std::cout<<"================================"<<std::endl; 
        return res; 
    }else{ 
       
        string=getStory(); 
        nom=getNombre();
        std::cout<<"\t\n"<< nom<<std::endl;
        std::cout<<"================================"<<std::endl; 
        std::cout<<" La historia de "<<getNombre()<<" es:"<<std::endl;
        std::cout<<"\t"<<string<<std::endl;
        std::cout<<"================================"<<std::endl; 
        #include <cstdlib> 
        srand((unsigned) time(NULL));
        int random = (1+ rand() % 5)*5;
        
        
        return random; 
        /*int res; 
        res=p1.getHealth()+random*5; 
        if(res>0){
            setHealth(res);
            */
            //HealthPercentage();
        }
        //recieve(random,p1); 
        
        
}



void Friendly::recieve(int donation){
    if(donation>3){
        //std::cout<<p1.getNombre()<<"Has recibido" << donation*5 <<"puntos de vida" <<std::endl;
        //std::cout<<getNombre()<<" Has recibido " << donation <<" puntos de vida " <<std::endl;
        std::cout<<"CANTIDAD NECESARIA PARA INTERACTUAR"<<std::endl;  
        
    }else{ 
        std::string nom; 
        nom=getNombre();
        std::cout<<"\n\t  "<< nom <<std::endl;
        std::cout<<"================================"<<std::endl; 
        std::cout<<"\t"<<"ESTA DORMIDO"<<std::endl;
        std::cout<<"================================"<<std::endl; 
    }
}

void Friendly::imprimeAmigo(){
    imprime(); 
    
}

