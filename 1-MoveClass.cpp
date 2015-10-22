#include<iostream>
using namespace std;
class Move{
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);             // sets x, y to a, b
    showmove() const;                             // shows current x, y values
    Move add(const Move & m) const;              
    reset(double a = 0, double b = 0);           // resets x,y to a, b
	//_______________________________________________________________________________________________________________________________
// functions definitions 
    void  Move(double a = 0.0, double b = 0.0){
	      x=a;
	      y=b;
        }
    double showmove(double x,double y) const{
		cout<<"x & y are " <<endl;}
// this function adds x of m to x of invoking object to get new x,
Move add(const Move & m) const{
	x+=m;
}
// adds y of m to y of invoking object to get new y, creates a new
Move add(const Move & m) const{
	y+=m;
}
// move object initialized to new x, y values and returns it
Move add(const Move & m) const{
	c=x;
	c=y;
	return;
}

};

void main(){
	a.Move(x,y);
	cout<<<<endl;
	a.showmove(x,y);
}