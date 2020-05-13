#include <iostream>


struct Food
{
    virtual int get_calories() = 0;
};

struct Fish:Food //наследование от Food
{
    int calories;
    int get_calories()
    {
        return calories;
    }
};

struct Animal
{
    virtual void feed(Food* food) = 0;
    virtual void walk() = 0;
    virtual void wash() = 0;
};


struct Cat:Animal
{
  int health;
  int happiness;
  int clean;

  void feed(Food* food) override
  {
      health += food.get_calories();
      happiness += food.get_calories();
  }

  void wash() override
  {
      clean += 12;
      health += 20;
  }

  void walk() override
  {
      happiness += 15;
  }
};

struct Dog:Animal
{
  int health;
  int happiness;
  int clean;

  void feed(Food* food) override
  {
      health += food.get_calories();
      happiness += food.get_calories();
  }

  void wash() override
  {
      clean += 42;
      health += 30;
  }

  void walk() override
  {
      happiness += 150;
  }
};

enum Animals{Cat, Dog};
Animal* Create_animal(Animals type)
{
    switch(type)
    {
    case(Animals::Cat):
        {
            return new Cat();
        }
    case(Animals::Dog):
        {
            return new Dog();
        }
    }
}

int main()
{
   // Animal a = new Dog();
    //a->feed(new Fish());
    Animals* a = Create_animal(Cat) //фабричный метод
    return 0;
}
