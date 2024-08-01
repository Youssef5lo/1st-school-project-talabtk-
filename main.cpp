#include <iostream>
#include <fstream>
#include <string.h>
#include <ctime>

using namespace std;
int sum=0;
int sum1=0;
int sum2=0;
int sum3=0;
int sum4=0;
int sum5=0;


int Quantity;
int Quantity1;
int Quantity2;
int Quantity3;
int Quantity4;
int Quantity5;

float price;
float price1;
float price2;
float price3;
float price4;
float price5;

void menu();
void receipt();
void exit();
void opening();
void print();


//********************************************************************************************* Function of distion ************************************************************************************************

void distion(){
char dis;
cout << "Do you want to order anything else? y/n"<<"\n";
cin >> dis;
system("cls");
if (dis == 'y'||dis == 'Y' ) {menu();

}
else if (dis == 'n'||dis == 'N' ){receipt();

}
else {
cout<<"your input must be y or n only !!!\n\n";
system("pause");
system("cls");
distion();
}
}

//********************************************************************************************* Function of foul ************************************************************************************************

void foul  ( ){
 price = 3.75;
cout << "How many sandwich do you need ??  ";
cin >> Quantity;
sum= sum+Quantity;
cout<< "you ordered "<<sum<<" sandwich"<<"\n";
cout <<"\n"<< "your total price of foul sandwiches: "<<sum*price <<" L.E"<<"\n";
system("pause");
system("cls");
distion();
}
//********************************************************************************************* Function of t3mya ****************************************************************************************************

void t3mya  ( ){

 price1 = 4.00;
cout << "How many sandwich do you need ??  ";
cin >> Quantity1;
sum1=sum1+Quantity1;
cout<< "you ordered "<<sum2<<" sandwich"<<"\n";
cout <<"\n"<< "your total price of Flafel sandwiches: "<<sum2*price1 <<" L.E"<<"\n";
system("pause");
system("cls");
distion();
}

//********************************************************************************************* Function of fires ************************************************************************************************

void fires  ( ){

 price2 = 6.5;
cout << "How many sandwich do you need ??  ";
cin >> Quantity2;
sum2=sum2+Quantity2;
cout<< "you ordered "<<sum2<<" sandwich"<<"\n";
cout <<"\n"<< "your total price of fires sandwiches: "<<sum2*price2 <<" L.E"<<"\n";
system("pause");
system("cls");
distion();
}

//********************************************************************************************* Function of smash ************************************************************************************************

void smash ( ){

 price3 = 5.00;
cout << "How many sandwich do you need ??  ";
cin >> Quantity3;
sum3= sum3+Quantity3;
cout<< "you ordered "<<sum3<<" sandwich"<<"\n";
cout <<"\n"<< "your total price of Smashed potato sandwiches: "<<sum3*price3 <<" L.E"<<"\n";
system("pause");
system("cls");
distion();
}

//********************************************************************************************* Function of egg ************************************************************************************************

void egg  ( ){

 price4 = 10.00;
cout << "How many sandwich do you need ??  ";
cin >> Quantity4;
sum4= sum4+Quantity4;
cout<< "you ordered "<<sum4<<" sandwich"<<"\n";
cout <<"\n"<< "your total price of Fried egg sandwiches: "<<sum4*price4 <<" L.E"<<"\n";
system("pause");
system("cls");
distion();
}

//********************************************************************************************* Function of jam ************************************************************************************************

void jam  ( ){

 price5 = 3.00;
cout << "How many sandwich do you need ??  ";
cin >> Quantity5;
sum5= sum5+Quantity5;
cout<< "you ordered "<<sum5<<" sandwich"<<"\n";
cout <<"\n"<< "your total price of Jam sandwiches: "<<sum5*price5 <<" L.E"<<"\n";
system("pause");
system("cls");
distion();
}

//********************************************************************************************* Function of opening ************************************************************************************************

void opening(){

int order;
   cout << "\n                         W E L C O M E  T O  T A L A B T K  A P P   FOR FOOD            \n\n\n";
   cout << "\n                         _____________________MAIN MENU__________________\n";
   cout << "\n                             THE SANDWICHS                 prise    L.E |";
   cout << "\n                         |                                              |";
   cout << "\n                         | [1] FOUL SANDWICH                3.75    L.E |";
   cout << "\n                         | [2] FALAFL SANDWICH              4.00    L.E |";
   cout << "\n                         | [3] FRENCH FIRES SANDWICH        6.50    L.E |";
   cout << "\n                         | [4] SMASHED POTATO SANDWICH      5.00    L.E |";
   cout << "\n                         | [5] FIRED EGGS SANDWICH         10.00    L.E |";
   cout << "\n                         | [6] JAM SANDWICH                 3.00    L.E |";
   cout << "\n                         | [7] EXIT                                     |";
   cout << "\n                         ________________________________________________\n";
   cout << "\n                         choose number from (1 to 6) to order your sandwich: \n";
    cin >> order;
    system("cls");
    switch (order){
    case 1:
      foul();
      break;
    case 2:
      t3mya();
      break;
    case 3:
      fires();
      break;
    case 4:
      smash();
      break;
    case 5:
        egg();
        break;
    case 6:
        jam();
        break;
    case 7:
     exit();
        break;
    default:
        cout << "your input must be from 1 to 6 only!!\n";
        system("pause");
        system("cls");
        opening();

  }
}

//********************************************************************************************* Function of menu ************************************************************************************************

void menu() {
    system("cls");
     int order;

   cout << "\n                          _____________________MAIN MENU__________________\n";
   cout << "\n                         |     THE SANDWICHS               prise    L.E \n";
   cout << "\n                         | [1] FOUL SANDWICH                3.75    L.E |";
   cout << "\n                         | [2] FALAFL SANDWICH              4.00    L.E |";
   cout << "\n                         | [3] FRENCH FIRES SANDWICH        6.50    L.E |";
   cout << "\n                         | [4] SMASHED POTATO SANDWICH      5.00    L.E |";
   cout << "\n                         | [5] FIRED EGGS SANDWICH         10.00    L.E |";
   cout << "\n                         | [6] JAM SANDWICH                 3.00    L.E |";
   cout << "\n                          ________________________________________________\n";
   cout << "                          choose number from (1 to 6) to order your sandwich: \n";
    cin >> order;
    system("cls");
    switch (order){
    case 1:
      foul();
      break;
    case 2:
      t3mya();
      break;
    case 3:
      fires();
      break;
    case 4:
      smash();
     break;
 case 5:
        egg();
        break;
    case 6:
        jam();
        break;
    case 7:
     exit();
        break;
  default:
        cout << "your input must be from 1 to 6 only!!\n";
        system("pause");
        system("cls");
        menu();
}}

//********************************************************************************************* Function of recepit ************************************************************************************************

void receipt(){system ("cls");

time_t curr_time;

  time(&curr_time);
  cout << "\t\t\t\t\t\t\ date and time: " << asctime(localtime(&curr_time))<<"\n\n\n";


cout<<"____________________________________________YOUR RECEIPT___________________________________\n\n\n";
cout<<"  The sandwichs you are orderd                                     prise                      \n ";
if (sum >=1){
cout << "FOUL SANDWICH" << sum  << "             " << sum*price   <<"             L.E\n";
}
if (sum1 >=1){
cout << "FALAFL SANDWICH                 " << sum1 << "             " << sum1*price1 <<"             L.E\n";
}
 if (sum2 >=1){
cout << "FRENCH FRIES SANDWICH           " << sum2 << "             " << sum2*price2 <<"             L.E\n";
}
 if (sum3 >=1){
cout << "SMASHED POTATO SANDWICH         " << sum3 << "             " << sum3*price3 <<"             L.E\n";
}
 if (sum4 >=1){
cout << "FIRED EGGS SANDWICH             " << sum4 << "             " << sum4*price4 <<"             L.E\n";
}
 if (sum5 >=1){
cout << "JAM SANDWICH                    " << sum5 << "             " << sum5*price5 <<"             L.E\n";
}

int total_q = sum+sum1+sum2+sum3+sum4+sum5 ;
float total_p = price*sum + price1*sum1 + price2*sum2 + price3*sum3 + price4*sum4 + price5*sum5 ;

cout << "\nTOTAL QUANTITY OF SANDWICHES: "<<total_q <<"TOTAL PRICE: "<< total_p<<"                   L.E\n";


system("pause");
print();
system("cls");

sum=0;
sum1=0;
sum2=0;
sum3=0;
sum4=0;
sum5=0;

system("pause");
system("cls");
opening();
 }



void print(){


ofstream
 Myfile("Recepit.text",ios::app|ios::out);

 Myfile<<"\n\n\n\n\n\n\n\n\n\n";



  time_t curr_time;

    time(&curr_time);
    Myfile << "\t\t\t\t\t\t\ date and time: " << asctime(localtime(&curr_time))<<"\n\n\n";



Myfile<<"____________________________________________YOUR RECEIPT___________________________________\n\n\n";
Myfile<<"  The sandwichs you are orderd                                     prise                      \n ";
if (sum >=1){
Myfile << "FOUL SANDWICH                   " << sum  << "             " << sum*price   <<"             L.E\n";
}
if (sum1 >=1){
Myfile << "FALAFL SANDWICH                 " << sum1 << "             " << sum1*price1 <<"             L.E\n";
}
 if (sum2 >=1){
Myfile << "FRENCH FRIES SANDWICH           " << sum2 << "             " << sum2*price2 <<"             L.E\n";
}
 if (sum3 >=1){
Myfile << "SMASHED POTATO SANDWICH         " << sum3 << "             " << sum3*price3 <<"             L.E\n";
}
 if (sum4 >=1){
Myfile << "FIRED EGGS SANDWICH             " << sum4 << "             " << sum4*price4 <<"             L.E\n";
}
 if (sum5 >=1){
Myfile << "JAM SANDWICH                    " << sum5 << "             " << sum5*price5 <<"             L.E\n";
}

int total_q = sum+sum1+sum2+sum3+sum4+sum5 ;
float total_p = price*sum + price1*sum1 + price2*sum2 + price3*sum3 + price4*sum4 + price5*sum5 ;

Myfile << "\nTOTAL QUANTITY OF SANDWICHES: "<<total_q <<"TOTAL PRICE: "<< total_p<<"                   L.E\n";

Myfile.close();
}




//********************************************************************************************* Function of exit ************************************************************************************************

void exit(){
 cout << "\n\nT H A N K   Y O U   F O R   U S I N G   T A L A B T K   A P P\n\n";
}

//********************************************************************************************* Function of main ************************************************************************************************

int main(){

int order;
    opening();
    return 0;
}
