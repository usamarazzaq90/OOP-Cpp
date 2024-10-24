#include <iostream>
#include <math.h>
using namespace std;

class Point{
	int x,y;
	friend void distance(Point, Point);
	public:
		Point(int a, int b){
			x=a;
			y=b;
		}
		void displayPoint(){
			cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
		}
};

void distance(Point p1, Point p2){
	int distance;
	int x1,x2,y1,y2;
	x1=p1.x;
	y1=p1.y;
	x2=p2.x;
	y2=p2.y;
	distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	cout<<"The distance between two points is "<<distance<<endl;
}

int main(){
	Point p(0,1);
	p.displayPoint();
	
	Point q(0,6);
	q.displayPoint();
	
	distance(p,q);
	
	return 0;
}