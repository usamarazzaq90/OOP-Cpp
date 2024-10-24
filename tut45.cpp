//Virtual Base Class (Code example)

#include <iostream>
using namespace std;
/*
student --> test
student --> sports
test-->result
sports-->result

*/
class Student{
	protected:
		int roll_no;
	public:
		void set_number(int a){
			roll_no=a;
		}
		void print_number(){
			cout<<"Your roll no is "<<roll_no<<endl;
		}
};

class Test: virtual public Student{    //vrtual public or public virtual, order doesn't matter
	protected:
		float maths,physics;
		public:
			void set_marks(float m1, float m2){
				maths=m1;
				physics=m2;
			}
			void print_marks(){
				cout<<"Your result is here"<<endl
					<<"Maths: "<<maths<<endl
					<<"Physics: "<<physics<<endl;
			}
};

class Sports:public virtual Student{
	protected:
		float score;
	public:
		void set_score(float sc){
			score=sc;
		}
		void print_score(){
			cout<<"Your PT score is "<<score<<endl;
		}
};

class result: public Test, public Sports{
	float total;
	public:
		void display(){
			total=maths+physics+score;
			print_number();
			print_marks();
			print_score();
			cout<<"Your total marks is: "<<total<<endl;
		}
};

int main(){
	result usama;
	usama.set_number(2100912);
	usama.set_marks(78,81);
	usama.set_score(9);
	usama.display();
	return 0;
}