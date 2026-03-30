#include <iostream>
#include <cstring>
using namespace std;
class Student{
	int rollno;
	char name[20];
	
	public:
	Student(int i , char* sptr);
	void display();
	void accept();
};

Student :: Student(int r , char sptr){
	rollno = r;
	strcpy(name,sptr);
}

void Student :: display(){
	cout << "Roll no of Student is : " << rollno;
	cout << "Name of the Student is : " << name;
}


int main(){
	
	char* str;

    *str = "JOHN";	
	
	Student* s_ptr = new Student(1,str);
    s_ptr -> display();
	return 0;
}

