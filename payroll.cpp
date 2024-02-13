/******************************************************************************
PAYROLL SYSTEM in C++
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string employee_name, id, position, daily_salary;
    float daily_rate=0.0, tax=0.0, pf=0.0, insurance=0.0;
    float solve_salary, net_pay=0.0,total_deductions=0.0;
    int no_day_work=0;
    
    cout<<"\t=== EMPLOYEE'S PAYROLL SYSTEM ===\n\n";
    cout<<"Enter employee name:  ";
    cin>> employee_name;
    cout<<"Enter 8 digit I.D. no.:  ";
    cin>> id;
    cout<<"Enetr employee position:  ";
    cin>> position;
    cout<<"Enter daily salary rate:  ";
    cin>> daily_rate;
    cout<<"Enter no days worked:  ";
    cin>> no_day_work;
    
    solve_salary=daily_rate*no_day_work;
    cout<<"\nGross Salary is "<<solve_salary<<".\n";
    
    cout<<"Enter tax in percent:  ";
    cin>> tax;
    cout<<"Enter PF value:  ";
    cin>> pf;
    cout<<"Enter insurance value:  ";
    cin>> insurance;
    
    total_deductions=(solve_salary*tax/100)+pf+insurance;
    cout<<"\nDeductions is "<<total_deductions<<".\n";
    
    net_pay=solve_salary - total_deductions;
    
    cout<<"\n\t====Payroll report====\n";
    cout<<"NAME: "<<employee_name<<endl
        <<"Position: "<< position<<endl
        <<"NET Pay: "<<net_pay<<endl;
    

    return 0;
}
