#include<iostream>
using namespace std;
// Define a class Country that store the name of the country; its population and area.
// Create 2 or 3 objects of this class and find the county with largest population and the country which is geographically largest.

class country{
    string name;
    int population;
    double area;
    public:
    country(string n,int p,double a){
        name = n;
        population = p;
        area = a;
    }
    string getName(){
        return name;
    }
    int getPopulation(){
        return population;
    }
    double getArea(){
        return area;
    }
   };

   int main(){
    country c1("India",20000000,5.14);
    country c2("USA",10000000,1.14);
    country c3("China",30000000,4.14);

    //Largest population

    if(c1.getPopulation()>c2.getPopulation() && c1.getPopulation()>c3.getPopulation()){
        cout << "\nLargest population: " << c1.getName();
    }
    else if(c2.getPopulation()>c3.getPopulation() && c2.getPopulation()>c1.getPopulation()){
        cout << "\nLargest population: " << c2.getName();
    }
    else{
        cout << "\nLargest population: " << c3.getName();
    }

    //largest geographical area

    if(c1.getArea()>c2.getArea() && c1.getArea()>c3.getArea()){
        cout << "\nLargest geographical area: " << c1.getName();
    }
    else if(c2.getArea()>c3.getArea() && c2.getArea()>c1.getArea()){
        cout << "\nLargest geographical area: " << c2.getName();
    }
    else{
        cout << "\nLargest geographical area: " << c3.getName();
    }

   return 0;
}
