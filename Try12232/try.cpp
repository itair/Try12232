//C++ Primer Plus �κ�ϰ�� p109 3.7 
// by itAir
// Try to use Google C++ programing style

#include "try.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void main(){
	cout<< "C++_Primer_Plus"<<endl;
	cout<<"    by itAir"<<endl;        
	cout<<"Hello World!"<<endl;
	cout<<"_________________________________"<<endl<<endl;        
	//1
// 	char name_first[20], name_last[10];
// 	char grade;
// 	int age;
// 	cout<<" What is your first name? ";
// 	cin.getline(name_first,20);
// 	cout<<" What is your last name? ";
// 	cin.getline(name_last,10);
// 	cout<<" What letter grade do you deserve? ";
// 	cin>>grade;
// 	cout<<" What is your age? ";
// 	cin>>age;	
// 	cout<<" Name: "<<name_last<<" , "<<name_first<<endl;
// 	cout<<" Grade: "<< ++grade <<endl;
// 	cout<<" Age: "<<age<<endl;
	//C����ַ����鼸�����뷽�� �����пո�Ĵ��� ������������
	//cin.get .getline .read ������ 
	//get()�������س� getline�����Կո� readֻ�ܶ�char
	cout<<"_________________________________"<<endl<<endl;      
	//2
// 	const int ArSize = 20;
// 	char name[ArSize];
// 	char dessert[ArSize];
//   string name, dessert;
//   cout << "Enter your name: \n";
//   cin >> name;
//   cout << "Enter your favorite dessert: \n";
//   cin >> dessert;
//   cout << "I have some delicious "<< dessert;
//   cout << " for you, " << name << ".\n";
  // string ���� char[]�ĺô��ǰ�ȫ�Ըߣ�
  cout<<"_________________________________"<<endl<<endl;   
  //3 
  const unsigned int kNumOfNames= 20;
  char firstname[kNumOfNames], lastname[kNumOfNames];
  cout << "Enter your first name: ";
  cin.getline( firstname, kNumOfNames );
  //cin.get(); // ������ 
  cin.clear(); // �ض�����
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
  //char[]  string �����ʱ�� ��ʽ��ͬ��
  //cin.getline �� getling (cin,string) ������   
  cout<<"_________________________________"<<endl<<endl;  
	system("pause");
}