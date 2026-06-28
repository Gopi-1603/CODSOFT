#include<iostream>
using namespace std;
int main()
{
   
    double num1,num2;
    char op;
    double result;
    char choice='Y';

    while(choice=='Y' || choice=='y')
    {

        cout<<"================="<<endl;
        cout<<"SIMPLE CALCULATOR " <<endl;
        cout<<"================="<<endl;

        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        cout<<"Enter operator (+, -, *, /): ";
        cin>>op;

        switch(op)
        {
            case '+':
                result=num1+num2;
                cout << num1 << " + " << num2 << " = " << result << endl;
                break;

            case '-':
                result=num1-num2;
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;

            case '*':
                result=num1*num2;
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;

            case '/':
                if(num2!=0)
                {
                    result=num1/num2;
                    cout << num1 << " / " << num2 << " = " << result << endl;
                }
                else
                {
                    cout<<"Error: Division by zero is not allowed."<<endl;
                }
                break;

            default:
                cout<<"Error: Invalid operator."<<endl;
        }
        cout<<"---------------------------------------------------"<<endl;

        cout<<"Do you want to perform another calculation? (Y/N): ";
        cin>>choice; 
        cout<<endl;
}
cout<<"================================"<<endl;
cout<<" THANK YOU FOR USING CALCULATOR!"<<endl;
cout<<"================================"<<endl;

return 0;

}
