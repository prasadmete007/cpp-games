/******************************************************************************

celsius to fahrenheit
fahrenheit to celsius
CPP code with loop

*******************************************************************************/

#include <iostream>

using namespace std;

int conversion(){
    int i=0;
    while(i==0){
        int userc=0;
        double temp=0;
        cout << "1) C to F\n" 
            << "2) F to C\n"
            << "3) exit\n";
        
        cin>>userc;
            
        if (userc == 1){
	    cout << "enter temp in celsius:- ";
	    cin >> temp;
	    temp = (temp * 1.8) + 32;
	    cout << "temp in fahrenheit is " << temp << endl;  
        }
        else if (userc == 2){
	    cout << "enter temp in fahrenheit:- ";
	    cin >> temp;
	    temp = 1.8 * (temp - 32);
	    cout << "temp in celsius is " << temp << endl;
	    }
	    else if (userc == 3){
	        i++;
	    }
	    
    }
    return 0;
    
}

int main()
{
    conversion();
    return 0;
}
