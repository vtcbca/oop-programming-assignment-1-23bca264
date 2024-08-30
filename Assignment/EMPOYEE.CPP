/*WRITE A PROGRAM TO CREATE CLASS EMPLOYEE (EID, ENAME, DEPARTMENT, SALARY)
INPUT 5 EMPLOTYEE DATA USIMG CONSTRUCTORE AS WELL AS PRINT USING CONSTRUCTOR
IMPLEMENT SEARCHING EMPLOYEE RECORDS BASED ON EMPLOYEE NAME*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
class employee
{
	public:
	int eid;
	char ename[20],department[10];
	float salary;
	public:
	employee (int id,char name[20],char dept[10],float sal)
	{
		eid=id;
		strcpy(ename,name);
		strcpy(department,dept);
		salary=sal;
	}
	void printdetail()
	{
		cout<<"ID :"<<eid<<"\nNAME :"<<ename<<"\nDEPARTMENT :"<<department<<"\n SALARY :"<<salary;
	}
	const char* getname()
	{
		return ename;
	}
};
int main()
{
	employee emp0;
	employee emp1;
	employee emp2;
	employee emp3;
	employee emp4;
	for(int i=0;i<5;i++)
	{
		int id;
		char name[20],dept[10];
		float salary;
		clrscr();
		cout<<"ENTER EMPLOYEE "<<i+1<<" DETAIL "<<endl;
		cout<<"ENTER EMPLOYEE ID :";
		cin>>id;
		cout<<"ENTER EMPLOYEE NAME :";
		cin>>name;
		cout<<"ENTER EMPLOYEE DEPARTMENT :";
		cin>>dept;
		cout<<"ENTER EMPLOYEE SALARY :";
		cin>>salary;
		cout<<" ID :"<<id<<"\n NAME:"<<name<<"\nDEPARTMNET :"<<dept<<"\n SALARY :"<<salary;
		emp[i]=employee(id,name,dept,salary);
       }
	for(int k=0;k<5;k++)
	{
		cout<<"EMPLOYEE "<<k+1<<" DEATAIL "<<endl;
		emp[k].printdetail();
		cout<<endl;
	}
	char searchn[20];
	cout<<"ENETR EMPLOYEE NAME THAT YOU WANT SEARCH :";
	cin>>searchn;
	for(int j=0;j<5;i++)
	{
		if (emp[j].getname()==searchn)
		{
			cout<<"EMPLOYEE FOUND :"<<endl;
			emp[j].printdetail();
			break;
		}
	}
	return 0;
}


