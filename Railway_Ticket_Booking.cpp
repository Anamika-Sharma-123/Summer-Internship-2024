#include<bits/stdc++.h>
using namespace std;

int price=0;

int main()
{
    int choice;
    cout<<"***** Main Menu *****\n1. Add Customer Details\n2. Train Booking\n3. Ticket & Charges\n4. Display Database\n5. Cancel Tickets\n6. View E-Catering Database\n7. Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            Customer_Details();
            break;
        }
        case 2:
        {
            Train_Booking();
            break;
        }
        case 3:
        {
            Ticket_And_Charges();
        }
        case 4:
        {
            Display_Database();
        }
        case 5:
        {
            Cancel_Ticket();
        }
        case 6:
        {
            E_Catering();
        }
    }
}

void Customer_Details()
{
    int pnr,psg,id,age;
    string name,gender;
    char birthpref;
    cout<<"PNR No.: ";
    cin>>pnr;
    cout<<"Number of Passengers: ";
    cin>>psg;
    for(int i=0;i<psg;i++)
    {
        cout<<"Enter the Customer ID: ";
        cin>>id;
        cout<<"Enter your Name: ";
        cin>>name;
        cout<<"Enter your Age: ";
        cin>>age;
        cout<<"Enter your Birth Preference: ";
        cin>>birthpref;
        cout<<"Enter your Gender: ";
        cin>>gender;
    }
    cout<<"Your details are saved with us....";
    cout<<"Your PNR No: "<<pnr;
    cout<<"Please use this PNR number to book tickets!";
}

void Train_Booking()
{
    int city;
    cout<<"***** Book your Ticket in this Section *****";
    cout<<"1. Train to Delhi\n2. Train to Kolkata\n3. Train to Jammu\n4. Train to Nagpur\n5. Train to Jaipur\n6. Train to Mumbai\n";
    cout<<"\nWELCOME TO THE RAILWAYS....";
    cout<<"Pleasee select the city you want to visit: ";
    cin>>city;
    switch(city)
    {
        case 1:
        {
            int book,time;
            cout<<"\nWELCOME TO "<<city;
            cout<<"Your comfort is our Priority, Enjoy the journey";
            cout<<"Following are the Trains...";
            cout<<"1. DEL-123\n\t08-01-2022 8:00AM 10hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200\n2. DEL-345\n\t09-01-2022 10:00AM 15hrs  3A-Rs.2300 2A-Rs.3300 1A-Rs.5400\n3. DEL-456\n\t10-01-2022 11:00AM 20hrs  3A-Rs.2400 2A-Rs.3500 1A-Rs.5100\n";
            cout<<"\nSelect the Train Timing you want to book: ";
            cin>>book;
            cout<<"Enter the AC class in which you want to travel: ";
            cin>>time;
            switch(book)
            {
                case 1:
                {
                    cout"\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN DEL-123\n\t08-01-2022 8:00AM 10hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200";
                    price+=5200;
                    break;
                }
                case 2:
                {
                    cout<<"YOU HAVE SUCCESSFULLY BOOKED THE TRAIN DEL-345\n\t09-01-2022 10:00AM 15hrs  3A-Rs.2300 2A-Rs.3300 1A-Rs.5400";
                    price+=5400;
                    break;
                }
                case 3:
                {
                    cout<<"YOU HAVE SUCCESSFULLY BOOKED THE TRAIN DEL-456\n\t10-01-2022 11:00AM 20hrs  3A-Rs.2400 2A-Rs.3500 1A-Rs.5100";
                    price+=5100;
                    break;
                }
            }
            break;
        }
        case 2:
        {
            int book,time;
            cout<<"\nWELCOME TO "<<city;
            cout<<"Your comfort is our Priority, Enjoy the journey";
            cout<<"Following are the Trains...";
            cout<<"1. KOL-123\n\t08-01-2022 8:00AM 10hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200\n2. KOL-345\n\t09-01-2022 10:00AM 15hrs  3A-Rs.2300 2A-Rs.3300 1A-Rs.5400\n3. KOL-456\n\t10-01-2022 11:00AM 20hrs  3A-Rs.2400 2A-Rs.3500 1A-Rs.5100\n";
            cout<<"\nSelect the Train Timing you want to book: ";
            cin>>book;
            cout<<"Enter the AC class in which you want to travel: ";
            cin>>time;
            switch(book)
            {
                case 1:
                {
                    cout"\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN KOL-123\n\t08-01-2022 8:00AM 10hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200";
                    price+=5200;
                    break;
                }
                case 2:
                {
                    cout<<"YOU HAVE SUCCESSFULLY BOOKED THE TRAIN KOL-345\n\t09-01-2022 10:00AM 15hrs  3A-Rs.2300 2A-Rs.3300 1A-Rs.5400";
                    price+=5400;
                    break;
                }
                case 3:
                {
                    cout<<"YOU HAVE SUCCESSFULLY BOOKED THE TRAIN KOL-456\n\t10-01-2022 11:00AM 20hrs  3A-Rs.2400 2A-Rs.3500 1A-Rs.5100";
                    price+=5100;
                    break;
                }
            }
            break;
        }
        case 3:
        {
            int book,time;
            cout<<"\nWELCOME TO "<<city;
            cout<<"Your comfort is our Priority, Enjoy the journey";
            cout<<"Following are the Trains...";
            cout<<"1. Jam-123\n\t08-01-2022 8:00AM 10hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200\n2. Jam-345\n\t09-01-2022 10:00AM 15hrs  3A-Rs.2300 2A-Rs.3300 1A-Rs.5400\n3. Jam-456\n\t10-01-2022 11:00AM 20hrs  3A-Rs.2400 2A-Rs.3500 1A-Rs.5100\n";
            cout<<"\nSelect the Train Timing you want to book: ";
            cin>>book;
            cout<<"Enter the AC class in which you want to travel: ";
            cin>>time;
            switch(book)
            {
                case 1:
                {
                    cout"\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN Jam-123\n\t08-01-2022 8:00AM 10hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200";
                    price+=5200;
                    break;
                }
                case 2:
                {
                    cout<<"YOU HAVE SUCCESSFULLY BOOKED THE TRAIN Jam-345\n\t09-01-2022 10:00AM 15hrs  3A-Rs.2300 2A-Rs.3300 1A-Rs.5400";
                    price+=5400;
                    break;
                }
                case 3:
                {
                    cout<<"YOU HAVE SUCCESSFULLY BOOKED THE TRAIN Jam-456\n\t10-01-2022 11:00AM 20hrs  3A-Rs.2400 2A-Rs.3500 1A-Rs.5100";
                    price+=5100;
                    break;
                }
            }
            break;
        }
        case 4:
        {
            int book,time;
            cout<<"\nWELCOME TO "<<city;
            cout<<"Your comfort is our Priority, Enjoy the journey";
            cout<<"Following are the Trains...";
            cout<<"1. Nag-123\n\t08-01-2022 8:00AM 10hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200\n2. Nag-345\n\t09-01-2022 10:00AM 15hrs  3A-Rs.2300 2A-Rs.3300 1A-Rs.5400\n3. Nag-456\n\t10-01-2022 11:00AM 20hrs  3A-Rs.2400 2A-Rs.3500 1A-Rs.5100\n";
            cout<<"\nSelect the Train Timing you want to book: ";
            cin>>book;
            cout<<"Enter the AC class in which you want to travel: ";
            cin>>time;
            switch(book)
            {
                case 1:
                {
                    cout"\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN Nag-123\n\t08-01-2022 8:00AM 10hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200";
                    price+=5200;
                    break;
                }
                case 2:
                {
                    cout<<"YOU HAVE SUCCESSFULLY BOOKED THE TRAIN Nag-345\n\t09-01-2022 10:00AM 15hrs  3A-Rs.2300 2A-Rs.3300 1A-Rs.5400";
                    price+=5400;
                    break;
                }
                case 3:
                {
                    cout<<"YOU HAVE SUCCESSFULLY BOOKED THE TRAIN Nag-456\n\t10-01-2022 11:00AM 20hrs  3A-Rs.2400 2A-Rs.3500 1A-Rs.5100";
                    price+=5100;
                    break;
                }
            }
            break;
        }
        case 5:
        {
            int book,time;
            cout<<"\nWELCOME TO "<<city;
            cout<<"Your comfort is our Priority, Enjoy the journey";
            cout<<"Following are the Trains...";
            cout<<"1. Jai-123\n\t08-01-2022 8:00AM 10hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200\n2. Jai-345\n\t09-01-2022 10:00AM 15hrs  3A-Rs.2300 2A-Rs.3300 1A-Rs.5400\n3. Jai-456\n\t10-01-2022 11:00AM 20hrs  3A-Rs.2400 2A-Rs.3500 1A-Rs.5100\n";
            cout<<"\nSelect the Train Timing you want to book: ";
            cin>>book;
            cout<<"Enter the AC class in which you want to travel: ";
            cin>>time;
            switch(book)
            {
                case 1:
                {
                    cout"\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN Jai-123\n\t08-01-2022 8:00AM 10hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200";
                    price+=5200;
                    break;
                }
                case 2:
                {
                    cout<<"YOU HAVE SUCCESSFULLY BOOKED THE TRAIN Jai-345\n\t09-01-2022 10:00AM 15hrs  3A-Rs.2300 2A-Rs.3300 1A-Rs.5400";
                    price+=5400;
                    break;
                }
                case 3:
                {
                    cout<<"YOU HAVE SUCCESSFULLY BOOKED THE TRAIN Jai-456\n\t10-01-2022 11:00AM 20hrs  3A-Rs.2400 2A-Rs.3500 1A-Rs.5100";
                    price+=5100;
                    break;
                }
            }
            break;
        }
        case 6:
        {
            int book,time;
            cout<<"\nWELCOME TO "<<city;
            cout<<"Your comfort is our Priority, Enjoy the journey";
            cout<<"Following are the Trains...";
            cout<<"1. Mum-123\n\t08-01-2022 8:00AM 10hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200\n2. Mum-345\n\t09-01-2022 10:00AM 15hrs  3A-Rs.2300 2A-Rs.3300 1A-Rs.5400\n3. Mum-456\n\t10-01-2022 11:00AM 20hrs  3A-Rs.2400 2A-Rs.3500 1A-Rs.5100\n";
            cout<<"\nSelect the Train Timing you want to book: ";
            cin>>book;
            cout<<"Enter the AC class in which you want to travel: ";
            cin>>time;
            switch(book)
            {
                case 1:
                {
                    cout"\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN Mum-123\n\t08-01-2022 8:00AM 10hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200";
                    price+=5200;
                    break;
                }
                case 2:
                {
                    cout<<"YOU HAVE SUCCESSFULLY BOOKED THE TRAIN Mum-345\n\t09-01-2022 10:00AM 15hrs  3A-Rs.2300 2A-Rs.3300 1A-Rs.5400";
                    price+=5400;
                    break;
                }
                case 3:
                {
                    cout<<"YOU HAVE SUCCESSFULLY BOOKED THE TRAIN Mum-456\n\t10-01-2022 11:00AM 20hrs  3A-Rs.2400 2A-Rs.3500 1A-Rs.5100";
                    price+=5100;
                    break;
                }
            }
            break;
        }
    }
}

void Ticket_And_Charges()
{
    int input;
    cout<<"***** Getting your Ticket *****";
    cout<<"Total Cost: "<<Train_Booking(price);
    cout<<"\nYour ticket is printed you can collect it...";
    cout<<"Press 1 to display your ticket: ";
    cin>>input;
    if(input == 1)
    {
        cout<<"***** Indian Railways *****";
        cout<<" ***** Tickets *****";
        cout<<"All Customer Details";
    }
    else
    {
        cout<<"Wrong Input..."
        break;
    }
}

void Display_Database()
{
    cout<<"Customer Details....";
}

void Cancel_Ticket()
{
    int pnr1;
    cout<<"Enter PNR No.: ";
    cin>>pnr1;
    cout<<"The record with the PNR number "<<pnr1<<"has been deleted if it existed...";
}

void E_Catering()
{
    int choice1;
    cout<<"***** WELCOME TO E-CATERING SERVICE *****";
    cout<<"1. View menu and order food\n2. Print receipt\n3. Back\n";
    cout<<"Enter your choice: ";
    cin>>choice1;
    switch(choice1)
    {
        case 1:
        {
            cout<<"Enter Details to Continue..."
            cout<<"Enter your PNR No.: ";
            cin>>Customer_Details(pnr);
            cout<<"Welcome Saksham! Please find the menu...";
            cout<<"\n***** Food Menu *****";
            cout<<"1. "
        }
    }
}