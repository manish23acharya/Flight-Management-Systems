#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <algorithm>
using namespace std;

const char destination[10][20] = { "BIRATNAGAR", "LUKLA", "BHAIRAHAWA", "BHARATPUR", "SURKHET", "JHAPA", "DHANGADI", "KATHMANDU", "POKHARA", "NEPALGUNJ"};
const char origin[3][20] = { "KATHMANDU", "POKHARA", "NEPALGUNJ"};
class price{
	protected:
		char destination1[10],origin1[10];
		float ktmtopkr = 2600;
		float ktmtonpj = 5000;
		float ktmtobir = 4000;
		float ktmtoluk = 10000;
		float ktmtobhw = 3200;
		float ktmtobha = 2900;
		float ktmtosur = 5500;
		float ktmtojha = 5000;
		float ktmtodha = 8000;
		float pkrtoktm = 3000;
		float pkrtonpj = 5500;
		float pkrtobir = 4500;
		float pkrtoluk = 10500;
		float pkrtobhw = 1800;
		float pkrtobha = 2000;
		float pkrtosur = 3300;
		float pkrtojha = 4000;
		float pkrtodha = 3100;
		float npjtoktm = 7000;
		float npjtopkr = 5000;
		float npjtobir = 8000;
		float npjtoluk = 12500;
		float npjtobhw = 4400;
		float npjtobha = 6000;
		float npjtosur = 1000;
		float npjtojha = 7000;
		float npjtodha = 2100;
	public:
		float getprice(char d[10], char o[10])
		{
			strcpy(destination1,d);
			strcpy(origin1,o);
			
			if ((strcmp(destination1,"KATHMANDU")==0) && (strcmp(origin1,"NEPALGUNJ"))==0)
			{
				return npjtoktm;
			}
			if ((strcmp(destination1,"POKHARA")==0) && (strcmp(origin1,"NEPALGUNJ"))==0)
			{
				return npjtopkr;
			}
			if ((strcmp(destination1,"BIRATNAGAR")==0) && (strcmp(origin1,"NEPALGUNJ"))==0)
			{
				return npjtobir;
			}
			if ((strcmp(destination1,"LUKLA")==0) && (strcmp(origin1,"NEPALGUNJ"))==0)
			{
				return npjtoluk;
			}
			if ((strcmp(destination1,"BHAIRAHAWA")==0) && (strcmp(origin1,"NEPALGUNJ"))==0)
			{
				return npjtobhw;
			}
			if ((strcmp(destination1,"BHARATPUR")==0) && (strcmp(origin1,"NEPALGUNJ"))==0)
			{
				return npjtobha;
			}
			if ((strcmp(destination1,"SURKHET")==0) && (strcmp(origin1,"NEPALGUNJ"))==0)
			{
				return npjtosur;
			}
			if ((strcmp(destination1,"JHAPA")==0) && (strcmp(origin1,"NEPALGUNJ"))==0)
			{
				return npjtojha;
			}
			if ((strcmp(destination1,"DHANGADHI")==0) && (strcmp(origin1,"NEPALGUNJ"))==0)
			{
				return npjtodha;
			}
				if ((strcmp(destination1,"KATHMANDU")==0) && (strcmp(origin1,"POKHARA"))==0)
			{
				return pkrtoktm;
			}
			if ((strcmp(destination1,"NEPALGUNJ")==0) && (strcmp(origin1,"POKHARA"))==0)
			{
				return pkrtonpj;
			}
			if ((strcmp(destination1,"BIRATNAGAR")==0) && (strcmp(origin1,"POKHARA"))==0)
			{
				return pkrtobir;
			}
			if ((strcmp(destination1,"LUKLA")==0) && (strcmp(origin1,"POKHARA"))==0)
			{
				return pkrtoluk;
			}
			if ((strcmp(destination1,"BHAIRAHAWA")==0) && (strcmp(origin1,"POKHARA"))==0)
			{
				return pkrtobhw;
			}
			if ((strcmp(destination1,"BHARATPUR")==0) && (strcmp(origin1,"POKHARA"))==0)
			{
				return pkrtobha;
			}
			if ((strcmp(destination1,"SURKHET")==0) && (strcmp(origin1,"POKHARA"))==0)
			{
				return pkrtosur;
			}
			if ((strcmp(destination1,"JHAPA")==0) && (strcmp(origin1,"POKHARA"))==0)
			{
				return pkrtojha;
			}
			if ((strcmp(destination1,"DHANGADHI")==0) && (strcmp(origin1,"POKHARA"))==0)
			{
				return pkrtodha;
			}
			if ((strcmp(destination1,"POKHARA")==0) && (strcmp(origin1,"KATHMANDU"))==0)
			{
				return ktmtopkr;
			}
			if ((strcmp(destination1,"NEPALGUNJ")==0) && (strcmp(origin1,"KATHMANDU"))==0)
			{
				return ktmtonpj;
			}
			if ((strcmp(destination1,"BIRATNAGAR")==0) && (strcmp(origin1,"KATHMANDU"))==0)
			{
				return ktmtobir;
			}
			if ((strcmp(destination1,"LUKLA")==0) && (strcmp(origin1,"KATHMANDU"))==0)
			{
				return ktmtoluk;
			}
			if ((strcmp(destination1,"BHAIRAHAWA")==0) && (strcmp(origin1,"KATHMANDU"))==0)
			{
				return ktmtobhw;
			}
			if ((strcmp(destination1,"BHARATPUR")==0) && (strcmp(origin1,"KATHMANDU"))==0)
			{
				return ktmtobha;
			}
			if ((strcmp(destination1,"SURKHET")==0) && (strcmp(origin1,"KATHMANDU"))==0)
			{
				return ktmtosur;
			}
			if ((strcmp(destination1,"JHAPA")==0) && (strcmp(origin1,"KATHMANDU"))==0)
			{
				return ktmtojha;
			}
			if ((strcmp(destination1,"DHANGADHI")==0) && (strcmp(origin1,"KATHMANDU"))==0)
			{
				return ktmtodha;
			}
		}
		
};

class passenger: public price{
	protected:
		char lname[30], fname[30], phone[10], CN[10], address_street[10],address_houseno[10],address_postalcode[10],date[20];
		char departure[20], arrival[20],sex;
		char payment[10], card_no[16], exp_date[20], cvc[3],pay;
		float final_price;
		int age;
	public:
		char getdata()
		{
			price obj_p;
			cout<<"Enter departing city: \t\t";
			cin>>departure;
				for (int i=0; i<strlen(departure); i++)
        		{
        			if (departure[i]>96)
        				{
        					departure[i]=departure[i]-32;
						}
				}
			cout<<"Enter arriving city: \t\t";
			cin>>arrival;
				for (int i=0; i<strlen(arrival); i++)
        		{
        			if (arrival[i]>96)
        			{
        				arrival[i] = arrival[i]-32;
					}
        			
				}
			cout<<"Enter flight date:(MM-DD-YYYY) \t\t";
			cin>>date;	
			if (date[2]!='-'&& date[5]!='-')
			{
				cout<<"INVALID FORMAT, ENTER DATA AGAIN!!"<<endl;
				return 'n';
			}
			
			cout<<"Enter Passengers first name: \t\t";
			cin>>fname;
			cout<<"Enter passengers last name: \t\t";
			cin>>lname;
			cout<<"Enter passengers age: \t\t";
			cin>>age;
			if (age> 100 || age ==100 || age<0 || age ==0)
			{
				cout<<"INVALID AGE, ENTER DATA AGAIN!!"<<endl;
				return 'n';
			}
			cout<<"Enter passengers sex(M/F): \t\t";
			cin>>sex;
			if (sex>96)
			{
				sex=sex-32;		
			}
			if (sex!='M'&& sex!='F')
			{
				cout<<"INVALID SEX, ENTER DATA AGAIN!!"<<endl;
				return 'n';
			}
			
			cout<<"Enter Passengers Contact number \t\t";
			cin>>phone;
			cout<<"Enter passengers house number \t\t";
			cin>>address_houseno;                                        //DATE[10] 12-12-2021
			cout<<"Enter passengers street \t\t";
			cin>>address_street;
			cout<<"Enter passengers postal code \t\t";
			cin>>address_postalcode;
			cout<<"Enter Citizenship Number: \t\t";
			cin>>CN;
			if (departure[0]=='K')
			{
				final_price= obj_p.getprice(arrival,departure);
			}
			else if (departure[0]=='P')
			{
				final_price= obj_p.getprice(arrival,departure);
			}
			else if (departure[0]=='N')
			{
				final_price= obj_p.getprice(arrival,departure);
			}
			else
			{
				cout<<"Destinations donot match!!";
			}
			
			
			strcpy(payment,"UNPAID");
			cout<<"Your total price is NPR: "<<final_price<<endl<<"Do you want to pay now?(Y/N)";	
			cin>>pay;
			pay=pay-32;
			if ( pay == 'Y' || pay== 'y')
			{
				cout<<"Enter 16 digit card number: \t\t";
				cin>>card_no;
				cout<<"Enter card expiry date: \t\t";
				cin>>exp_date;
				cout<<"Enter 3 digit CVC: \t\t";
				cin>>cvc;
				strcpy(payment,"PAID");
			}
		}
		void showdata()
		{
			cout<<"\t\t\t----KEC AIRLINES TICKET----\n";
			cout<<"\t\t\t"<<departure<<" to "<<arrival<<endl;
			if (sex=='M'|| sex=='m')
			{
				cout<<"\t\t\tMr. "<<fname<<" "<<lname<<endl;
			}
			else if (sex=='f'|| sex=='F') 
			{
				cout<<"\t\t\tMrs. "<<fname<<" "<<lname<<endl;
			}
			else 
				cout<<"Invalid option";
			cout<<"\t\t\tAge: "<<age<<"\t"<<endl;
			cout<<"\t\t\tAdress: "<<address_houseno<<" "<<address_street<<" "<<address_postalcode<<endl;
			cout<<"\t\t\tContact number: "<<phone<<"\t"<<endl;
			cout<<"\t\t\tPassenger ID(Citizenship number): "<<CN<<endl;
			cout<<"\t\t\tPayment Status: "<<payment<<endl;
			cout<<"\t\t\tHAVE A SAFE FLIGHT! THANK YOU FOR CHOOSING US";
		}
		void filewrite()
		{
			char condition;
			ofstream user_write;
	 		user_write.open("flightsys.txt", ios::app);
			
			
			while (1)
			{
				condition = getdata();
				user_write.write(reinterpret_cast<char*>(this), sizeof(*this));
				if (condition!='n')
				{
					break;
				}
			}
		}
		
		void new_reservation()
		{
			here:
			string dest, ori;
			char available = 'N';
			char check,pay;
			cout<<"Enter origin: ";
			cin>> ori;
			std::for_each(ori.begin(), ori.end(), [](char & c1) 
			{
        		c1 = ::toupper(c1);
    		});
			cout<<"Enter destination: ";
			cin>>dest;
		    std::for_each(dest.begin(), dest.end(), [](char & c2) 
			{
        		c2 = ::toupper(c2);
    		});
			for(int i = 0; i < 3; i++)
			{
				if (ori == origin[i])
				{
					for(int j = 0; j < 11; j++)
					{
						if (dest == destination[j])
						{
							available = 'Y';
						}
					}
				}
			}

			if (available == 'Y')
			{
				cout<<"The flight is available"<<endl;
				cout<<"Do you want to book ticket? ";
				cin>>check;
				check=check-32;
				if (check == 'Y')
				{
					filewrite();
					system("cls");
					cout<<"\t\t\tPrinting your ticket:\n\n"<<endl;
				
					showdata();	
					
					cout<<"\n\n\n\t\t\t\tPress Enter to continue: ";
					getch();
					system("CLS");
					
				}
				else
					return;
			}
			else
			{
				cout<<"The flight is not available"<<endl;
				cout<<"Please re-enter datas"<<endl;
				goto here;
			}
				


		}
		void cancel_reservation()
		{
			char cn_todel[10], des_todel[20], ori_todel[20];
			fstream file;
			file.open("flightsys.txt");
			fstream f1;
			file.clear();
			f1.open("temp.txt", ios::out | ios::trunc);
			cout<<"TO CANCEL RESERVATION: "<<endl;
			cout<<"Enter citizenship number: ";
			cin>>cn_todel;
			cout<<"Enter origin you chose: ";
			cin>>ori_todel;
			cout<<"Enter destination you chose: ";
			cin>>des_todel;
			
			while (!file.eof())
			{
				if(file.read(reinterpret_cast<char*>(this), sizeof(*this))>0)
				{
					if ((strcmp(arrival, des_todel) == 0 )&& (strcmp(departure, ori_todel) == 0)&& (strcmp(cn_todel, CN))==0)
					{
							cout<<"RESERVATION CANCELLED"<<endl;
							
							cout<<"\n\n\n\t\t\t\tPress Enter to continue: ";
							getch();
							system("CLS");
					}
					else
					{
						f1.write(reinterpret_cast<char*>(this), sizeof(*this));
					}
				}
			}
			f1.close();
			file.close();
			remove("flightsys.txt");
			rename("temp.txt", "flightsys.txt");
		}
		void check_flights()
		{
			cout<<endl<<"OUR ORIGINS"<<endl;
			for (int i=0;i<3;i++)
			{
				for(int j=0;j<20;j++)
				{
					cout<<origin[i][j];
				}
				cout<<endl;
			}
			cout<<endl<<"OUR DESTINATIONS"<<endl;
			for (int i=0;i<10;i++)
			{
				for(int j=0;j<20;j++)
				{
					cout<<destination[i][j];
				}
				cout<<endl;
			}
			
			
			char t;
			cout<<"Do you want to book a flight?(Y/N)";
			cin>>t;
			if (t=='Y')
				new_reservation();
			else if (t=='N')
				return ;
		}
		
		void get_ticket()
		{
			char cn_get[10], des_get[20], ori_get[20];
			fstream file;
			file.open("flightsys.txt");
			
			cout<<"TO GET TICKET: "<<endl;
			cout<<"Enter citizenship number: ";
			cin>>cn_get;
			cout<<"Enter origin you chose: ";
			cin>>ori_get;
			cout<<"Enter destination you chose: ";
			cin>>des_get;
			
			system("cls");
			cout<<"\t\t\tPrinting your ticket:\n\n"<<endl;
					
			while (!file.eof())
			{
				if(file.read(reinterpret_cast<char*>(this), sizeof(*this))>0)
				{
					if ((strcmp(arrival, des_get) == 0 )&& (strcmp(departure, ori_get) == 0)&& (strcmp(cn_get, CN))==0)
					{
						showdata();
						cout<<"\n\n\n\t\t\t\tPress Enter to continue: ";
						getch();
						system("CLS");
					}
				}
			}
			file.close();
		}
};

void firstdisplay()
{
	cout<<"\t\t\t\tWELCOME TO KEC AIRLINES\n";
	cout<<"\t\t\t\t-------------------------\n\n";
	cout<<endl<<"\t\t\t\tMENU:\n";
	cout<<"\t\t\t\t1. New reservation"<<endl<<"\t\t\t\t2. Cancel reservation"<<endl<<"\t\t\t\t3. Check flights"<<endl<<"\t\t\t\t4. Get Ticket"<<endl<<"\t\t\t\t5. Exit"<<endl<<endl;
	cout<<endl<<endl<<"\t\t\t\tEnter choice: ";
}

int main()
{
	passenger obj;
	int choice;
	cout<<endl<<endl<<endl<<"\t\t\t\t-------------------------\n";
	cout<<"\t\t\t\tWELCOME TO KEC AIRLINES\n";
	cout<<"\t\t\t\t-------------------------\n";
	
	cout<<"\n\n\n\t\t\t\tPress Enter to continue: ";
	getch();
	system("CLS");
	
	
	
	while(1)
	{
		//cout<<endl<<endl<<"\t\t\t\tEnter choice: ";
		firstdisplay();
		cin>>choice;
		if (choice==1)
		{
			obj.new_reservation();
		}
		else if (choice==2)
		{
			obj.cancel_reservation();
		}
		else if (choice==3)
		{
			obj.check_flights();
		}
		else if (choice == 4)
		{
			obj.get_ticket();
		}
		else if (choice==5)
		{
			break;
		}
		else
		{
			cout<<"\t\t\tInvalid Option, try again";
		}
		
	}
	return 0;
}
