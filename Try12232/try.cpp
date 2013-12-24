//C++ Primer Plus 课后习题 p109 3.7 
// by itAir
// Try to use Google C++ programing style
// dir2/foo2.h（优先位置，详情如下）
//C 系统文件
//        C++系统文件
//        其他库头文件
//        本项目内头文件
#include "try.h"
#include <iostream>
using namespace std;

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
	cout<<"_________________________________"<<endl<<endl;      
	//2





	system("pause");
}