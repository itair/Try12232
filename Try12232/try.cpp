//C++ Primer Plus 课后习题 p124 4.13
// by itAir
// Try to use Google C++ programing style
#include "try.h"
#include <iostream>
#include <string>
#include <cstring>
#include <array>

using namespace std;
//使用 string注意编译器问题和 namespace 问题.
struct  CandyBar{
  string  brand;
  double  weight;
  int     energy;
}; //using struct 格式问题  

struct Pizza{
  string company;
  double diameter;
  double weight;
};

void main(){
	cout<< "C++_Primer_Plus"<<endl;
	cout<<"    by itAir"<<endl;        
	cout<<"Hello World!"<<endl;
	cout<<"_________________________________"<<endl<<endl;        
	//1
	char name_first[20], name_last[10];
	char grade;
	int age;
	cout<<" What is your first name? ";
	cin.getline(name_first,20);
	cout<<" What is your last name? ";
	cin.getline(name_last,10);
	cout<<" What letter grade do you deserve? ";
	cin>>grade;
	cout<<" What is your age? ";
	cin>>age;	
	cout<<" Name: "<<name_last<<" , "<<name_first<<endl;
	cout<<" Grade: "<< ++grade <<endl;
	cout<<" Age: "<<age<<endl;
	//C风格字符数组几种输入方法 对流中空格的处理， 结束符的区别
	//cin.get .getline .read 的区别 
	//get()不丢弃回车 getline不忽略空格 read只能读char
	cout<<"_________________________________"<<endl<<endl;      
	//2
	string name, dessert;
  cout << "Enter your name: \n";
  cin >> name;
  cout << "Enter your favorite dessert: \n";
  cin >> dessert;
  cout << "I have some delicious "<< dessert;
  cout << " for you, " << name << ".\n";
  // string 代替 char[]的好处是安全性高；
  cout<<"_________________________________"<<endl<<endl;   
//   //3 
  const unsigned int kNumOfNames= 20;
  char firstname[kNumOfNames], lastname[kNumOfNames];
  cout << "Enter your first name: ";
  cin.getline( firstname, kNumOfNames );
  //cin.get(); // 起新行 
  cin.clear(); // 重定向流
  cout << "Enter your last name: ";
  cin.getline( lastname, kNumOfNames );
  cout << "Here's the information in a single string: " 
	<< lastname << " , " << firstname << endl;
  cout<<"_________________________________"<<endl<<endl;  
  //4
  string firstname_, lastname_;
  cout << "Enter your first name: ";
  getline( cin, firstname_ );
  cout << "Enter your last name: ";
  getline( cin, lastname_ );
  cout << "Here's the information in a single string: " 
	<< lastname_ << " , " << firstname_ << endl;
  //char[]  string 输入的时候 格式不同：
  //cin.getline 与 getling (cin,string) 的区别   
  cout<<"_________________________________"<<endl<<endl;  
  //5
  CandyBar snack = { "Mocha Munch", 2.3, 350 };
  cout << "Good's Name: snack \n"
	  << " Brand name : " << snack.brand << endl
	  << " Net weight : " << snack.weight << endl
	  << " Energy : " << snack.energy << endl;
  //struct使用
   cout<<"_________________________________"<<endl<<endl; 
   //6
   CandyBar snacks[3] = {
	 { "Mocha 1", 2.3, 350 },
	 { "Mocha 2", 2.5, 330 },
	 { "Mocha 3", 6.8, 120 }
   };
   for ( int i = 0; i < 3; i++ ){
  //   snacks[i] = {"Mocha 1", 2.3, 350 }; //  BAD!!
	 cout << "Good's Name: snack No."<< i << " \n"
	   << " Brand name : " << snacks[i].brand << endl
	   << " Net weight : " << snacks[i].weight << endl
	   << " Energy : " << snacks[i].energy << endl<<endl;
   }
   //struct 数组必须在定义的时候初始化.否则只能单个成员赋值
  cout<<"_________________________________"<<endl<<endl; 
  //7  
  Pizza pizza1;
  cout << " Enter your pizza's company: ";
  getline ( cin, pizza1.company );
  cout << " Enter your pizza's size: ";
  cin >> pizza1.diameter;
  cin.clear();
  cout << " Enter your pizza's weight: ";
  cin >> pizza1.weight;
  cin.clear();
  cout << " Your pizza is " << pizza1.company << " made and "
	<< pizza1.diameter << " inches at the weight of "
	<< pizza1.weight << " pounds. \n";
  // struct 普通版本
   cout<<"_________________________________"<<endl<<endl; 
  //8
  Pizza* pizza2 = new Pizza ;
  cout << " Enter your pizza's company: ";
  cin >> pizza2->company ;
  cout << " Enter your pizza's size: ";
  cin >> pizza2->diameter;
  cin.clear();
  cout << " Enter your pizza's weight: ";
  cin >> pizza2->weight;
  cin.clear();
  cout << " Your pizza is " << pizza2->company << " made and "
	   << pizza2->diameter << " inches at the weight of "
	   << pizza2->weight << " pounds. \n";
	 // struct new 版本
  cout<<"_________________________________"<<endl<<endl; 
  //9
  CandyBar* snacks_new = new CandyBar;
//   {
//     { "Mocha 1", 2.3, 350 },
//     { "Mocha 2", 2.5, 330 },
//     { "Mocha 3", 6.8, 120 }
//   };
  for ( int i = 0; i < 3; i++ ){
	snacks_new->brand = "Mocha"+1;
	snacks_new->weight = 2.3 + i;
	snacks_new->energy = 250 * i; 
	cout << "Good's Name: snack No."<< i << " \n"
	  << " Brand name : " << snacks[i].brand << endl
	  << " Net weight : " << snacks[i].weight << endl
	  << " Energy : " << snacks[i].energy << endl<<endl;
  }
   // 6题的 NEW 版本  可循环赋值 
   cout<<"_________________________________"<<endl<<endl; 
   //10
   array<double , 3> race_result;
   double average_result;
   cout << "Enter 3 race results one by one : ";
   cin >> race_result[0] >> race_result[1] >> race_result[2];
   average_result = race_result[0] + race_result[1] + race_result[2];
   average_result /= 3;
   cout << "Average result is :" << average_result << endl;
   // array 作为 数组的替代品 效率较 vector 高 操作简单
   cout<<"_________________________________"<<endl<<endl; 

   system("pause");
}