//C++ Primer Plus �κ�ϰ�� p124 4.13
// by itAir
// Try to use Google C++ programing style
#include "try.h"
#include <iostream>
#include <string>
#include <cstring>
#include <array>

using namespace std;
//ʹ�� stringע������������ namespace ����.
struct  CandyBar{
  string  brand;
  double  weight;
  int     energy;
}; //using struct ��ʽ����  

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
	//C����ַ����鼸�����뷽�� �����пո�Ĵ��� ������������
	//cin.get .getline .read ������ 
	//get()�������س� getline�����Կո� readֻ�ܶ�char
	cout<<"_________________________________"<<endl<<endl;      
	//2
	string name, dessert;
  cout << "Enter your name: \n";
  cin >> name;
  cout << "Enter your favorite dessert: \n";
  cin >> dessert;
  cout << "I have some delicious "<< dessert;
  cout << " for you, " << name << ".\n";
  // string ���� char[]�ĺô��ǰ�ȫ�Ըߣ�
  cout<<"_________________________________"<<endl<<endl;   
//   //3 
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
  //5
  CandyBar snack = { "Mocha Munch", 2.3, 350 };
  cout << "Good's Name: snack \n"
	  << " Brand name : " << snack.brand << endl
	  << " Net weight : " << snack.weight << endl
	  << " Energy : " << snack.energy << endl;
  //structʹ��
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
   //struct ��������ڶ����ʱ���ʼ��.����ֻ�ܵ�����Ա��ֵ
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
  // struct ��ͨ�汾
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
	 // struct new �汾
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
   // 6��� NEW �汾  ��ѭ����ֵ 
   cout<<"_________________________________"<<endl<<endl; 
   //10
   array<double , 3> race_result;
   double average_result;
   cout << "Enter 3 race results one by one : ";
   cin >> race_result[0] >> race_result[1] >> race_result[2];
   average_result = race_result[0] + race_result[1] + race_result[2];
   average_result /= 3;
   cout << "Average result is :" << average_result << endl;
   // array ��Ϊ ��������Ʒ Ч�ʽ� vector �� ������
   cout<<"_________________________________"<<endl<<endl; 

   system("pause");
}