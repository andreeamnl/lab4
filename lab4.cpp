#include <cmath>
#include <math.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Root{
    public:
        void welcome(){
            cout<<"\n\nWelcome to the Taxi Referral system"<<endl<<"Contacting a partener company right now"<<endl<<"...";
           
        }
        void goodbye(){
            cout<<"Thank you for choosing our services, have a nice day\n\n\n";
        }
};


class Person: public Root{ //superclass 1
    public:
        virtual string getName()=0;
        virtual void text()=0;
};

class Client:public Person{
    private:
        string client_names[10]={"Mick J.", "Keith R.", "Jeffrey D.", "Ted B.","Amon G.", "Barack O.", "Ion J.", "Igor D.", "Maia S.", "Ozzy O."};
        string feedb[11]={"'Ok'", "'Whatever'", "'I LITERALLY JUST GOT SCAMMED, CAN YALL COUNT MONEY?'", "'My dead ancestors can drive better'", "'The driver is probably drunk or something'", "'The driver made innapropriate comments the entire drive, I will be contacting the police'", "'f******* ****'", "'no'", "'Everything good, thx'", "'he charged me the wrong fee type, I will slash his tires'", "'we almost crashed.'" };

    public:
        string getName(){
            int jr;
            string name;
            jr= (rand() % 10) ;
            name=(client_names[jr]);
            return name;
        }
        void text(){
            cout<<"Customer:    'Hi, I am "<<getName()<<" ,currently looking for a taxi'\n";
            int jr;
            jr= 1+(rand() % 4) ;
            switch(jr){
                case 1:
                cout<<"Customer:    'Ugh why does it take so long'\n";
                    break;
                case 2:
                cout<<"*Patiently waiting*\n";
                    break;
                case 3:
                cout<<"Customer:    'I am so late...'\n";
                    break;
                case 4:
                cout<<"Customer:    'Why are they not picking up...'\n";
                    break;
            }
        }
        void feedback(){
            string feed; int jr;
            jr= (rand() % 11) ;
            feed=(feedb[jr]);
            cout<<"Customer:  "<<feed<<"\n";
        }

};

class Driver: public Person{
    private:
        string driver_names[10]={"Mick J.", "Keith R.", "Jeffrey D.", "Ted B.","Amon G.", "Barack O.", "Ion J.", "Igor D.", "Maia S.", "Ozzy O."};
    public:
    string getName(){
            int jr;
            string name;
            jr= (rand() % 10) ;
            name=(driver_names[jr]);
            return name;
        }
    void text(){
        cout<<"Driver:  'We'll be there in no time'\n";
        int jr;
        jr= 1+(rand() % 4) ;
        switch(jr){
            case 1:
            cout<<"Driver:  'I hope you don't mind the music'\n *the worst song you've ever heard starts playing*\n";
                break;
            case 2:
            cout<<"Driver:  'Don't worry, I know a shorter way'\n";
                break;
            case 3:
            cout<<"*Driver makes an innapropriate comment*\n";
                break;
            case 4:
            cout<<"Driver:  'Oops, almost hit a pedestrian'\n";
                break;
        }
    }
};

class Police : public Person{
    private:
        string police_names[10]={"Officer Kenny", "Officer Keith ", "Officer Dahmer ", "Officer Bundy","Officer Amon G.", "Officer Barack ", "Officer Ion J.", "Officer Igor D.", "Officer Maia S.", "Officer Ozzy O."};
    public:
    int jr;
    string getName(){
            string name;
            jr= (rand() % 10) ;
            name=(police_names[jr]);
            return name;
        }
    void text(){
        int jr;
        jr= 1+(rand() % 6) ;
        switch(jr){
            case 1:
            cout<<"\n*Police intervention*\n";
            cout<<"'I am "<<getName()<<", everything seems fine, continue your trip'\n";
                break;
            case 2:
            cout<<"*You've been stopped by police.*\n"<<"'I am "<<getName()<<", license and registration please'\n";
            cout<<"'You've been going 50 in a 30 zone, you will be fined.'\n\n";
                break;
            case 3:
            cout<<"\n*Police just passed by.*\n\n";
                break;
            case 4:
            cout<<"\n*Be careful, you might be pulled over by the officer over there...*\n\n";
                break;
            case 5:
            cout<<"\nDriver:    'Sir I know you are late but I cant go any faster, police is near'\n";
                break;
            case 6:
            cout<<"\nOops! You just crashed, but the client is rushing\nRun away from the crime scene?\n'Nino Nino'\nyou are being chased by police.\n\n ";
                break;
        }
    }
};

class Building{ //superclass 2
    public:
        virtual bool isOpen()=0;
        virtual string getName()=0;
        virtual void text()=0;
    
};

class TaxiCompany: public Building{  
    private:
        string company_name[4]={"Uber", "iTaxi", "Yandex", "14448"};
    public:
        int jr;
        string getName(){
                string name;
                jr= (rand() % 4) ;
                name=(company_name[jr]);
                return name;
            }
        bool isOpen(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        }
        bool isFound(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        }
        void text(){
            cout<<"Taxi company:    '"<<getName()<<"' has been contacted, we are looking for a driver.'\n";
            }
        void text_closed(){
            cout<<"Taxi Company:    'We are sorry to inform that our working hours are over, have a nice day!'\n";
        }
        void text_found(){
             cout<<"Taxi company:   'Driver is on his way.'\n";
        }
        void text_notfound(){
            cout<<"Taxi company:    'It seems we couldn't find a driver at the moment, try later.'\n";

        }
        void request_feedback(){
            cout<<"Taxi company:    'So that was it, please leave a feedback.'\n";
        }
            
   
};


class Transport: public Root{ //superclass 3
    public:
        virtual string getColor()=0;
        virtual string getBrand()=0;
        virtual string getPlate()=0;
};

class Car : public Transport{
    private:          // Access specifier
        string car_brand[4] = {"Toyota Prius", "BMW", "Ford", "Mazda"};
        string car_color[5] = {"White", "Blue", "Black", "Gray", "Yellow"};     // Attribute
        string car_plate[7]={"WSA 123", "CSE 105", "GRT 456", "JYU 789", "TRE 566", "DEV 666", "BEG 777"};

    public:
        bool confort;
        string getBrand(){
            int jr;
            string name;
            jr= (rand() % 4) ;
            name=(car_brand[jr]);
            return name;
        }
        string getColor(){
            int jr;
            string name;
            jr= (rand() % 5) ;
            name=(car_color[jr]);
            return name;
        }
        string getPlate(){
            int jr;
            string name;
            jr= (rand() % 7) ;
            name=(car_plate[jr]);
            return name;
        }
        bool isConfort(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        }
        void confort_type(){
            if(isConfort()){
                cout<<"Taxi Company:    'You chose confort.'"<<endl;;
            }else{
                cout<<"Taxi Company:    'You chose standard.'"<<endl;
            }
        }
        void text(){
            confort_type();
            
            cout<<"Taxi Company:    '"<<getColor()<<" "<<getBrand()<<" "<<getPlate()<<" will soon be waiting for you.'"<<endl;

        }
};



class Route: public Root{ //superclass 4
    public:
        virtual string pickup_address()=0;
        virtual string final_address()=0;
        virtual float distance()=0;
};



class Trip: public Route{
    private:
        string pickup[13]={"Mun. Chișinău, bd. Ștefan cel Mare și Sfînt nr. 200", "Mun. Chișinău, str. Mihail Sadoveanu, nr. 24/1", "1828 Courtney Avenue Los Angeles, CA 90046", "80033 Sunset Boulevard #88 Los Angeles, CA 90046","12711 Ventura Boulevard #40", "Mun. Chișinău, str. Kiev, nr. 3", "Beverly Hills, CA 90212", "Santa Monica, CA 90405", "Placerville, CO 81430 " , "Lake Buena Vista, FL 32830", "Santa Monica, CA 90411", " New York, NY 100", " Chicago, IL 60611"   };   
    public:
        string pickup_address(){
            int jr;
            string name;
            jr= (rand() % 13) ;
            name=(pickup[jr]);
            return name;
        }
        string final_address(){
            string name;
            int jr;
            jr= (rand() % 13) ;
            name=(pickup[jr]);
            return name;
        }
        
        float distance(){
            int jr; float dist;
            jr= 1+(rand() % 36) ;
            dist=jr/3.456; //create random int then divide it by rd(float) to make it float;
            return dist;
        }
        
        void text_address(){
            
            cout<<"Driver:  '"<<pickup_address()<<"-->"<<final_address()<<endl<<"Driver:    Distance "<<distance()<<"km"<<endl;
        }
        
        float dist(){
            return distance();
        }
        
        void text_time(){
            int hr1= (rand() % 24) ;
            int mn= (rand() % 60) ;
            int hr2=hr1+1;
            int mn2= (rand() % mn) ;
            cout<<"Driver:  Pickup time: "<<hr1<<":"<<mn<<endl;
            cout<<"Driver:  Destination reach time: "<<hr2<<":"<<mn2<<endl;
        }
    
};



class Transaction{ //superclass 5
    public:
        virtual bool isCard()=0;
};




class Payment_process: public Transaction{
    private:
    string no_pay[4]={"Client:  Oops, My wallet is inside, lemme go bring it","*Customer doesn't pay, runs away*","'Client:     It seems I lost my wallet, sorry'","'Client:    THIS IS A ROBBERY, give me ALL your money!'"};
    
    public:
        float night_fee=5.5;
        float day_fee=4.5;
        
        bool isCard(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        }
        bool isDaytime(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        }
        bool isNoPay(){
            bool i;
            int jr;
            jr=(rand() % 2) ;
            i=jr;
            return i;
        }
        void payment_type(float distance){ //final fee depends on distance and day/night fee
            
            if(isDaytime()){
                //cout<<"\n dist is "<<distance<<endl<<"day fee is "<<day_fee<<endl;
                cout<<"\nDay time fee is applied, 4.5 per km\n";
                cout<<distance*day_fee<<" USD";
            }else{
                //cout<<"\n dist is "<<distance<<endl<<"night fee is "<<night_fee<<endl;
                cout<<"\nNight time fee is applied, 5.5 per km\n";
                cout<<distance*night_fee<<" USD\n";
            }
        }
        void payment_message(){ //payment message depends on payment type
            if (isCard()){
                cout<<"\nYou have chosen to pay by card\n "<<endl;
            }else{
                cout<<"\nYou have chosen to pay cash\n "<<endl;
            }
        }
        
        void no_payment(){
                int jr;
                jr= (rand() % 4) ;
                cout<<no_pay[jr]<<endl;
        }
};






int main()
{  

 Client client_obj;
 Client *client;
 client=&client_obj;

 TaxiCompany taxi;
 TaxiCompany *tc;
 tc=&taxi;
 
 Car car_obj;
 Car *car;
 car=&car_obj;
 
 Driver driver_obj;
 Driver *driver;
 driver=&driver_obj;
 
 Police police_obj;
 Police *police;
 police=&police_obj;
 
 
 Trip trip_obj;
 Trip *trip;
 trip=&trip_obj;
 
 Payment_process pay_obj;
 Payment_process *pay;
 pay=&pay_obj;
 //TaxiCompany taxi;
 //tc=&taxi;
 
 for(int i=1; i<=15;i++){
 cout<<"##################################################\n";
 cout<<"Scenario nr."<<i<<endl;
 client->text();
 if (tc->isOpen()){
    tc->text();
    if(tc->isFound()){
        tc->text_found();
        car->text();
        driver->text();
        police->text();
        trip->text_address();
        trip->text_time();
        //int dist=trip->dist();
        pay->payment_type(trip->dist());
        pay->payment_message();
        if(pay->isNoPay()){
            pay->no_payment();
        }else{
        tc->request_feedback();
        client->feedback();
        }
        
    }else{
        tc->text_notfound();
    }
 }else{
     tc->text_closed();
 }
 cout<<"\n\n";
}
 
    return 0;
    
}