// Program to find min, max, average, count, and sum of values inputted by user
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    float sum=0.0, value=0, max=0.0, min=0.0, test=0.0;
    int numbers=0, countneg=0;
      
    
    cout<<"Enter the number of values to be processed: ";
    cin>>numbers;    
      
    
    while (numbers <= 0) {
        cout<<"Number cannot be 0 or less \n";
        cout<<"Please enter a valid number: ";
        cin>>numbers;
    }             
    for(int i=0; i < numbers; i++){        
        cout<<"please enter a value: ";
        cin>>value;
                                
        if(value<0) 
            countneg++;
        if(max==0)
            max = value;
        if(value > max)
            max = value;                   
        if(min==0)
            min = value;
            
        else if(value < min)
            min = value;           
        sum+=value;
    }
    
    cout<<"The number of values input is: " << numbers << endl;
    cout<<"The sum is: " << sum << endl;
    cout<<"The average is " <<sum/numbers <<endl;
    cout<<"The number of negative values are " <<countneg <<endl;
    cout<<"The largest input value is: " << max << endl;
    cout<<"The smallest input value is: " << min << endl;
    
    system("pause");
    return 0;
}
