//Assignment 6
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    char animal, neutered, insure;
    
    cout<<"Welcome to the Animal Insurance Company!"<<endl;
    cout<<"What type of animal would you like to insure today?"<<endl;
    cout<<"Enter D for Dog, C for Cat, B for Bird or R for Reptile:"<<endl;
    cin>>animal;
    
    //start main loop
    do{ 
        if(animal=='B'||animal=='b'){
            cout<<"The insurance for your Bird Cost $10."<<endl;                                        
        }        
        else if(animal=='r'||animal=='R'){
                cout<<"The insurance for your Reptile Cost $10."<<endl;
            }
        else if(animal=='c'||animal=='C'){{
                cout<<"You have selected a cat, has your cat been neutered? Enter Y for Yes or N for NO."<<endl;
                cin>>neutered;
            }    
                do{ //loop until correct entry is given                                           
                    if(neutered=='y'||neutered=='Y'){
                        cout<<"The insurance for your Cat Cost $40."<<endl;
                        break; //stop continous loop
                    }                   
                    if(neutered=='n'||neutered=='N'){
                        cout<<"The insurance for your Cat Cost $60."<<endl;
                        break;
                    }
                    else 
                        cout<<"Invalid Input, please type Y or N"<<endl;
                        cin>>neutered;
                    
                }while(neutered!='y'||neutered!='Y'||neutered!='n'||neutered!='N');
                                                              
            }                         
        else if(animal=='d'||animal=='D'){{
                cout<<"You have selected a Dog, has your Dog been neutered? Enter Y for Yes or N for NO."<<endl;
                cin>>neutered;
            }   
                do{ //loop until correct entry is given
                    if(neutered=='y'||neutered=='Y'){
                        cout<<"The insurance for your Dog Cost $50."<<endl;
                        break;
                    }                   
                    if(neutered=='n'||neutered=='N'){
                        cout<<"The insurance for your Dog Cost $80."<<endl;
                        break;
                    }
                    else
                        cout<<"Invalid Input, please type Y or N"<<endl;
                        cin>>neutered;
                        
                }while(neutered!='y'||neutered!='Y'||neutered!='n'||neutered!='N');                                                                                      
            }   
        else 
            cout<<"Invalid entry"<<endl;                                  
                      
        do{ //loop until correct entry is given                 
            cout<<"Do you want to insure another animal? Enter Y for Yes or N for NO."<<endl; 
            cin>>insure;
                if(insure=='y'||insure=='Y'){
                    cout<<"Enter D for Dog, C for Cat, B for Bird or R for Reptile:"<<endl;
                    cin>>animal;
                    break;
                }
                else if(insure=='n'||insure=='N'){
                    cout<<"Thank you for using The Animal Insurance Company. Goodbye"<<endl;
                    break;
                }
                else 
                    cout<<"Invalid entry..."<<endl;
        }while(insure!='y'||insure!='Y'||insure!='n'||insure!='N');                                 
                                          
    }while(insure=='y'||insure=='Y'); //end main loop
        
    system("pause");
    return 0;
}

