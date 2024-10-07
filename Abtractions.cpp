//  focus on the main charactoristics 

#include <iostream>
#include <vector>

using namespace std;

class Person{
    private:
        string name;
        string address;
    public:
        string getName(){
            return name;
        }
        string getAddress(){
            return address;
        }
        void setName(string name){
            this -> name;
        }
        void setAddress(string address){
            this -> address;
        }
        friend ostream& operator<< (ostream&, Person);
        friend istream& operator>> (istream&, Person&)
};

class Student: public Person{
    private:
        float gpa;
    public:
        float getGpa(){
            return gpa;
        }
        void setGpa(float gpa){
            this -> gpa = gpa;
        }    
};

class Lecturer: public Person{
    private: 
        double salary;
};



int main(){

}