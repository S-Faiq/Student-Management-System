#include <iostream>
#include <string>
#include <cstdlib> //for exit
using namespace std;

const int Max_students= 50;
string name[Max_students];
string fatherN[Max_students];
int id[Max_students];
string phone[Max_students];
string address[Max_students];

int num_students=0; //current number of students
//function to add students
void add_student()
{
	if(num_students>=Max_students)
	{
		cout<<"Maximum number of students reached.!"<<endl;
		return;
	}
	cout<<"Enter the name of the student: ";
	cin>>name[num_students];
	cout<<"Enter the father name of the student: ";
	cin>>fatherN[num_students];
	cout<<"Enter the ID of the student: ";
	cin>>id[num_students];
	cout<<"Enter the phone number of the student: ";
	cin>>phone[num_students];
	cout<<"Enter the address of the student: ";
	cin>>address[num_students];
	
	num_students++;
}
//function to search studens
void search_student(int searchid)
{
	
	int index= -1; //initializing to -1 for wrong entries
	for (int i= 0;i<num_students;i++)
	{
		if(id[i]==searchid)
		{
			index= i;
			break;
		}
	}
	if(index==-1)
	{
		cout<<"No records found "<<endl;
	}
	else
	{
		cout<<"\t\t\t Student name: "<<name[index]<<endl;
		cout<<"\t\t\t Father Name : "<<fatherN[index]<<endl;
		cout<<"\t\t\t ID          : "<<id[index]<<endl;
		cout<<"\t\t\t Phone number: "<<phone[index]<<endl;
		cout<<"\t\t\t Address     : "<<address[index]<<endl;
	}
}
//functon to show data
void show_data()
{
	for(int i= 0;i<num_students;i++)
	{
		cout<<"Student Name: "<<name[i]<<endl;
		cout<<"Father name : "<<fatherN[i]<<endl;
		cout<<"Student ID  : "<<id[i]<<endl;
		cout<<"Phone Number: "<<phone[i]<<endl;
		cout<<"Address     : "<<address[i]<<endl;
		
	}
}
//fumction to quit program
void quit_program()
{
	cout<<"Quiting program...."<<endl;
	exit(0);
}
//main function
int main()
{
	system ("CLS");
	system ("color F2");
	int choice;
	cout<<"Enter the total number of students: ";
	cin>>num_students;
	while(true)
	{
	cout<<"\t\t\t*************************"<<endl;
	cout<<"\t\t\t What do you want to do. \n";
	cout<<"\t\t\t 1.Add student \n";
	cout<<"\t\t\t 2.Search student \n";
	cout<<"\t\t\t 3.Show data \n";
	cout<<"\t\t\t 4.Quit program \n";
	cout<<"\t\t\t**************************"<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			add_student();
			break;
			case 2:
				int search_id;
				cout<<"Enter the ID you want to search: ";
				cin>>search_id;
				search_student(search_id);
				break;
				case 3:
					show_data();
					break;
					case 4:
						quit_program();
						break;
	}
}
return 0;
}
