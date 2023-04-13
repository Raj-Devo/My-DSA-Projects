#include <iostream>
#include <string>
using namespace std;
class   Animal
{
    //State or Properties--
    private :
    int weight;
    public : 
    string type;
    int age;


    //Functions or Properties--
    void eat()
    {
        cout <<"Eating : " <<endl;
    }

    void sleep()
    {
        cout <<"Sleeping :" <<endl;
    }


    void setWeight(int weight)
    {
        this -> weight = weight;
    }

    void getWeight()
    {
        cout <<"Weight : "  <<weight <<endl;
    }

    //Constructor--


     //Type 1 : without parameters--
    //  Animal ()
    //  {
    //     this ->age = 20;
    //     this ->type = "lion";
    //     cout <<"constructor type 1 called" <<endl;
    //  }

//    Type 2 : with parameteres--
    Animal(int age , string type)
    {
          this -> age = age;
          this -> type = type;
          cout<<"Constructor type 2 called" <<endl;
    }


    //Type 3 : copy constructor--
    // Animal (Animal &a)
    // {
    //     this -> age = a.age;
    //     this -> type = a.type;
    //     cout << "copy constructor called" <<endl;
    // }

    //Destructor --
    ~Animal()
    {
        cout <<"I am inside destructor" <<endl;
    }
};
int main(int argc, char const *argv[])
{
    // //Static object making--
    // Animal sreeja;
    // sreeja.age = 19;
    // sreeja.type = "cat";
    // sreeja.setWeight(100);
    // sreeja.getWeight();
    // cout <<"Age : " <<sreeja.age <<endl;
    // cout <<"Type: " <<sreeja.type <<endl;
    // sreeja.eat();
    // sreeja.sleep();
    // //

    // cout <<"=======================" <<endl;


    // //Dynamic object making--
    // Animal* raj = new Animal;
    // raj ->age = 19;
    // raj ->type = "lion";
    // raj ->setWeight(120);
    // raj ->getWeight();
    // cout <<"Age : " <<raj->age <<endl;
    // cout <<"Type: " <<raj->type <<endl;
    // raj -> eat();
    // raj -> sleep();
    // Animal* jadu = new Animal;
    // cout <<"Age : " <<jadu-> age <<endl;
    // cout <<"Type : " <<jadu-> type <<endl;


    // Animal raj(23 , "lion");
    // cout <<raj.age <<endl;
    // cout <<raj.type <<endl;
    // Animal *sreeja = new Animal(25 , "cat");
    // cout <<sreeja -> age <<endl;
    // cout <<sreeja -> type <<endl;
  

  //Object copy--
    //  Animal* raj = new Animal(20 , "lion");
    // Animal sreeja = *raj;
    // Animal jadii(*raj);

    Animal raj(10 , "lion");
    Animal *sreeja = new Animal (20 , "cat");


    //Manually  calling destructor--
    delete sreeja;
    return 0;
}
