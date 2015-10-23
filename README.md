# test1
1. What is a class?
is the single most important C++ enhancement for implementing these features
and tying them together. is a C++ vehicle for translating an abstraction to a user-defined type. It combines data representation and methods for manipulating that data into one neat package.
______________________________________________________________________________

2. How does a class accomplish abstraction, encapsulation, and data hiding?
First of all, let's define each term then i'll mention how we use them . 
abstraction :is the crucial step of representing information in terms of its interface with the user.
by typing all prototypes of methods in private .
encapsulation :Gathering the implementation details together and separating them from the abstraction. by putting all methods in a separated header with their operations.
data hiding : is the insulation of data from direct access by a program. is an
instance of encapsulation. by typing all data members which are all variables in private section .
_______________________________________________________________________________
3. What is the relationship between an object and a class?
Class is the main model or template which i design it to create many objects from it by taking many features which are represented by methods . Overall object is copy from class with some attributes.
_____________________________________________________________________________
4. In what way, aside from being functions, are class function members different from class data members?
yes, class function members ,we mean the functions of implementation in header file but class data members are related to variable declaration in private part and also all function prototypes in public part.  __________________________________________________________________________________
5. Define a class to represent a bank account. Data members should include the
depositor’s name, the account number (use a string), and the balance. Member functions should allow the following:
n Creating an object and initializing it.
n Displaying the depositor’s name, account number, and balance
n Depositing an amount of money given by an argument
n Withdrawing an amount of money given by an argument
Just show the class declaration, not the method implementations. (Programming
Exercise 1 provides you with an opportunity to write the implementation.)
Programming Exercises 559
_________________________________________________________________________________
6. When are class constructors called? When are class destructors called?
A constructor: is called by creating any object of this class.
Destructor : when an object is assigned and operation is finished, then destructor delets this object from memory . 
__________________________________________________________________________________
7. Provide code for a constructor for the bank account class from Chapter Review
Question 5.
_________________________________________________________________________
8. What is a default constructor? What is the advantage of having one?
- It has no arguments, and it is used if you create an object without
explicitly initializing it. If you fail to provide any constructors, the compiler defines a
default constructor for you. Otherwise, you have to supply your own default constructor.
-is that the compiler provides one only if you
don’t define any constructors.After you define any constructor for a class, the responsibility
for providing a default constructor for that class passes from the compiler to you.
_____________________________________________________________________________
9. Modify the Stock class definition (the version in stock20.h) so that it has member functions that return the values of the individual data members. 
Note:A member that returns the company name should not provide a weapon for altering the array.
That is, it can’t simply return a string reference. It could return a const reference.
________________________________________________________________________________
10. What are this and *this?
this : a curious C++ pointer when a method might need to deal with two objects
*this : What you want to return, however, is not this because this is the address of the object.You want to return the object itself, and that is symbolized by *this.
______________________________________________________________________________
Programming Exercises
______________________
1. Provide method definitions for the class described in Chapter Review Question 5
and write a short program that illustrates all the features.
________________________________________________________________________________
2. Here is a rather simple class definition:
class Person {
private:
static const LIMIT = 25;
string lname; // Person’s last name
char fname[LIMIT]; // Person’s first name
public:
Person() {lname = ""; fname[0] = ‘\0’; } // #1
Person(const string & ln, const char * fn = "Heyyou"); // #2
// the following methods display lname and fname
void Show() const; // firstname lastname format
void FormalShow() const; // lastname, firstname format
};
(It uses both a string object and a character array so that you can compare how
the two forms are used.) Write a program that completes the implementation by
providing code for the undefined methods.The program in which you 
