//Kellie Henderson, UNIT 8 Assignment, Dr_T, 10/4/2019
// COSC 1436-57005

#include <iostream>
#include<string>
using namespace std;

struct car
{
string make;
string model;
int year;
string color;
};

void colorChanger(car *c);

int main() 
{
/*car car1;
car1.make = "Volkswagon";
car1.model = "Passat";
car1.year = 2009;
*/
// input the make, model, and year of your car
car car1 = {"VW", "Passat", 2016};
car car2 = {"VW", "Jetta", 2001};
car car3 = {"VW", "GLI", 2019};

colorChanger(&car1);
colorChanger(&car2);
colorChanger(&car3);
// output what color the car is 
cout << "Your car's color is: " << car1.color << endl;
cout << "Your car's color is: " << car2.color << endl;
cout << "Your car's color is: " << car3.color << endl;

// call the new car
car newCar;
newCar.year = 2020;
car *p_newCar = &newCar;
new(p_newCar) car;
cout << p_newCar -> year << endl; 

new(p_newCar) car();
cout << p_newCar -> year << endl; 




return 0;
}
// make a function that changes the colors of the car
void colorChanger (car *c)
{
/*  if(c-> year > 2010)
  {
    c -> color = "Gray";
    }
  else 
  {
    c -> color = "Black";
    } */
  c -> year > 2010 ? c -> color = "Green" : c -> color = "Red";
}

