#include<string>
using namespace std;
class Person {
private:
static const int  LIMIT = 25;
string lname;                              // Person’s last name
char fname[LIMIT];                         // Person’s first name
int age;                                    //person's age
int year;                                   //person's birth year
public:
         Person() {lname = ""; fname[0] = ‘\0’; }               // #1
         Person(const string & ln, const char * fn = "Heyyou"); // #2
                                                                // the following methods display lname and fname
         void Show() const;                   // firstname lastname format
         void FormalShow() const;             // lastname, firstname format
         Person (string name = "",int age,double year); 
		 //declaration functions
		 Person() {
			 lname = ""; 
			 fname[0] = ‘\0’;
		 }
		 Person(string name) {
		 }
		 Person(const string & ln, const char * fn = "Heyyou"){
			 lname=ln;
			 fname -> *fn;
		 }
		 Person (string ln = "",int x,int y){
			 age=x;
			 year=y;
		 }
		 void Show() const{
		 }
		 void FormalShow() const  {
		 } 
 };
void main(){
Person a;                          // use default constructor of zero arguments
Person b("adel");                  // constructor of 1 arguments
Person c("Smythecraft",?);           // constructor of 2 arguments
Person d("Dimwiddy", 13,2015);     // constructor of 3 arguments
 
a.Show();
b.Show();
c.Show();
d.Show();

a.FormalShow();
b.FormalShow();
c.FormalShow();
d.FormalShow();
cout<<a<<b<<c<<d<<endl;

}