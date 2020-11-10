#include <iostream>
//the game
int main() {
  //the first code and the indroduction
  std::cout << "hello to life++ a life game made in c++\n";
  std::string gamemode;
  std::cout<<"type your gamemode(hard/easy/how to play/credits)\n";
  std::cin>>gamemode;
  if(gamemode == "easy"){
    //when you are born
    std::cout<<"you are born!"<<std::endl;
    std::cout<<"##status##"<<std::endl;
    std::cout<<"health = 100\n";
    std::cout<<"hunger = no\n";
    std::cout<<"skill = 0%\n";
    std::cout<<"\n";
    std::cout<<"you got home and you are hungry, your mom is tring to eat you\n";
    std::cout<<"do you want to eat?(yes/no)\n";
    std::string wanteat1;
    std::cin>>wanteat1;
    if(wanteat1 == "yes"){
      std::cout<<"\n";
      std::cout<<"you are Ate it\n";
      std::cout<<"\n";
      std::cout<<"##status##"<<std::endl;
      std::cout<<"health = 100%\n";
      std::cout<<"hunger = no\n";
      std::cout<<"skill = 0%\n";
      std::cout<<"\n";
      std::cout<<"you reached level 1!";
      int level;
      level = 1;
    }else if(wanteat1 == "no"){
      std::cout<<"\n";
      std::cout<<"you not ate it";
      std::cout<<"\n";
      std::cout<<"##status##"<<std::endl;
      std::cout<<"health = 90%\n";
      std::cout<<"hunger = 100%";
      std::cout<<"skill = 0%";
      std::cout<<"\n";
      std::cout<<"you got home and you are hungry, your mom is tring to eat you\n";
      std::cout<<"do you want to eat?(yes/no)\n";
      std::string wanteat1;
      std::cin>>wanteat1;
      if(wanteat1 == "yes"){
        std::cout<<"\n";
        std::cout<<"you are Ate it\n";
        std::cout<<"\n";
        std::cout<<"##status##"<<std::endl;
        std::cout<<"health = 100%\n";
        std::cout<<"hunger = no\n";
        std::cout<<"skill = 0%";
        std::cout<<"\n";
      }else if(wanteat1 == "no"){
        std::cout<<"\n";
        std::cout<<"you not ate it";
        std::cout<<"\n";
        std::cout<<"XP";
        std::cout<<"\n";
      }
    }
    std::cout<<"you reach to level 1"<<std::endl;
    std::cout<<"##what you get##"<<std::endl;
    std::cout<<"ability to walk\n";
    std::cout<<"ability to Chewing\n";
    std::cout<<"do you want to sleep?(yes/no)";
    std::string wantsleep1;
    std::cin>>wantsleep1;
    if(wantsleep1 == "yes"){
      std::cout<<"you are sleeped"<<std::endl;
      std::cout<<"##status##"<<std::endl;
      std::cout<<"health = 100%\n";
      std::cout<<"hunger = no\n";
      std::cout<<"sleep = no\n";
      std::cout<<"skill = 2%\n";
    }else if(wantsleep1 == "no"){
      std::cout<<"you are not sleeped\n";
      std::cout<<"##status##"<<std::endl;
      std::cout<<"health = 90\n";
      std::cout<<"hunger = no\n";
      std::cout<<"sleep = 1%\n";
      std::cout<<"skill = 2%\n";
      std::cout<<"\n";
    }
    std::cout<<"you reached level 2\n";
    std::cout<<"ability to talk\n";
    std::cout<<"ability to write\n";
    std::cout<<"ability to grab\n";
    std::cout<<"ability to drink\n";
    std::cout<<"\n";
    std::cout<<"your mother is asking what is this letter(A)\n";
    std::string eduans1;
    std::cin>>eduans1;
    std::cout<<"//hint:- type the same letter or the word\n";
    if(eduans1 == "a" or "A"){
      std::cout<<"yes you have +1 skill\n";
    }else{
      std::cout<<"no you have +0 skill\n";
    }
    std::cout<<"your mother is asking what is this";
    std::cout<<"  |\n";
    std::cout<<"  |\n";
    std::cout<<"__|\n";
    std::cout<<"| |\n";
    std::string eduans2;
    std::cin>>eduans2;
    if(eduans2 == "chair"){
      std::cout<<"yes you got +1 skill\n";
    }else{
      std::cout<<"no you got +0 skill\n";
    }
    if(eduans1 == "a" or "A" || eduans2 == "chair"){
      std::cout<<"error ::no more::\n";
    }
  } 
}