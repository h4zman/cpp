#include <iostream>
#include <stdlib.h>
using namespace std;
void MAIN_MENU();
void SELECTION();
void MAIN_MENU2 ();
void SELECTION2 ();
void FLIGHT_BOOK_INTER();
void FLIGHT_BOOK_LOCAL_KUL();
void FLIGHT_BOOK_LOCAL_KCH();
void FLIGHT_BOOK_LOCAL_JHB();
void FLIGHT_BOOK_LOCAL_BKI();
void FLIGHT_BOOK_LOCAL_SBW();
void INTER();
void LOCAL_KUL();
void LOCAL_KCH();
void LOCAL_JHB();
void LOCAL_BKI();
void LOCAL_SBW();
void LOCAL_INTER();
void LIST_BINTULU();
void LIST_KK();
void LIST_KUCHING();
void LIST_SIBU();
void LIST_LABUAN();
void LIST_MIRI();
void LIST_TAWAU();
void DEPARTURE_LOCAL();
void PAYMENT();
void PAYMENT_NON_REG();
void admin();
void ticketConfirmation();
void invoiceSummary ();
void viewflight();
void adminchoice();
void viewlist();
int num, one_return, local_inter, local_num,local, choice;
double sum,total_fare, fare, gst;
string username = "aaa", username_reg, email, pass, pass_reg, name, surname, national, birth, mobilenum, date, date2, admin_username = "admina", admin_pass = "admina", type;

int main()
{
	system("color Z3");

    MAIN_MENU();//The first page of the program

    return 0;
}
void SELECTION()// Selection program for the first main menu
{
    //Selection for the first page
    if (num == 1)//Bring you to the login page
    {
        system ("cls");
        cout << "LOGIN PAGE \n\n";
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> pass;
        system ("cls");
        if ((username == username_reg) && (pass == pass_reg))//Login for the members
        {
            system ("cls");
            MAIN_MENU2();//Bring to customer page menu
        }
        else if (username == admin_username && pass == admin_pass)//Login to the admin
        {
            system ("cls");
            admin();//Bring to admin page menu
        }
        else
        {
            cout << "\nTHE USERNAME OR PASSWORD YOU ENTER IS INCORRECT. PLEASE REGISTER IF TO BE A MEMBER OF FLY HIGH AIRLINE.\n";
            MAIN_MENU();

        }

    }

    else if (num == 2)//Bring to flight book page
    {
        system ("cls");

        cout << "FLIGHT BOOKING PAGE \n\n";
        LOCAL_INTER();//Page to choose local or international flight

    }
    else if (num == 3)//Display every flights available for the customer
    {
        system ("cls");
        cout << "ALL AVAILABLE FLIGHTS\n\n";
        cout << "AVAILABLE INTERNATIONAL FLIGHTS\n\n";
        cout << "Departure Date(DD/MM/YYYY): ";
        cin >> date;//input the date
        cout << "Depart From Kuala Lumpur";
        viewflight();

        system("PAUSE");
        system ("cls");
        MAIN_MENU();

    }

    else if (num == 4)//Sign up page for customer who wants to register
    {
        system ("cls");
        cout << "SIGN UP PAGE \n\n";
        cout << "Login Information\n\n";
        cout << "Username: ";
        cin >> username_reg;//input username
        cout << "\nEmail: ";
        cin >> email;//input email
        cout << "\nPassword: ";
        cin >> pass_reg;//input password

        cout << "\n\nPersonal Details";
        cout << "\n\nGiven Name: ";
        cin >> name;//input Given Name
        cout << "\nFamily Name / Surname: ";
        cin >> surname;//Input Family Name
        cout << "\nDate of Birth (DD/MM/YYYY): ";
        cin >> birth;//Input birthday
        cout << "\nNationality: ";
        cin >> national;//input citizenship

        cout << "\n\nContact Details ";
        cout << "\n\nMobile Number: ";
        cin >> mobilenum;//input mobile number
        system ("cls");
        cout << "THANK YOU FOR BEING A MEMBER OF FLY HIGH AIRLINE\n\n";
        MAIN_MENU();//Go back to main menu page

    }




    else if (num == 5)//Exiting the program
    {
        system ("cls");
        cout << "THANK YOU FOR USING FLY HIGH AIRLINE. PLEASE COME AGAIN.\n\n";

    }

    else//If someone enter wrong options it will take them back to the main menu
    {
        system ("cls");
        cout << "PLEASE SELECT A VALID OPTION BY ENTERING ONE OF THE NUMBERS\n\n";
        MAIN_MENU();//Taking back to the main menu
    }

}

void MAIN_MENU()//First Page for Register and Login

{

    cout << "Welcome to Fly High Airline" <<endl <<endl;
    cout << "Please select one of the options below by entering the number:" << endl;
    cout << "1. Log in" << endl;
    cout << "2. Flight Booking" << endl;
    cout << "3. View Available Flights" << endl;
    cout << "4. Register" << endl;
    cout << "5. Exit" << endl<< endl;
    cin >> num;
    SELECTION();//Selection page to for the selecting program

}
void MAIN_MENU2 ()//Main menu 2 is for the registered members after logging in
{

    cout << "Welcome to Fly High Airline" <<endl <<endl;
    cout << "You have now logged in, " << name << " " << surname <<endl <<endl;//This output is going to show the name of the registered user
    cout << "Please select one of the options below by entering the number:" << endl;
    cout << "1. Flight Booking" << endl;
    cout << "2. View Available Flights" << endl;
    cout << "3. Log out" << endl;
    cout << "4. Exit" << endl<< endl;
    cin >> num;
    SELECTION2();// Selection program for main menu 2
}

void SELECTION2()//Selection program for the main menu 2
{

    if (num == 1) //Bring to flight book page
    {
        system ("cls");

        cout << "FLIGHT BOOKING PAGE \n\n";
        LOCAL_INTER(); // Choosing local or international flight

    }

    else if (num == 2)//Displaying every single available flights
    {
        system ("cls");
        viewflight();
        system("PAUSE");
        system ("cls");
        MAIN_MENU2();
    }

    else if (num == 3)//Logging out for the customer
    {
        system ("cls");
        cout << "YOU ARE NOW LOGGED OUT\n\n";
        MAIN_MENU();//Bring back to main menu page
    }

    else if (num == 4)//Exiting the program
    {
        system ("cls");
        cout << "THANK YOU FOR UING FLY HIGH AIRLINE. PLEASE COME AGAIN.\n\n";

    }

    else//Correction if a user enter an invalid option
    {
        system ("cls");
        cout << "PLEASE SELECT A VALID OPTION BY ENETERING ONE OF THE NUMBERS\n\n";
        MAIN_MENU2();//Bring user back to main menu 2 page
    }
}
void FLIGHT_BOOK_INTER()//It shows International flights and to put date for your flight
{
    system ("cls");
    cout << "KUALA LUMPUR IS THE ONLY DEPATURE POINT FOR AN INTERNATIONAL FLIGHT.\n\n";
    cout << "INTERNATIONAL FLIGHT BOOKING PAGE \n\n";
    cout << "Sorry! The booking for international flight is still not available yet!\n\n";
    cout << "You will be returned to Local Flight Option \n\n";
    LOCAL_INTER();

}
void FLIGHT_BOOK_LOCAL_KUL()//It shows Kuala Lumpur flights and to put date for the user flight
{
    system ("cls");
    cout << "LOCAL FLIGHT BOOKING PAGE \n\n";
    cout << "FLY HIGH AIRLINE ONLY PROVIDE ONE-WAY FLIGHT BUT WE SHALL PROVIDE YOU WITH THE BEST SERVICE\n\n";
    cout << "Departure Date(DD/MM/YYYY): ";
    cin >> date;//input the date
    LOCAL_KUL();//This will take the user to the Kuala Lumpur available flight list


}

void FLIGHT_BOOK_LOCAL_KCH()//It shows Kuching flights and to put the date for the user fight
{
    system ("cls");
    cout << "LOCAL FLIGHT BOOKING PAGE \n\n";
    cout << "FLY HIGH AIRLINE ONLY PROVIDE ONE-WAY FLIGHT BUT WE SHALL PROVIDE YOU WITH THE BEST SERVICE\n\n";
   // cout << "Sorry! The flight booking from Kuching is not available yet!\n\n";
    //cout << " You will be redirected to Local Flight Option\n\n\";
    DEPARTURE_LOCAL();//Bring user to local flight page

}
void FLIGHT_BOOK_LOCAL_JHB()//It shows Johor Bahru flights and to put the date for the user flight
{
    system ("cls");
    cout << "LOCAL FLIGHT BOOKING PAGE \n\n";
    cout << "FLY HIGH AIRLINE ONLY PROVIDE ONE-WAY FLIGHT BUT WE SHALL PROVIDE YOU WITH THE BEST SERVICE\n\n";
    cout << "Sorry! The booking for Johor Baharu flight is still not available yet!\n\n";
    cout << "You will be returned to Local Flight Option \n\n";;
	DEPARTURE_LOCAL();//Bring user to local flight page

}
void FLIGHT_BOOK_LOCAL_BKI()//It shows Kota Kinabalu flights and to put the date for the user flight
{
    system ("cls");
    cout << "LOCAL FLIGHT BOOKING PAGE \n\n";
    cout << "FLY HIGH AIRLINE ONLY PROVIDE ONE-WAY FLIGHT BUT WE SHALL PROVIDE YOU WITH THE BEST SERVICE\n\n";
    cout << "Sorry! The booking for Kota Kinabalu flight is still not available yet!\n\n";
    cout << "You will be returned to Local Flight Option \n\n";
    DEPARTURE_LOCAL();//Bring user to local flight page;

}
void FLIGHT_BOOK_LOCAL_SBW()//It shows Sibu flights and to put the data for the user flight
{
    system ("cls");
    cout << "LOCAL FLIGHT BOOKING PAGE \n\n";
    cout << "FLY HIGH AIRLINE ONLY PROVIDE ONE-WAY FLIGHT BUT WE SHALL PROVIDE YOU WITH THE BEST SERVICE\n\n";
    cout << "Sorry! The booking for Sibu flight is still not available yet!\n\n";
    cout << "You will be returned to Local Flight Option \n\n";
	DEPARTURE_LOCAL();//Bring user to local flight page

}
void LOCAL_INTER()//Selecting between going to local or international flights
{

    cout << "Please select\n1.Local Flights\n2.International Flights\n3.Back \n\n";
    cin >> local_inter;//input number for selection
    if (local_inter == 1)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED LOCAL FLIGHTS\n\n";
        DEPARTURE_LOCAL();//Bring user to local flight page
    }
    else if (local_inter == 2)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED INTERNATIONAL FLIGHTS\n\n";
        FLIGHT_BOOK_INTER();//Bring user to international flight page

    }
    else if ((local_inter == 3) && (username == username_reg))//Bring registered user back to main menu 2 page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO THE MAIN PAGE\n\n";
        MAIN_MENU2();//Bring user to main menu 2 page for registered user

    }
    else if (local_inter == 3)//Bring non registered user back to main menu page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO THE MAIN PAGE\n\n";
        MAIN_MENU();//Bring user to main menu page for non registered user

    }
    else//Correction for input error
    {
        system ("cls");
        cout << "FLIGHT BOOKING PAGE \n\n";
        cout << "PLEASE SELECT A VALID OPTION BY ENTERING ONE OF THE NUMBERS\n\n";
        LOCAL_INTER();//Bring user to this page again if error occur in input
    }


}

void DEPARTURE_LOCAL()//Local flight page to choose your departure point
{
    cout << "Please select your departure point from the selection below by entering the number: \n\n1.Kuala Lumpur (KUL)\n2.Kuching (KCH)\n3.Johor Bahru (JHB) \n4.Kota Kinabalu (BKI) \n5.Sibu (SBW)\n6.Back \n\n";
    cin >> local;//input selection
    if (local == 1)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED KUALA LUMPUR AS DEPARTURE POINT\n\n";
        FLIGHT_BOOK_LOCAL_KUL();//Bring user to Kuala Lumpur available flight list
    }
    else if (local == 2)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED KUCHING AS DEPARTURE POINT\n\n";
        FLIGHT_BOOK_LOCAL_KCH();//Bring user to Kuching available flight list

    }
    else if (local == 3)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED JOHOR BAHRU AS DEPARTURE POINT\n\n";
        FLIGHT_BOOK_LOCAL_JHB();//Bring user to Johor Bahru available flight list

    }
    else if (local == 4)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED KOTA KINABALU AS DEPARTURE POINT\n\n";
        FLIGHT_BOOK_LOCAL_BKI();//Bring user to Kota Kinabalu available flight list

    }
    else if (local == 5)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED SIBU AS DEPARTURE POINT\n\n";
        FLIGHT_BOOK_LOCAL_SBW();//Bring user to Sibu available flight list

    }

    else if (local == 6)//Back to previous page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO LOCAL OR INTERNATIONAL FLIGHT SELECTION PAGE\n\n";
        LOCAL_INTER();//Bring user back to local or international flight selection page

    }
    else//correction for input error
    {
        system ("cls");
        cout << "FLIGHT BOOKING PAGE \n\n";
        cout << "PLEASE SELECT A VALID OPTION BY ENTERING ONE OF NUMBERS IN THE OPTIONS\n\n";
        DEPARTURE_LOCAL();//Bring user back to this page if error occur in input
    }


}


void LOCAL_KUL()
{
    cout << "Depart From Kuala Lumpur";
    cout << "\n\n-----------------------";
    cout << "\n| No. | Destination      .";
    cout << "\n-------------------------";
    cout << "\n| 1. | Bintulu			."; 
    cout << "\n| 2. | Kota Kinabalu		.";
    cout << "\n| 3. | Kuching			.";
    cout << "\n| 4. | Labuan			.";
    cout << "\n| 5. | Miri				.";
    cout << "\n| 6. | Sibu				.";
    cout << "\n| 7. | Tawau				.";
    cout << "\n-------------------------";
    cout << "\n\n 0.Back";
    cout << "\n\nPlease select the destination that you are heading to: ";
    cin >> local_num;
    if (local_num == 1)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED BINTULU AS YOUR DESTINATION \n\n";
        LIST_BINTULU();
    }
    else if (local_num == 2)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED KOTA KINABALU AS YOUR DESTINATION \n\n ";
        LIST_KK();

    }
    else if (local_num == 3)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED KUCHING AS YOUR DESTINATION \n\n ";
        LIST_KUCHING();

    }else if (local_num == 4)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED LABUAN AS YOUR DESTINATION \n\n ";
        LIST_LABUAN();

    }
    else if (local_num == 5)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MIRI AS YOUR DESTINATION \n\n ";
        LIST_MIRI();

    }
    else if (local_num == 6)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED SIBU AS YOUR DESTINATION \n\n ";
        LIST_SIBU();
    }
    else if (local_num == 7)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED TAWAU AS YOUR DESTINATION \n\n ";
        LIST_TAWAU();

    }
    
    else if (local_num == 0)//Back previous page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO LOCAL OR INTERNATIONAL FLIGHT SELECTION PAGE\n\n";
        DEPARTURE_LOCAL();//Bring user back to local departure point flight selection page

    }
    else
    {
        system ("cls");
        cout << "PLEASE SELECT A VALID OPTION BY ENTERING ONE OF THE NUMBERS\n\n";
        LOCAL_KUL();
    }


}

void LIST_BINTULU()
{
	 cout << "\n\nAVAILABLE FLIGHTS FROM KLIA\n\n";
        cout << "Depart From KLIA";
        cout << "Destination: Bintulu ";
        cout << "\n\n--------------------------------------------------------------------------";
        cout << "\n| No. | Airline Carrier  | Depart Time | Arrive Time | Duration | Price     |";
        cout << "\n----------------------------------------------------------------------------";
        cout << "\n| 1.  | MAS              | 17:30       | 19:35       | 2H 05M   | RM 164.76 |";
        cout << "\n| 2.  | Air Asia         | 06:35       | 08:50       | 2H 15M   | RM 218.82 |";
        cout << "\n| 3.  | Air Asia         | 17:50       | 20:05       | 2H 15M   | RM 262.78 |";
        cout << "\n| 4.  | MAS              | 08:25       | 10:45       | 2H 20M   | RM 295.72 |";
        cout << "\n\n--------------------------------------------------------------------------";
        cout << "\n\n 0.Back";
    	cout << "\n\nPlease select the number of flight that you want to book: ";
    	cin >> local_num;

if (local_num == 1)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MAS FLIGHT TO BINTULU DEPATURE: 17:30 ARRIVAL: 19:35\n\n";
        sum = 164.76;
        PAYMENT();
    }
    else if (local_num == 2)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED Air Asia FLIGHT TO BINTULU DEPARTURE: 06:35 ARRIVAL: 08:50\n\n ";
        sum = 218.82;
        PAYMENT();

    }
    else if (local_num == 3)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED Air Asia FLIGHT TO BINTULU DEPARTURE: 09:00 ARRIVAL: 09:35\n\n ";
        sum =262.78;
        PAYMENT();

    }else if (local_num == 4)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MAS FLIGHT TO BINTULU DEPARTURE: 08:25 ARRIVAL: 10:45\n\n ";
        sum = 295.72;
        PAYMENT();
    }
	else if (local_num == 0)//Back previous page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO KUALA LUMPUR FLIGHT SELECTION PAGE\n\n";
        LOCAL_KUL();//Bring user back to local departure point flight selection page

    }
    else
    {
        system ("cls");
        cout << "PLEASE SELECT A VALID OPTION BY ENTERING ONE OF THE NUMBERS\n\n";
        LIST_BINTULU();
    }
 
}

void LIST_KK()
{
cout << "\n\nAVAILABLE FLIGHTS FROM KLIA\n\n";
        cout << "Depart From KLIA";
        cout << "Destination: Kota Kinabalu ";
        cout << "\n\n--------------------------------------------------------------------------";
        cout << "\n| No. | Airline Carrier  | Depart Time | Arrive Time | Duration | Price     |";
        cout << "\n----------------------------------------------------------------------------";
        cout << "\n| 1.  | Air Asia         | 05:50       | 08:30       | 2H 40M   | RM 143.05 |";
        cout << "\n| 2.  | Air Asia         | 06:45       | 09:30       | 2H 45M   | RM 143.05 |";
        cout << "\n| 3.  | Air Asia         | 08:45       | 11:30       | 2H 45M   | RM 143.05 |";
        cout << "\n| 4.  | Malindo          | 19:15       | 21:35       | 2H 20M   | RM 201.18 |";
        cout << "\n| 5.  | Malindo          | 13:35       | 15:55       | 2H 20M   | RM 210.70 |";
        cout << "\n| 6.  | Malindo          | 07:55       | 10:45       | 2H 20M   | RM 220.97 |";
        cout << "\n| 7.  | Malindo          | 16:55       | 19:35       | 2H 50M   | RM 264.93 |";
        cout << "\n| 8.  | Air Asia         | 08:40       | 11:20       | 2H 40M   | RM 264.93 |";
        cout << "\n| 9.  | Malindo          | 19:50       | 21:00       | 1H 25M   | RM 292.57 |";
        cout << "\n| 10. | Firefly          | 11:45       | 13:40       | 1H 55M   | RM 312.07 |";
        cout << "\n----------------------------------------------------------------------------";
     	cout << "\n\n 0.Back";
    	cout << "\n\nPlease select the number of flight that you want to book: ";
    	cin >> local_num; 
		if (local_num == 1)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED AIR ASIA FLIGHT TO KOTA KINABALU DEPATURE: 05:50 ARRIVAL: 08:30\n\n";
        sum = 143.05;
        PAYMENT();
    }
    else if (local_num == 2)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED Air Asia FLIGHT TO KOTA KINABALU DEPARTURE: 06:45 ARRIVAL: 09:30\n\n ";
        sum = 143.05;
        PAYMENT();

    }
    else if (local_num == 3)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED Air Asia FLIGHT TO KOTA KINABALU DEPARTURE: 08:45 ARRIVAL: 11:30\n\n ";
        sum =143.05;
        PAYMENT();

    }else if (local_num == 4)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MALINDO TO KOTA KINABALU DEPARTURE: 19:15 ARRIVAL: 21:35\n\n ";
        sum = 201.18;
        PAYMENT();
	}
	else if (local_num == 5)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MALINDO TO KOTA KINABALU DEPARTURE: 13:35 ARRIVAL: 15:55\n\n ";
        sum = 210.70;
        PAYMENT();
        
	}
	else if (local_num == 6)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MALINDO TO KOTA KINABALU DEPARTURE: 07:55 ARRIVAL: 10:45\n\n ";
        sum = 220.97;
        PAYMENT();
        
	}
	else if (local_num == 7)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MALINDO TO KOTA KINABALU DEPARTURE: 16:55 ARRIVAL: 19:35\n\n ";
        sum = 264.93;
        PAYMENT();
        
	}
	else if (local_num == 8)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED Air Asia TO KOTA KINABALU DEPARTURE: 08:40 ARRIVAL: 11:20\n\n ";
        sum = 264.93;
        PAYMENT();
        
    }
	else if (local_num == 9)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MALINDO TO KOTA KINABALU DEPARTURE: 19:50 ARRIVAL: 21:00\n\n ";
        sum = 292.57;
        PAYMENT();
    
	}
	else if (local_num == 10)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED Firefly TO KOTA KINABALU DEPARTURE: 11:45 ARRIVAL: 13:40\n\n ";
        sum = 312.07;
        PAYMENT();
        
    }
	else if (local_num == 0)//Back previous page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO KUALA LUMPUR FLIGHT SELECTION PAGE\n\n";
        LOCAL_KUL();//Bring user back to local departure point flight selection page

    }
    else
    {
        system ("cls");
        cout << "PLEASE SELECT A VALID OPTION BY ENTERING ONE OF THE NUMBERS\n\n";
        LIST_KK();
    }  
}

void LIST_KUCHING()
{
cout << "\n\nAVAILABLE FLIGHTS FROM KLIA\n\n";
        cout << "Depart From KLIA";
        cout << "Destination: Kuching ";
        cout << "\n\n--------------------------------------------------------------------------";
        cout << "\n| No. | Airline Carrier  | Depart Time | Arrive Time | Duration | Price     |";
        cout << "\n----------------------------------------------------------------------------";
        cout << "\n| 1.  | Air Asia         | 07:05       | 09:00       | 1H 55M   | RM 189.00 |";
        cout << "\n| 2.  | Air Asia         | 07:45       | 09:45       | 1H 55M   | RM 189.00 |";
        cout << "\n| 3.  | Air Asia         | 22:45       | 00:35       | 1H 50M   | RM 189.00 |";
        cout << "\n| 4.  | Air Asia         | 12:05       | 13:55       | 1H 50M   | RM 220.97 |";
        cout << "\n| 5.  | Air Asia         | 21:40       | 23:30       | 1H 50M   | RM 220.97 |";
        cout << "\n| 6.  | Malindo          | 09:35       | 11:25       | 1H 50M   | RM 245.64 |";
        cout << "\n| 7.  | Malindo          | 11:55       | 13:45       | 1H 50M   | RM 245.64 |";
        cout << "\n| 8.  | Air Asia         | 20:50       | 22:45       | 1H 55M   | RM 264.93 |";
        cout << "\n| 9.  | Malindo		    | 18:45       | 20:35       | 1H 50M   | RM 266.81 |";
        cout << "\n| 10. | MAS			    | 07:55       | 09:35       | 1H 40M   | RM 368.71 |";
        cout << "\n----------------------------------------------------------------------------";   
			cout << "\n\n 0.Back";
    	cout << "\n\nPlease select the number of flight that you want to book: ";
    	cin >> local_num; 
		if (local_num == 1)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED AIR ASIA FLIGHT TO KUCHING DEPATURE: 07:05 ARRIVAL: 09:00\n\n";
        sum = 189.00;
        PAYMENT();
    }
    else if (local_num == 2)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED AIR ASIA FLIGHT TO KUCHING DEPATURE: 07:45 ARRIVAL: 09:45\n\n ";
        sum = 189.00;
        PAYMENT();

    }
    else if (local_num == 3)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED Air Asia FLIGHT TO KUHCING DEPARTURE: 22:45 ARRIVAL: 00:35\n\n ";
        sum =189.00;
        PAYMENT();

    }else if (local_num == 4)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED Air Asia TO KUCHING DEPARTURE: 12:05 ARRIVAL: 13:55\n\n ";
        sum = 220.97;
        PAYMENT();
	}
	else if (local_num == 5)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED Air Asia TO KUCHING DEPARTURE: 21:40 ARRIVAL: 23:30\n\n ";
        sum = 220.97;
        PAYMENT();
	}
	else if (local_num == 6)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MALINDO TO KUCHING DEPARTURE: 09:35 ARRIVAL: 11:25\n\n ";
        sum = 245.64;
        PAYMENT();
	}
	else if (local_num == 7)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MALINDO TO KUCHING DEPARTURE: 11:55 ARRIVAL: 13:45\n\n ";
        sum = 245.64;
        PAYMENT();
    }
	else if (local_num == 8)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED Air Asia TO KUCHING DEPARTURE: 20:50 ARRIVAL: 22:45\n\n";
        sum = 264.93;
        PAYMENT();
	}
    else if (local_num == 9)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MALINDO TO KUCHING DEPARTURE: 18:45 ARRIVAL: 20:35\n\n ";
        sum = 266.81;
        PAYMENT();
	}
	else if (local_num == 10)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MAS TO KUCHING DEPARTURE: 07:55 ARRIVAL: 09:35\n\n ";
        sum = 368.71;
        PAYMENT();
	}

    else if (local_num == 0)//Back previous page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO KUALA LUMPUR FLIGHT SELECTION PAGE\n\n";
        LOCAL_KUL();//Bring user back to local departure point flight selection page

    }
    else
    {
        system ("cls");
        cout << "PLEASE SELECT A VALID OPTION BY ENTERING ONE OF THE NUMBERS\n\n";
        LIST_KUCHING();
    }
}

void LIST_LABUAN()
{
cout << "Depart From KLIA";
        cout << "Destination: Labuan ";
        cout << "\n\n--------------------------------------------------------------------------";
        cout << "\n| No. | Airline Carrier  | Depart Time | Arrive Time | Duration | Price     |";
        cout << "\n----------------------------------------------------------------------------";
        cout << "\n| 1.  | MAS              | 08:25       | 10:40       | 2H 25M   | RM 158.39 |";
        cout << "\n| 2.  | Air Asia         | 17:10       | 19:40       | 2H 30M   | RM 308.89 |";
        cout << "\n| 3.  | Air Asia         | 19:25       | 21:50       | 2H 25M   | RM 350.66 |";
        cout << "\n| 4.  | MAS              | 10:45       | 14:25       | 3H 40M   | RM 460.29 |";
        cout << "\n----------------------------------------------------------------------------";   
		cout << "\n\n 0.Back";
    	cout << "\n\nPlease select the number of flight that you want to book: ";
    	cin >> local_num; 
		if (local_num == 1)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MAS FLIGHT TO LABUAN DEPATURE: 08:25 ARRIVAL: 10:40\n\n";
        sum = 158.39;
        PAYMENT();
    }
    else if (local_num == 2)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED AIR ASIA FLIGHT TO LABUAN DEPATURE: 17:10 ARRIVAL: 19:40\n\n ";
        sum = 308.89;
        PAYMENT();

    }
    else if (local_num == 3)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED Air Asia FLIGHT TO LABUAN DEPARTURE: 19:25 ARRIVAL: 21:50\n\n ";
        sum =350.29;
        PAYMENT();

    }else if (local_num == 4)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MAS TO KUCHING DEPARTURE: 10:45 ARRIVAL: 14:25\n\n ";
        sum = 460.29;
        PAYMENT();
    }
	 else if (local_num == 0)//Back previous page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO KUALA LUMPUR FLIGHT SELECTION PAGE\n\n";
        LOCAL_KUL();//Bring user back to local departure point flight selection page

    }
    else
    {
        system ("cls");
        cout << "PLEASE SELECT A VALID OPTION BY ENTERING ONE OF THE NUMBERS\n\n";
        LIST_LABUAN();
    }  
}


void LIST_MIRI()
{
 cout << "\n\nAVAILABLE FLIGHTS FROM KLIA\n\n";
        cout << "Depart From KLIA";
        cout << "Destination: Miri ";
        cout << "\n\n--------------------------------------------------------------------------";
        cout << "\n| No. | Airline Carrier  | Depart Time | Arrive Time | Duration | Price     |";
        cout << "\n----------------------------------------------------------------------------";
        cout << "\n| 1.  | Air Asia         | 07:00       | 09:25       | 2H 25M   | RM 199.99 |";
        cout << "\n| 2.  | Air Asia         | 10:35       | 13:00       | 2H 25M   | RM 199.99 |";
        cout << "\n| 3.  | Air Asia         | 11:35       | 13:55       | 2H 20M   | RM 199.99 |";
        cout << "\n| 4.  | Air Asia         | 14:50       | 17:10       | 2H 20M   | RM 295.75 |";
        cout << "\n| 5.  | Air Asia         | 16:50       | 19:10       | 2H 20M   | RM 295.75 |";
        cout << "\n| 6.  | MAS              | 10:45       | 13:00       | 2H 15M   | RM 299.99 |";
        cout << "\n| 7.  | MAS              | 14:25       | 16:40       | 2H 15M   | RM 299.99 |";
        cout << "\n----------------------------------------------------------------------------";   
		cout << "\n\n 0.Back";
    	cout << "\n\nPlease select the number of flight that you want to book: ";
    	cin >> local_num; 
		if (local_num == 1)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED AIR ASIA FLIGHT TO MIRI DEPATURE: 07:00 ARRIVAL: 09:25\n\n";
        sum = 199.99;
        PAYMENT();
    }
    else if (local_num == 2)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED AIR ASIA FLIGHT TO MIRI DEPATURE: 10:35 ARRIVAL: 13:00\n\n ";
        sum = 199.99;
        PAYMENT();
	}
	
    else if (local_num == 3)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED Air Asia FLIGHT TO MIRI DEPARTURE: 11:35 ARRIVAL: 13:55\n\n ";
        sum =199.99;
        PAYMENT();
	}
	
	else if (local_num == 4)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED AIR ASIA TO MIRI DEPARTURE: 14:50 ARRIVAL: 17:10\n\n ";
        sum = 295.75;
        PAYMENT();
	}
    
	else if (local_num == 5)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED AIR ASIA TO MIRI DEPARTURE: 16:50 ARRIVAL: 19:10\n\n ";
        sum = 295.75;
        PAYMENT();
    }
	
	else if (local_num == 6)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MAS TO MIRI DEPARTURE: 10:45 ARRIVAL: 13:00\n\n ";
        sum = 299.99;
        PAYMENT();
    } 
	else if (local_num == 7)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MAS TO MIRI DEPARTURE: 14:25 ARRIVAL: 16:40\n\n ";
        sum = 299.99;
        PAYMENT(); 
	}
     else if (local_num == 0)//Back previous page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO KUALA LUMPUR FLIGHT SELECTION PAGE\n\n";
        LOCAL_KUL();//Bring user back to local departure point flight selection page

    }
    else
    {
        system ("cls");
        cout << "PLEASE SELECT A VALID OPTION BY ENTERING ONE OF THE NUMBERS\n\n";
        LIST_LABUAN();
    }  
}

void LIST_SIBU()
{
 cout << "Depart From KLIA";
        cout << "Destination: Sibu ";
        cout << "\n\n--------------------------------------------------------------------------";
        cout << "\n| No. | Airline Carrier  | Depart Time | Arrive Time | Duration | Price     |";
        cout << "\n----------------------------------------------------------------------------";
        cout << "\n| 1.  | Air Asia         | 06:15       | 08:15       | 2H 0M    | RM 506.71 |";
        cout << "\n| 2.  | Air Asia         | 07:50       | 09:50       | 2H 0M    | RM 506.71 |";
        cout << "\n| 3.  | MAS              | 08:30       | 10:25       | 1H 55M   | RM 826.03 |";
        cout << "\n| 4.  | MAS              | 10:00       | 12:00       | 2H 0M    | RM 847.37 |";
        cout << "\n| 5.  | Air Asia         | 14:05       | 16:05       | 2H 0M    | RM 1002.25|";
        cout << "\n| 6.  | MAS              | 19:40       | 21:35       | 1H 55M   | RM 1035.20|";
        cout << "\n----------------------------------------------------------------------------";
		cout << "\n\n 0.Back";
    	cout << "\n\nPlease select the number of flight that you want to book: ";
    	cin >> local_num; 
		if (local_num == 1)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED AIR ASIA FLIGHT TO SIBU DEPATURE: 06:15 ARRIVAL: 08:15\n\n";
        sum = 506.71;
        PAYMENT();
    }
    else if (local_num == 2)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED AIR ASIA FLIGHT TO SIBU DEPATURE: 07:50 ARRIVAL: 09:50\n\n ";
        sum = 506.71;
        PAYMENT();
	}
	
    else if (local_num == 3)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MAS FLIGHT TO SIBU DEPARTURE: 08:30 ARRIVAL: 10:25\n\n ";
        sum =826.03;
        PAYMENT();
	}
	
	else if (local_num == 4)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MAS TO SIBU DEPARTURE: 10:00 ARRIVAL: 12:00\n\n ";
        sum = 847.37;
        PAYMENT();
	}
    
	else if (local_num == 5)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED AIR ASIA TO SIBU DEPARTURE: 14:05 ARRIVAL: 16:05\n\n ";
        sum = 1002.25;
        PAYMENT();
    }
	
	else if (local_num == 6)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MAS TO SIBU DEPARTURE: 19:40 ARRIVAL: 21:35\n\n ";
        sum = 1035.20;
        PAYMENT();
    } 
    
     else if (local_num == 0)//Back previous page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO KUALA LUMPUR FLIGHT SELECTION PAGE\n\n";
        LOCAL_KUL();//Bring user back to local departure point flight selection page

    }
    else
    {
        system ("cls");
        cout << "PLEASE SELECT A VALID OPTION BY ENTERING ONE OF THE NUMBERS\n\n";
        LIST_SIBU();
    }  
		
}
void LIST_TAWAU()
{
 cout << "\n\nAVAILABLE FLIGHTS FROM KLIA\n\n";
        cout << "Depart From KLIA";
        cout << "Destination: Tawau ";
        cout << "\n\n--------------------------------------------------------------------------";
        cout << "\n| No. | Airline Carrier  | Depart Time | Arrive Time | Duration | Price     |";
        cout << "\n----------------------------------------------------------------------------";
        cout << "\n| 1.  | MAS              | 07:25       | 10:20       | 2H 55M   | RM 274.61 |";
        cout << "\n| 2.  | MAS              | 14:40       | 17:30       | 2H 50M   | RM 352.79 |";
        cout << "\n| 3.  | Air Asia         | 12:20       | 15:55       | 2H 55M   | RM 364.84 |";
        cout << "\n| 4.  | Air Asia         | 05:50       | 08:10       | 3H 0M    | RM 419.79 |";
        cout << "\n----------------------------------------------------------------------------";      
		cout << "\n\n 0.Back";
    	cout << "\n\nPlease select the number of flight that you want to book: ";
    	cin >> local_num; 
		if (local_num == 1)
	{
	        system ("cls");
        cout << "YOU HAVE SELECTED MAS FLIGHT TO TAWAU DEPATURE: 07:25 ARRIVAL: 10:20\n\n";
        sum = 274.61;
        PAYMENT();
    }
    else if (local_num == 2)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED MAS FLIGHT TO TAWAU DEPATURE: 14:40 ARRIVAL: 17:30\n\n ";
        sum = 352.79;
        PAYMENT();
	}
	
    else if (local_num == 3)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED AIR ASIA FLIGHT TO TAWAU DEPARTURE: 12:20 ARRIVAL: 15:55\n\n ";
        sum =364.84;
        PAYMENT();
	}
	
	else if (local_num == 4)
    {
        system ("cls");
        cout << "YOU HAVE SELECTED AIR ASIA TO TAWAU DEPARTURE: 05:50 ARRIVAL: 08:10\n\n ";
        sum = 419.79;
        PAYMENT();
	}
		
	else if (local_num == 0)//Back previous page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO KUALA LUMPUR FLIGHT SELECTION PAGE\n\n";
        LOCAL_KUL();//Bring user back to local departure point flight selection page
	}
    else
    {
        system ("cls");
        cout << "PLEASE SELECT A VALID OPTION BY ENTERING ONE OF THE NUMBERS\n\n";
        LIST_TAWAU();
	}
}

void ticketConfirmation() //payment method
{
    int paymentMethod, cardNumber, CVV;
    string bankName, date;

    cout << "Choose the method of payment" << endl;
    cout << "1. Online banking" << endl;
    cout << "2. Debit card/Credit card" << endl;
    cout << endl;
    cout << "Each transaction has no service fee" << endl;
    cin >> paymentMethod;

    if (paymentMethod == 1)
    {  //obnline banking
        type = "Online banking";
        cout <<"\n\nPlease make an online banking to the Fly High Airline MyBank account 11005522990 within 30 minutes to finish you flight booking\n\nAN EMAIL WILL OF YOUR BOOKING SUMMARY AND BOOKING CODE WILL BE SENT TO YOU " <<email <<" AFTER YOU ARE DONE WITH THE PAYMENT\n\nTHANK YOU FOR CHOOSING OUR AIRLINE " << name << " " <<surname << "\n\n";
        cout << "Enter the bank name" << endl;
        cout << "1.Maybank2u" << endl;
        cout << "2.Cimb Clicks" << endl;
        cout << "3.myBSN" << endl;
        cout << "4.HSBC" << endl;
        cout << "5.PayPal" << endl;
        cin >> bankName;
        cout << "Your payment will be directed to the bank website" << endl;
        cout << endl;


        cout << "THIS IS YOUR BOOKING SUMMARY" << endl;
        system ("cls");

        invoiceSummary();
    }

    else if (paymentMethod == 2)
    { //payment by card
        type = "Debit Card/Credit Card";
        cout << "Card number : " << endl;
        cin >> cardNumber;
        cout << "Expire date (mm/yy)" << endl;
        cin >> date;
        cout << "CVV number :" << endl;
        cin >> CVV;
    }

    cout << "Waiting for the response" << endl;
    cout << "........." << endl;
    cout << "Payment received" << endl;
    cout << endl;
    cout << "Thank you for purchasing with us. Have a nice trip." << endl;
    cout << endl;

    cout << "\n\nDo you want to print your booking summary?: ";
    cout << "1. Yes" << endl;
    cout << "2. No.Take me to homepage" << endl;
    cin >> local_num;
    if (local_num == 1)
    {
        system ("cls");
        cout << "THIS IS YOUR BOOKING SUMMARY" << endl;

        invoiceSummary();

    }
    else if (local_num == 2)
    {
        system ("cls");
        MAIN_MENU2();

    }
    cout << "THIS IS YOUR BOOKING SUMMARY" << endl;
    system ("cls");

    invoiceSummary();

}
void invoiceSummary() //details of invoice
{
    cout << "Personal Details";
    cout << "\n\nName: " << name<< " "<< surname;//Display user's name
    cout << "\nDate of Birth: " << birth;//Display user's birthday
    cout << "\nNationality: "<< national;//Display user's citizenship
    cout << "\n\nContact Details ";
    cout << "\n\nMobile Number: " <<mobilenum;//Display user's mobile number
    cout << "\nEmail: " << email;//Display user's email
    cout << "\n\nINOVICE\n\nFARE:RM" << fare << "\nGST:RM" << gst << "\nTOTAL FARE:RM" << total_fare << "\nPAYMENT TYPE:" << type << endl;;

    system("pause");
    system("cls");
    MAIN_MENU();


    cout << endl;
}

void PAYMENT()//The payment page and entering additional information
{
    int adult,children, infant, luggage, pick;

    cout << "\nPlease enter the number of adults (100% Flight Ticket Price): ";
    cin >> adult;//input adults taking flight
    cout << "\n\nPlease enter the number of children (100% Flight Ticket Price): ";
    cin >> children;//input children taking flight
    cout << "\n\nPlease enter the number of infants (FREE): ";
    cin >> infant;//input infants taking flight
    cout << "\n\nThe total number of :-" <<"\nAdults: "<<adult <<"\nChildren: " <<children <<"\nInfant: " <<infant;

    cout << "\n\nThe current provided luggage is 0kg do you want to add:\n1.30kg (RM30)\n2.50kg (RM50)\n3.No luggage addition (RM0)\n\n";
    cin >> luggage;//input luggage selection

    if (luggage==1)
    {
        cout << "\nYOU HAVE SELECTED 30KG LUGGAGE, RM30 WILL BE ADDED TO YOUR FARE";
        luggage = 30;//fixing the price for luggage and also weight selected
    }

    else if (luggage==2)
    {
        cout << "\nYOU HAVE SELECTED 50KG LUGGAGE, RM50 WILL BE ADDED TO YOUR FARE";
        luggage = 50;//fixing the price for luggage and also weight selected
    }

    else if (luggage==3)
    {

        cout << "\nYOU HAVE SELECTED NOT TO ADD LUGGAGE, NO ADDITION CHARGE WILL BE ADDED TO YOUR FARE";
        luggage = 0;//fixing the price for luggage and also weight selected
    }

    else//Correction for input error
    {
        system ("cls");
        cout << "\nYOU HAVE ENTERED AN INVALID OPTION. PLEASE ENTER A NUMBER FROM THE GIVEN OPTIONS NEXT TIME.";
        PAYMENT();//Bring user back to this page if there is an error in input
    }

    cout <<"\n\nYour current luggage is: " << luggage;//Displaying selected luggage
    cout << "\n\nYour booking summary will be :-" <<"\nAdults: "<<adult <<"\nChildren: " <<children <<"\nInfant: " <<infant << "\nYour luggage is " << luggage <<"KG";//Displaying information entered and selected
    fare = luggage + (adult * sum) + (children * sum);//Calculation for the total fare
    gst = fare * 0.06;
    cout << "\n\n6% GST will be charged to your fare:RM" <<gst;
    total_fare = fare * 106/100;//Calculation for applying GST
    cout << "\n\nTHE TOTAL FARE IS RM" << total_fare;//Displaying total fare to user
    cout << "\n\nDo you want to proceed? Enter one of the numbers.\n1.Yes\n2.No\n\n";
    cin >> pick;//Selection for proceeding with flight booking
    if ((pick == 1)&& (username == username_reg))//Display and Selection for registered user after finishing booking
    {
        system ("cls");
        cout << "Personal Details";
        cout << "\n\nGiven Name: " << name;//Display user's name
        cout << "\nFamily Name / Surname: " <<surname;//Display user's family name
        cout << "\nDate of Birth (DD/MM/YYYY): " << birth;//Display user's birthday
        cout << "\nNationality: "<< national;//Display user's citizenship
        cout << "\n\nContact Details ";
        cout << "\n\nMobile Number: " <<mobilenum;//Display user's mobile number
        cout << "\nEmail: " << email;//Display user's email
        cout << "\n\nINOVICE\n\nFARE:RM" << fare << "\nGST:RM" << gst << "\nTOTAL FARE:RM" << total_fare;
        system ("PAUSE");
        system ("cls");

        ticketConfirmation();
    }
    else if (pick == 1)//Selection for non registered user and entering their details
    {
        system ("cls");
        cout << "Personal Details";
        cout << "\n\nGiven Name: ";
        cin >> name;//input user's name
        cout << "\nFamily Name / Surname: ";
        cin >> surname;//input user's family name
        cout << "\nDate of Birth (DD/MM/YYYY): ";
        cin >> birth;//input user's birthday
        cout << "\nNationality: ";
        cin >> national;//input user's citizenship

        cout << "\n\nContact Details ";
        cout << "\n\nMobile Number: ";
        cin >> mobilenum;//input user's mobile number
        cout << "\nEmail: ";
        cin >> email;//input user's email
        cout << "\n\nINOVICE\n\nFARE:RM" << fare << "\nGST:RM" << gst << "\nTOTAL FARE:RM" <<total_fare;
        system ("PAUSE");
        system ("cls");
        ticketConfirmation();
    }

    else if (pick == 2)//Cancel flight booking
    {
        system ("cls");
        cout <<"YOU HAVE BEEN TAKEN TO THE FLIGHT BOOKING PAGE\n\n";
        LOCAL_INTER();//Taking user back to selecting international or local flights
    }
    else//for correcting input error
    {
        system ("cls");
        cout << "\nYOU HAVE ENTERED AN INVALID OPTION. PLEASE ENTER A NUMBER FROM THE GIVEN OPTIONS NEXT TIME.";
        PAYMENT();//Bring user back to this page if there is an error in input
    }
}

void viewflight()
{
   cout << "ALL AVAILABLE FLIGHTS\n\n";

        cout << "Depart From Kuala Lumpur";
    cout << "\n\n-----------------------";
    cout << "\n| No. | Destination      .";
    cout << "\n-------------------------";
    cout << "\n| 1. | Bintulu			."; 
    cout << "\n| 2. | Kota Kinabalu		.";
    cout << "\n| 3. | Kuching			.";
    cout << "\n| 4. | Labuan			.";
    cout << "\n| 5. | Miri				.";
    cout << "\n| 6. | Sibu				.";
    cout << "\n| 7. | Tawau				.";
    cout << "\n-------------------------";
    cout << "\n\n 0.Back";
    cout << "\n\nPlease select the destination that you are heading to: ";
    cin >> local_num;
    if (local_num == 1)
    {
        system ("cls");
        cout << "\n\nAVAILABLE FLIGHTS FROM KLIA\n\n";
        cout << "Depart From KLIA";
        cout << "Destination: Bintulu ";
        cout << "\n\n--------------------------------------------------------------------------";
        cout << "\n| No. | Airline Carrier  | Depart Time | Arrive Time | Duration | Price     |";
        cout << "\n----------------------------------------------------------------------------";
        cout << "\n| 1.  | MAS              | 17:30       | 19:35       | 2H 05M   | RM 164.76 |";
        cout << "\n| 2.  | Air Asia         | 06:35       | 08:50       | 2H 15M   | RM 218.82 |";
        cout << "\n| 3.  | Air Asia         | 17:50       | 20:05       | 2H 15M   | RM 262.78 |";
        cout << "\n| 4.  | MAS              | 08:25       | 10:45       | 2H 20M   | RM 295.72 |";
        cout << "\n| 5.  | MAS              | 07:05       | 14:30       | 8H 0M    | RM 295.72 |";
        cout << "\n| 6.  | Airasia          | 07:05       | 15:05       | 11H 10M  | RM 312.07 |";
        cout << "\n| 7.  | Airasia          | 07:05       | 18:15       | 11H 45M  | RM 312.07 |";
        cout << "\n| 8.  | Multiple airline | 07:45       | 19:50       | 10H 05M  | RM 368.71 |";
        cout << "\n| 9.  | Multiple airline | 11:55       | 18:15       | 1H 25M   | RM 368.71 |";
        cout << "\n| 10. | Multiple airline | 11:45       | 13:40       | 1H 55M   | RM 368.71 |";
        cout << "\n----------------------------------------------------------------------------"; 
        cout << "\n0. Back";
    	cin >> local_num;
        if (local_num == 0)//Back previous page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO MAIN MENU PAGE\n\n";
        MAIN_MENU2();//B
    }
}
    else if (local_num == 2)
    {
        system ("cls");
        cout << "\n\nAVAILABLE FLIGHTS FROM KLIA\n\n";
        cout << "Depart From KLIA";
        cout << "Destination: Kota Kinabalu ";
        cout << "\n\n--------------------------------------------------------------------------";
        cout << "\n| No. | Airline Carrier  | Depart Time | Arrive Time | Duration | Price     |";
        cout << "\n----------------------------------------------------------------------------";
        cout << "\n| 1.  | Air Asia         | 05:50       | 08:30       | 2H 40M   | RM 143.05 |";
        cout << "\n| 2.  | Air Asia         | 06:45       | 09:30       | 2H 45M   | RM 143.05 |";
        cout << "\n| 3.  | Air Asia         | 08:45       | 11:30       | 2H 45M   | RM 143.05 |";
        cout << "\n| 4.  | Malindo          | 19:15       | 21:35       | 2H 20M   | RM 201.18 |";
        cout << "\n| 5.  | Malindo          | 13:35       | 15:55       | 2H 20M   | RM 210.70 |";
        cout << "\n| 6.  | Malindo          | 07:55       | 10:45       | 2H 20M   | RM 220.97 |";
        cout << "\n| 7.  | Malindo          | 16:55       | 19:35       | 2H 50M   | RM 264.93 |";
        cout << "\n| 8.  | Air Asia         | 08:40       | 11:20       | 2H 40M   | RM 264.93 |";
        cout << "\n| 9.  | Malindo          | 19:50       | 21:00       | 1H 25M   | RM 292.57 |";
        cout << "\n| 10. | Firefly          | 11:45       | 13:40       | 1H 55M   | RM 312.07 |";
        cout << "\n----------------------------------------------------------------------------";
      	cout << "\n0. Back";
    	cin >> local_num;
        if (local_num == 0)//Back previous page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO MAIN MENU PAGE\n\n";
        MAIN_MENU2();//B
	}
    }
    else if (local_num == 3)
    {
        system ("cls");
        cout << "\n\nAVAILABLE FLIGHTS FROM KLIA\n\n";
        cout << "Depart From KLIA";
        cout << "Destination: Kuching ";
        cout << "\n\n--------------------------------------------------------------------------";
        cout << "\n| No. | Airline Carrier  | Depart Time | Arrive Time | Duration | Price     |";
        cout << "\n----------------------------------------------------------------------------";
        cout << "\n| 1.  | Air Asia         | 07:05       | 09:00       | 1H 55M   | RM 189.00 |";
        cout << "\n| 2.  | Air Asia         | 07:45       | 09:45       | 1H 55M   | RM 189.00 |";
        cout << "\n| 3.  | Air Asia         | 22:45       | 00:35       | 1H 50M   | RM 189.00 |";
        cout << "\n| 4.  | Air Asia         | 12:05       | 13:55       | 1H 50M   | RM 220.97 |";
        cout << "\n| 5.  | Air Asia         | 21:40       | 23:30       | 1H 50M   | RM 220.97 |";
        cout << "\n| 6.  | Malindo          | 09:35       | 11:25       | 1H 50M   | RM 245.64 |";
        cout << "\n| 7.  | Malindo          | 11:55       | 13:45       | 1H 50M   | RM 245.64 |";
        cout << "\n| 8.  | Air Asia         | 20:50       | 22:45       | 1H 55M   | RM 264.93 |";
        cout << "\n| 9.  | Malindo		    | 18:45       | 20:35       | 1H 50M   | RM 266.81 |";
        cout << "\n| 10. | MAS			    | 07:55       | 09:35       | 1H 40M   | RM 368.71 |";
        cout << "\n----------------------------------------------------------------------------";   
     	cout << "\n0. Back";
    	cin >> local_num;
        if (local_num == 0)//Back previous page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO MAIN MENU PAGE\n\n";
        MAIN_MENU2();//B
	}
}	
        
else if (local_num == 4)
    {
        system ("cls");
         cout << "Depart From KLIA";
        cout << "Destination: Labuan ";
        cout << "\n\n--------------------------------------------------------------------------";
        cout << "\n| No. | Airline Carrier  | Depart Time | Arrive Time | Duration | Price     |";
        cout << "\n----------------------------------------------------------------------------";
        cout << "\n| 1.  | MAS              | 08:25       | 10:40       | 2H 25M   | RM 158.39 |";
        cout << "\n| 2.  | Air Asia         | 17:10       | 19:40       | 2H 30M   | RM 308.89 |";
        cout << "\n| 3.  | Air Asia         | 19:25       | 21:50       | 2H 25M   | RM 350.66 |";
        cout << "\n| 4.  | MAS              | 10:45       | 14:25       | 3H 40M   | RM 460.29 |";
        cout << "\n----------------------------------------------------------------------------"; 
        cout << "\n0. Back";
    	cin >> local_num;
        if (local_num == 0)//Back previous page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO MAIN MENU PAGE\n\n";
        MAIN_MENU2();//B
	}
        

    }
    else if (local_num == 5)
    {
        system ("cls");
        cout << "\n\nAVAILABLE FLIGHTS FROM KLIA\n\n";
        cout << "Depart From KLIA";
        cout << "Destination: Miri ";
        cout << "\n\n--------------------------------------------------------------------------";
        cout << "\n| No. | Airline Carrier  | Depart Time | Arrive Time | Duration | Price     |";
        cout << "\n----------------------------------------------------------------------------";
        cout << "\n| 1.  | Air Asia         | 07:00       | 09:25       | 2H 25M   | RM 199.99 |";
        cout << "\n| 2.  | Air Asia         | 10:35       | 13:00       | 2H 25M   | RM 199.99 |";
        cout << "\n| 3.  | Air Asia         | 11:35       | 13:55       | 2H 20M   | RM 199.99 |";
        cout << "\n| 4.  | Air Asia         | 14:50       | 17:10       | 2H 20M   | RM 295.75 |";
        cout << "\n| 5.  | Air Asia         | 16:50       | 19:10       | 2H 20M   | RM 295.75 |";
        cout << "\n| 6.  | MAS              | 10:45       | 13:00       | 2H 15M   | RM 299.99 |";
        cout << "\n| 7.  | MAS              | 14:25       | 16:40       | 2H 15M   | RM 299.99 |";
        cout << "\n----------------------------------------------------------------------------"; 
        cout << "\n0. Back";
    	cin >> local_num;
        if (local_num == 0)//Back previous page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO MAIN MENU PAGE\n\n";
        MAIN_MENU2();//B
	}
}
    else if (local_num == 6)
    {
        system ("cls");
        cout << "Depart From KLIA";
        cout << "Destination: Sibu ";
        cout << "\n\n--------------------------------------------------------------------------";
        cout << "\n| No. | Airline Carrier  | Depart Time | Arrive Time | Duration | Price     |";
        cout << "\n----------------------------------------------------------------------------";
        cout << "\n| 1.  | Air Asia         | 06:15       | 08:15       | 2H 0M    | RM 506.71 |";
        cout << "\n| 2.  | Air Asia         | 07:50       | 09:50       | 2H 0M    | RM 506.71 |";
        cout << "\n| 3.  | MAS              | 08:30       | 10:25       | 1H 55M   | RM 826.03 |";
        cout << "\n| 4.  | MAS              | 10:00       | 12:00       | 2H 0M    | RM 847.37 |";
        cout << "\n| 5.  | Air Asia         | 14:05       | 16:05       | 2H 0M    | RM 1002.25|";
        cout << "\n| 6.  | MAS              | 19:40       | 21:35       | 1H 55M   | RM 1035.20|";
        cout << "\n----------------------------------------------------------------------------";
        cout << "\n0. Back";
    	cin >> local_num;
        if (local_num == 0)//Back previous page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO MAIN MENU PAGE\n\n";
        MAIN_MENU2();//B
	}
	}
    else if (local_num == 7)
    {
        system ("cls");
          cout << "\n\nAVAILABLE FLIGHTS FROM KLIA\n\n";
        cout << "Depart From KLIA";
        cout << "Destination: Tawau ";
        cout << "\n\n--------------------------------------------------------------------------";
        cout << "\n| No. | Airline Carrier  | Depart Time | Arrive Time | Duration | Price     |";
        cout << "\n----------------------------------------------------------------------------";
        cout << "\n| 1.  | MAS              | 07:25       | 10:20       | 2H 55M   | RM 274.61 |";
        cout << "\n| 2.  | MAS              | 14:40       | 17:30       | 2H 50M   | RM 352.79 |";
        cout << "\n| 3.  | Air Asia         | 12:20       | 15:55       | 2H 55M   | RM 364.84 |";
        cout << "\n| 4.  | Air Asia         | 05:50       | 08:10       | 3H 0M    | RM 419.79 |";
        cout << "\n----------------------------------------------------------------------------";
        cout << "\n0. Back";
    	cin >> local_num;
	}
    
    else if (local_num == 0)//Back previous page
    {
        system ("cls");
        cout << "YOU HAVE BEEN TAKEN BACK TO MAIN MENU PAGE\n\n";
        MAIN_MENU2();//Bring user back to local departure point flight selection page

    }
    else
    {
        system ("cls");
        cout << "PLEASE SELECT A VALID OPTION BY ENTERING ONE OF THE NUMBERS\n\n";
        viewflight();
    }

    system("pause");
    system("cls");
    admin();
}


void admin(){


    cout << "Welcome Administrator!\n" << endl;

    cout << "1.\tLogout" << endl;
    cout << "2.\tView Flights" << endl;
    cout << "3.\tView Customer List" << endl;


    cout << "What would you like to do? ";
    cin >> choice;
    adminchoice();
}

void adminchoice(){

    if (choice == 1)
    {
        system("cls");
        cout << "You have logged out." << endl;
        MAIN_MENU();
    }
    else if (choice == 2)
    {
        system("cls");
        viewflight();
    }
    else if (choice == 3)
    {
        system("cls");
        viewlist();
    }
    else
    {
        system("cls");
        cout << "Please enter one of the right options.";
        MAIN_MENU();
    }
}

void viewlist()
{
    cout << "List of Passenger name: " << endl;
    cout << "Given Name: " << name << endl;
    cout << "Surname: " << surname << endl;

    system("pause");
    system("cls");
    admin();
}



