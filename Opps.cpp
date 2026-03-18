#include<iostream>

using namespace std;

 class teacher {
     private:
      double salary;
     
     public:
        //properties or attributes
        string name;
        string dept;
        string subject;
       
        //Non perameterized constructor
        teacher(){
            dept="Computer science";
        }

        // Perameterized constructor
        teacher(string n , string d, string s ,double sal){
            name = n;
            dept = d;
            subject = s;
            salary = sal;

        }

      
       
       
        void display() {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
   
    //Setter
    void setsalary(double s){
        salary=s;
    }
    //Getter
    double getsalary(){
        return salary;
    }
    };

    
        class account{
             private:
            string account_holdername;
            double balance;  // Data hiding in encapsulation
        };
   
    class students{
        public:
        string name;
        string classs;
       
       
    };

int main()
{
   teacher t1("Nitin","Computer science ","C++",25000);
   
   
   teacher t2;
   t2.name = "Rahul";
   t2.dept = "Data science";
   t2.subject = "C";
   t2.setsalary(50000);
   
   students s1;
   s1.name = "Abdul";
   s1.classs = "4th year";
   
       t1.display();
       t2.display();
       cout<<"This is for student class"<<endl;
       cout<<s1.name<<endl<<s1.classs<<endl<<t1.dept<<endl;
       
     
       
    return 0;
}
