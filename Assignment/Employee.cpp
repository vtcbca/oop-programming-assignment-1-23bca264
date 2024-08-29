
/* Write a program to create class employee(eid, ename, department, salary).

Input 5 employee data using constructore as well as print it using constructor.
Implement searching employee records based on employee name. */

#include<iostream>
#include<conio>
class employee
{
int eid,salary,i;
char ename[20],dept[10];
employee ()
{
    
    
      
        cout<<"Enter Employee Id :";
        cin>>eid;
        cout<<"Enter Employee Name :";
        cin>>ename;
        cout<<"Enter Employee Department :";
        cin>>dept;
        cout<<"Enter Employee Salary";
        cint>>salary;
    cout<<" Id :"<<eid<<"/n Name :"<<ename<<"/n Department"<<dept<<"/n Salary :"<<salary;
    
}
};
void main()
{
    employee e1;
    employee e2;
    employee e3;
    employee e4;
    employee e5;
    getch();
}
