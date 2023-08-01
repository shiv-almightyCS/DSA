#include<bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;

class Hero{
    // By default accessmodifier
    //Properties
    private:
    int helth;
    public:
    char *name;
    char level;
    static int timeToComplete;

    // Default constructor
    Hero(){
        cout<<"Default constructor called"<<endl;
        name = new char[100];
    }
    // Parameterized constructor
    Hero(int helth,char level){
        this->helth=helth;
        this->level=level;
    }

    // Default copy constructor is shallow copy
    // Copy constructor and this is deep copy

    Hero(Hero& temp){

        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        this->helth=temp.helth;
        this->level=temp.level;
    }

    //Destructor 

    ~Hero(){
        cout<<endl;
        cout<<"Destructor called"<<endl;
    }

    //static function
    /*  Properties of static function
    
    ->static function can only access static members
        ->No need to creat an object
        ->they don't have this keyword because this keyword is pointer to current object but here no object
    */
    static int random(){
        return timeToComplete;
    }

    //getter functions


    int getHelth(){
        return helth;
    }

    char getLevel(){
        return level;
    }

    //setter functions

    void setName(char name[]){
        strcpy(this->name,name);
    }
    
    void setHelth(int h){
            helth=h;
    }

    void setLevel(char l){
        level=l;
    }

    void print(){
        cout<<endl;
        cout<<"Name : "<<this->name<<endl;
        cout<<"Helth : "<<this->helth<<endl;
        cout<<"Level : "<<this->level<<endl;
    }
};

int  Hero::timeToComplete=10;

int main(){
    //static creation of objects
    // Hero h1; //constructor called at the time of object creation 
    // h1.print();
    // dynamic creation of objects
    // Hero *h2=new Hero(50,'B');
    // (*h2).print();
    // Hero h3(70,'C');
    // cout<<endl<<sizeof(h1)<<endl;
    // h1.setHelth(100);
    // h1.setLevel('A');
    // cout<<endl<<"Helth of h1 is"<<h1.getHelth()<<endl;
    // cout<<"Level of h1 is "<<h1.getLevel()<<endl;

    // cout<<"Helth of Hero h2 is "<<(*h2).getHelth()<<endl;
    // cout<<"Level of Hero h2 is "<<(*h2).level<<endl;

    // h3.print();

    // Hero h4(h3); //h4 is copy of h3 and it makes shallow copy 

    // h4.print();

    // Hero hero1; //Static  creation of object and for static allocation destructor will called autometically
    // hero1.setHelth(100);
    // hero1.setLevel('A');
    // char name[10]="Shiv";
    // hero1.setName(name);
    // hero1.print();

    // Hero hero2(hero1);
    // hero2.print();

    // hero1.name[1]='a';
    // hero1.print();

    // hero2.print();
    //Dynamic creation of object
    // Hero *hero2=new Hero(); //for dynamic allocation destructor will not called autometically

    // delete hero2;//we will have to manually call the destructor
    cout<<Hero::timeToComplete<<endl;//we can access the static variable using object but that is not recomandable because static member belong to the class

    cout<<Hero::random()<<endl;

    

}