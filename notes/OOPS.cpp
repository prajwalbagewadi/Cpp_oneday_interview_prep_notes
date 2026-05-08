# include <iostream>
using namespace std;
//OOPS concepts for C++


//1. Class and Object
/*
Class = Blueprint->
			Data-Memebers,
			MemberFunctions,
			Access-Specifiers
			
Object = Actual instance of class.

Keywords:
- class.
- object.
- blueprint.
- instance.
- data members.
- member functions.
- encapsulation.
*/

//Example
//class Car {
//	public:
//		string color;
//		
//		void start() {
//			cout << "Car started.";
//		}
//};
//
//int main() {
//	Car c1; //object
//	c1.color = "RED";
//	
//	cout<< c1.color << endl;
//	c1.start();
//	return 0;
//}

//2. Constructor
/*
- Automatically called when object is created.
- Constructor = Special Member function
- Constructor name = ClassName()
- No return type
- Called automatically
- Used to initialize objects.

Keywords:
- Special member function
- automatic call
- object initialization.
- same name as class.
- no return type.
- default constructor.
- parameterized constructor.
- construtor overloading.

Types:
- Default 
- Parameterized
- Copy Constructor
*/

//Example
//class Student {
//	public:
//		string name;
//		int age;
//	
//		Student() {
//			cout << "Default constructor invoked.";
//		}
//};

//class Student {
//	public:
//		int age;
//		string name;
//		string course;
//		
//		Student(int age,string name,string course) {
//			cout << "parametrized" << endl;
//			this->age = age;
//			this->name = name;
//			this->course = course;
//		}	
//	
//		Student(Student &s) {
//			cout << "copy constructor." << endl;
//			this->age = s.age;
//			this->name = s.name;
//			this->course = s.course;
//		}
//	
//		void dispStud() {
//			cout << this->name << endl;
//			cout << this->course << endl;
//			cout << this->age << endl;
//		}
//};
//
//int main() {
//	//Student s1; //object
//	Student s2(26,"prajwal","MCA");
//	s2.dispStud();
//	Student s3(s2);
//	s3.dispStud(); 
//	return 0;
//}

/*
output:
parametrized
prajwal
MCA
26
copy constructor.
prajwal
MCA
26
*/

/*
C++ Keywords:
- class = create class.
- public = Accessible every where.
- private = Accessible only inside class.
- this = Refers to current object.
- new = Dynamic memory allocation.
- delete = Free memory.
*/

//3. Destructor
/*
- Called automatically when object is destroyed.
- Destructor = Dynamic Memory cleanup.
- Destructor name = ~ClassName().
- Starts with '~'.
- No return type.
- No parameters.
- Automatically called.

Keywords:
- cleanup.
- automatic call.
- memory release.
- resource release.
- starts with ~
- no parameters.
- no return type.

Used for:
- free memory.
- close files.
- release resources.
- cleanup work.
*/

//example
//class Student {
//	public:
//		int age;
//		string name;
//		string course;
//		
//		Student(int age,string name,string course) {
//			cout << "parametrized" << endl;
//			this->age = age;
//			this->name = name;
//			this->course = course;
//		}
//	
//		void disp(){
//			cout << this->name << endl;
//			cout << this->course << endl;
//			cout << this->age << endl;
//		}
//	
//		~Student() {
//			cout << "destructor called." << endl;
//		}
//};
//
//int main() {
//	Student s1(26,"prajwal","MCA");
//	s1.disp();
//	s1.~Student(); //Destructor call.
//	return 0;
//}

//4. Encapsulation
/*
- Encapsulation = Bundling -> data (Variables) and methods (functions) -> Single unit (class).
- Hiding data using priavte members.
- Data hiding.
- Private members.
- Getters and Setters.
- Controlled access.
- Security.

Keywords:
- data hiding.
- private members.
- getter
- setter
- Controlled access.
- security
*/

//Example
//class Bank {
//	private:
//		int balance;
//	
//	public:
//		void setBal(int b) {
//			this->balance = b;
//		}
//		
//		int getBal() {
//			return this->balance;
//		}
//};
//
//int main() {
//	Bank obj;
//	obj.setBal(2500);
//	int bal = obj.getBal();
//	cout << "Current Balance:" << bal << endl;
//	return 0;
//}

//5. Abstraction
/*
- Abstraction = Hiding implementation details.
- Essential features.
- Interface = no Built-in Keyword -> implemented using (abstract classes);
- Complexity hiding.
- Abstract class.
- Pure virtual function.

Keywords:
- implementation hiding.
- essential features.
- interface
- complexity hiding.
- abstract class.
- pure virtual function.
*/

//Example
//class Car {
//	private:
//		void engineStart() {
//			cout << "Engine Started." << endl;
//		}
//	public:
//		void start() {
//			this->engineStart();
//			cout << "Car Started." << endl;
//		}
//};
//
//int main() {
//	Car c;
//	c.start(); 
//	return 0;
//}

/*
output:
Engine Started.
Car Started.

--------------------------------
Process exited after 0.03007 seconds with return value 0
*/

//6. Inheritance
/*
- Inheritance = Child class inherits Parent class (Properties).
- Parent class.
- Child class.
- Code reusability.
- IS - A relationship -> One class is type of Another class 
- - Example : Dog IS - A Animal.
- Derived class.
- Base class.

Keywords:
- Parent class.
- Child class.
- code reusability.
- IS-A relationship.
- derived class.
- base class.

Types:
- Single
- Multi-level
- multiple
- hierarchical
- hybrid.
*/

//Example

//1. Single inheritance
// - One parent -> One Child

//class Animal {
//	public:
//		void print() {
//			cout << "Animal:";
//		}
//};
//
//class Dog : public Animal {
//	public:
//		void print() {
//			Animal::print(); //call parent class function
//			cout << "Dog";
//		}
//};
//
//int main() {
//	Dog d1;
//	d1.print();
//	return 0;
//}

/*
output:
Animal:Dog
*/

/*
Memory:
Dog IS-A Animal
*/

//2. Multi-Level Inheritance
// Grandparent -> Parent -> Child

//class Animal {
//	public:
//		void print() {
//			cout << "Animal:";
//		}	
//};
//
//class Dog : public Animal {
//	public:
//		void print() {
//			Animal::print();
//			cout << "Dog";
//		}
//};
//
//class Puppy : public Dog {
//	public:
//		void print() {
//			cout << endl;
//			Dog::print();
//			cout << ":Puppy";
//		}
//};
//
//int main() {
//	Puppy p1;
//	p1.print();
//	return 0;
//}

/*
output:
Animal:Dog:Puppy
*/

/*
Memory:
Puppy -> Dog -> Animal
*/

//3. Multiple Inheritance
// One Child -> Multiple Parents

//class Father {
//	public:
//		void print() {
//			cout << "father.";
//		}
//};
//
//class Mother {
//	public:
//		void print() {
//			cout << "mother.";
//		}
//};
//
//class Child : public Father, public Mother {
//	public:
//		void print() {
//			Father::print(); 
//			Mother::print();
//			cout << "child.";
//		}
//};
//
//int main() {
//	Child c1;
//	c1.print();
//	return 0;
//}

/*
output:
father.mother.child.
*/

/*
Memory:
Child gets from Father + Mother
*/

//4. Hierarchical Inheritance
// One Parent -> Multipe Children

//class Animal {
//	public:
//		void print() {
//			cout << "Animal:";
//		}
//};
//
//class Dog : public Animal {
//	public:
//		void print() {
//			Animal::print();
//			cout << "Dog.\n";
//		}
//};
//
//class Cat : public Animal {
//	public:
//		void print() {
//			Animal::print();
//			cout << "Cat.\n";
//		}
//};
//
//int main() {
//	Dog d1;
//	Cat c1;
//	d1.print();
//	c1.print();
//	return 0;
//}

/*
output:
Animal:Dog.
Animal:Cat.
*/

/*
Memory:
One parent, many children
*/

//5. Hybrid Inheritance
// Combination of inheritance types

//class Animal {
//	public:
//		void print() {
//			cout << "Animal.";
//		}
//};
//
//class Dog : public Animal {
//	public:
//		void print() {
//			Animal::print();
//			cout << "Dog.";
//		}
//};
//
//class Cat : public Animal {
//	public:
//		void print() {
//			Animal::print();
//			cout << "Cat.";
//		}
//};
//
//class Baby : public Dog, public Cat {
//	public:
//		void print() {
//			Dog::print();
//			cout << " Baby.\n";
//			Cat::print();
//			cout << " Baby.\n";
//		}
//};
//
//int main() {
//	Baby b1;
//	b1.print();
//	return 0;
//}

/*
output:
Animal.Dog. Baby.
Animal.Cat. Baby.
*/

/*
Memory:
- Hierarchical.
- Multiple.
*/

/*
Fast Memory Tricks:
Single: A -> B
Multilevel: A -> B -> C
Multiple: A + B -> C
Hierarchical: A -> B,C
Hybrid: Combination
*/

//7. Polymorphism
/*
- Polymorphism = Many + forms
- Ability of -> Single function OR Operator -> To behave according to Context.
- Early binding

Keywords:
- Many forms
- Compile-time polymorphism
- Runtime polymorphism
- Flexibility.

Types:
- Overloading
- Overriding 
- Virtual function
*/

//Compile time polymorphism
/*
Achived by:
- Function Overloading
- Operator Overloading
*/

//Function Overloading
/*
- Same function name, different parameters
*/

//Example
//class Math {
//	public:
//		int add(int a,int b) {
//			return a+b;
//		}
//		
//		int add(int a, int b, int c) {
//			return a+b+c;
//		}
//};
//
//int main() {
//	Math m;
//	cout << m.add(5,5) << endl;
//	cout << m.add(5,5,5) << endl;
//}

//Operator Overloading
/*
- Same operator -> different Behaviour.
- Example:
- int a = 5 + 2;
- + works for integers.
- Also works for strings
- string s = "hello" + "world".
//- C++ Keyword: operator.
*/

//class Square {
//	public:
//		//return-type operator symbol(parameter) {}
//		int operator & (int v) {
//			return v * v;
//		}
//};
//
//int main() {
//	Square s;
//	cout << s.operator &(5);
//	return 0;
//}

/*
output:
25
*/

//Runtime Overloading
/*
- Method call decided during runtime.
- Late binding

Achived by:
- inheritance
- function overriding
- virtual function
- base class pointer

Core Keywords:
- virtual
- override
- inheritance
- base class
- derived class
- dynamic dispatch
- parent pointer
- child object.
*/

//Example
//class Animal {
//	public:
//		virtual void sound() {
//			cout << "Animal Sound";
//		}
//};
//
//class Dog : public Animal {
//	public:
//		void sound() override {
//			cout << "Bark";
//		}
//};
//
//int main() {
//	Animal* a; //parent class pointer
//	Dog d; //child class
//	a= &d; //store child address in pointer
//	a->sound(); //call to overriden function
//	return 0;
//}

//8. Virtual function
/*
- Runtime binding
- Late binding 
- dynamic dispatch
- base pointer
- Child object
- runtime polymorphism
*/

//Example
//class Animal {
//	public:
//		virtual void show() {
//			cout << "Animal";
//		}
//};
//
//class Dog : public Animal {
//	public:
//		void show() override {
//			cout << "Dog";
//		}
//};
//
//int main() {
//	Animal* a; //parent class pointer
//	Dog d; //child class
//	a= &d; //store child address in pointer
//	a->show(); //call to overriden function
//	return 0;
//}

//9. Pure virtual function
/*
- = 0;
- abstract behaviour
- manditory override
- abstract class
- no implementation required in parent
*/

//Example
//class Animal {
//	public:
//		virtual void show() = 0; //pure virtual function
//};
//
//class Dog : public Animal {
//	public:
//		void show() override {
//			cout << "Dog";
//		}
//};
//
//int main() {
//	Dog d;
//	d.show();
//	return 0;
//}

//10. Abstract class
/*
- cannot create object.
- contains pure virtual functions
- base blueprint (Works like standards)
- incomplete class
- used for inheritance
*/

//class Animal {
//	public:
//		virtual void sound() = 0;
//};
//
//class Dog : public Animal {
//	public:
//		void sound() {
//			cout << "Bark!!";
//		}
//};
//
//int main() {
//	Dog d;
//	d.sound();
//	return 0;
//}

/*
output:
Bark!!
*/

//11. Access Specifiers
/*
- private: accessible inside class only.
- protected: accessible inside class + derived class.
- public: accessible every where.
*/

//12. Static variable
/*
- Shared memory
- class variable
- single copy
- common for all objects of the class
- memory allocated once
*/

//class Demo {
//	public:
//		static int count;
//		
//		Demo() {
//			count++;
//		}
//		
//		void getCount() {
//			cout << "count=" << count << endl;
//		}
//};
//
////static var initilization
//int Demo::count = 0;
//
//int main() {
//	Demo d1;
//	Demo d2;
//	Demo d3;
//	Demo d4;
//	d4.getCount();
//	return 0;
//}

/*
output:
count=4
*/

//13. this pointer
/*
- current object reference.
- resolved naming conflict
- object address
- points to current object
*/

//Example
//class Stud {
//	public:
//		int age;
//		
//		Stud(int age) {
//			this->age = age;
//		}
//		
//		void show() {
//			cout << this->age;
//		}
//};
//
//int main() {
//	Stud s1(26);
//	s1.show();
//	return 0;
//}

/* Additional notes:
14. Keywords to Revise
- class
- object
- public
- private
- protected
- virtual
- override
- static
- this
- new
- delete
- friend
- const

15. Important Differences
- Overloading vs Overriding
- compile-time vs runtime
- same class vs inheritance
- different parameters vs same parameters
- Abstraction vs Encapsulation
- hiding complexity vs hiding data
- Stack vs Heap
- automatic memory vs dynamic memory

16. Interview Keywords
- runtime polymorphism
- compile-time polymorphism
- dynamic binding
- early binding
- late binding
- memory management
- resource cleanup
- code reusability
- data security
- modularity
- maintainability
*/

//17. Friend function
/*
- Special function
- not member of class
- accesses private members
- declared using friend keyword
- breaks encapsulation
- external function
*/

//Example
//class Test {
//	private:
//		int x = 10;
//	public:
//		friend void show(Test obj);
//};
//
//void show(Test obj) {
//	cout << "private var x=" << obj.x;
//}
//
//int main() {
//	Test t;
//	show(t);
//	return 0;
//}

/*
output:
private var x=10
*/
