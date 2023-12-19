#include<iostream>
using namespace std;
int main()
{
    float num1, num2, result;
    int option;
    
	
        cout << "Choose the operation you want to perform:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "Enter the option number (1 - 4):" << endl;
        cin >> option;

        cout << "Enter two numbers:" << endl;
        cin >> num1 >> num2;
        
		switch(option)
        {
           	case 1:
           	    result = num1+num2;
           	    cout<<"Result = " << result << endl;
           	    break;
           	case 2:
               	result = num1-num2;
               	cout<<"Result = " << result << endl;
	               break;
    	    case 3:
                result = num1*num2;
           	    cout<<"Result = " << result << endl;
               	break;
           	case 4:
               	result = num1/num2;
               	cout<<"Result = " << result << endl;
               	break;
	        default:
    	        cout<<"Error! Wrong choice of operator." << endl;
            	break;
        }
	
	return 0;
}
