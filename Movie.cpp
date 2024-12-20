#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <conio.h>
using namespace std;

void info_check();
int buy_ticket1();
int buy_ticket2();

void info_check(){
	
	string flag1;
	cout <<endl<<endl<< "\t\t\t\t Have you registered for an account yet ??" << endl;
	cout <<endl<< "\t\t\t\t (Yes/No) : ";
	getline(cin, flag1);
	cout<<endl;
	
	if(flag1=="Yes"||flag1=="yes"||flag1=="YES"){
		
		string flag2;
		cout<<"\t\t\t\t Have you signed in ??"<< endl <<endl;
		cout<<"\t\t\t\t (Yes/No) : ";
		getline(cin, flag2);
		cout<<endl;
		
		if(flag2=="Yes"||flag2=="yes"||flag2=="YES"){
			
			string name, file_name;
			cout<<"\t\t\t\t Enter your user name : ";
			getline(cin,name);				//call aleena file and match
			cout<<endl;
			
		/*	ifstream read("User.txt");
			getline(read , file_name);
			if (name != file_name){
				
				cout<<"\t\t\t\t you need to register or sign up before proceeding !"<<endl;
				cout<<"\t\t\t\t Press any key to conyinue :"<<endl;
				getch();        //call main 
			}
			else if (name == file_name){*/
				
				buy_ticket1();				//call function
			
		}
		else if(flag2=="NO"||flag2=="No"||flag2=="no"){
			
			cout<<"\t\t\t\t Please sign in before buying ticket !"<<endl;
			cout<<"\t\t\t\t Press any key to continue : "<<endl;
			getch();
			//call main function
		}
	}
	else if(flag1=="NO"||flag1=="No"||flag1=="no"){
		
		cout<<"\t\t\t\t Please register before buying ticket !"<<endl;
		cout<<"\t\t\t\t Press any key to continue : "<<endl;
		getch();
		//call main function
	}
}

int buy_ticket1(){
		
		system("cls");
		int tickets, choice1, choice3;
			
		cout<<endl<<endl;
		cout<<"\t\t\t\t\t\t SHOWING TODAY"<<endl<<endl<<endl;
		cout <<"\t\t\t\t 1.The Shawshank Redemption"<<"  "<<"ratings: 9/10"<<"\t 8:30  AM"<<endl;
	   	cout <<"\t\t\t\t 2.Inception"<<"                  "<<"ratings: 8/10" <<"\t 10:30 AM"<<endl; 
	   	cout <<"\t\t\t\t 3.Parasite"<<"                   "<<"ratings: 7/10"<<"\t 12:20 PM"<<endl;
		cout <<"\t\t\t\t 4.The Dark Knight"<<"            "<<"ratings: 9/10"<<"\t 3:30  PM"<<endl;
		cout <<"\t\t\t\t 5.Forrest Gump"<<"               "<<"ratings: 8/10"<<"\t 5:10  PM"<<endl<<endl<<endl;
		cout <<"\t\t\t\t Please choose your prefered movie (1-5) : ";
		cin >> choice3;
		cout << endl;
		cout<<"\t\t\t\t To get more details go to the information section in the main menu !";
		cout<<endl<<endl;
	
		cout<<"\t\t\t\t Enter number of ticket you would like to purchase : ";
		cin>>tickets;
		system("cls");
		cout<<endl<<endl;
		cout<<"\t\t\t\t\t\t Seating Arrangement"<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t      1  2  3  4  5  6  7  8  9  10"<<endl;
		cout<<"\t\t\t\t\t A    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t B    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t C    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t D    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t E    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t F    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t G    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t H    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t I    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t J    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\t      _____________"<<endl;
		cout<<"\t\t\t\t\t\t\t Screen"<<endl;
		cout<<endl;
		cout<<"\t\t\t\t We have seats available in :"<<endl<<endl;
		cout<<"\t\t\t\t  1. Silver	 (Row F, G, H, I and J)	  = Rs 800"<<endl;
		cout<<"\t\t\t\t  2. Gold 	 (Row C, D and E)	  = Rs 1000"<<endl;
		cout<<"\t\t\t\t  3. Platinum 	 (Row A and B)		  = Rs 1500"<<endl<<endl;
		cout<<"\t\t\t\t Choose your preference (1-3) : ";
		cin>>choice1;
		system("cls");
		switch(choice1){
		
			case 1 :
				cout<<endl<<endl<<"\t\t\t\t Your Total amount is : "<<tickets*800<<endl;
				break ;
				
			case 2 :
				cout<<endl<<endl<<"\t\t\t\t Your Total amount is : "<<tickets*1000<<endl;
				break ;
				
			case 3 :
				cout<<endl<<endl<<"\t\t\t\t Your Total amount is : "<<tickets*1500<<endl;
				break ;
				
			default :
				cout<<"\t\t\t\t Invalid choice"<<endl;
				cout<<"\t\t\t\t Please choose again "<<endl;
				buy_ticket1();
				break;
	}	
	buy_ticket2();
	return tickets;
	return choice1;
	return choice3;
}
int buy_ticket2(){
	
	int choice2;
	double card_mob_num;
	
	cout<<"\t\t\t\t Prefered payment method : "<<endl<<endl;
	cout<<"\t\t\t\t 1. Easypaisa"<<endl;
	cout<<"\t\t\t\t 2. Bank Transfer"<<endl;
	cout<<"\t\t\t\t 3. Pay on spot before the show"<<endl<<endl;
	cout<<"\t\t\t\t Choose your preference (1-3): ";
	cin>>choice2;
		
		switch(choice2){
		
			case 1 :
				cout<<endl<<"\t\t\t\t Enter your mobile number : ";
				cin>>card_mob_num;
				cout<<endl<<"\t\t\t\t You have successfully purchased tickets, please click 1 to go to ticket details"<<endl;
				break ;
				
			case 2 :
				cout<<endl<<"\t\t\t\t Enter your card number : ";
				cin>>card_mob_num;
				cout<<endl<<"\t\t\t\t You have successfully purchased tickets, please click 1 to go to ticket details"<<endl;
				break ;
				
			case 3 :
				cout<<endl<<"\t\t\t\t You have successfully booked tickets, please click 1 to go to ticket details"<<endl;
				break ;
				
			default :
				cout<<endl<<"\t\t\t\t Invalid choice"<<endl;
				cout<<"\t\t\t\t Please choose again "<<endl;
				buy_ticket2();
				break;
    }
    //call ayesha's function
    return choice2;
}

int main(){
	
	info_check();

	return 0;
}


