#include<iostream>
#include <unistd.h>

#include <stdlib.h> //SYSTEM
#include <conio.h>
using namespace std;

void MilkTea();
void IceBrew();
void HotBrew();
void FruitTea();
	
	string order[5]; // Orders Name
	string OrderCup [5];
	string OrderSize [5];
	int addOnsPrice [5];
	string addOnsNaming [5];
	
	int cupSize,addOns, price;
	int OrdersCount = 0;
	int OrdersCount2 = 0;
	
	int XOrders = 1;
	
int main(){
	
	string name,cupNameSize,addOnsName;
	char type,receipt;
	int m,payment,change;
	
		cout << "=====WELCOME CUSTOMER=====";
		cout << "\nInput Customer's Name: ";
		getline(cin, name);
		
		cout << "\n===========MENU===========\n 1: Milk Tea\n 2: Iced Brew\n 3: Hot Brew\n 4: Fruit Tea\n Enter you option: ";
		cin >> type;
		
		switch (type) {
			
			case '1':
				MilkTea();
				break;
			case '2':
				IceBrew();
				break;
			case'3':
				HotBrew();
				break;
			case'4':
				FruitTea();
				break;
		}
		
		
		
		cout << "\n Cup Size\n 1: Medium = Php 29.00\n 2: Grande = Php 39.00\n Enter you option: ";
		cin >> cupSize;
		
		if(cupSize==1){
			cupSize = 29;
				OrderCup[OrdersCount2] = "29";
			cupNameSize = "Medium";
				OrderSize[OrdersCount2] = "Medium";
		}
		
		else if(cupSize==2){
			cupSize = 39;
				OrderCup[OrdersCount2] = "39";
			cupNameSize = "Grande";
				OrderSize[OrdersCount2] = "Grande";
		}
		
		else {
			cout << "Wrong Input!";
		}
		
		
		
		cout << "\n Addons = Php 8.00\n 1: None\n 2: Pearl\n 3: Cream Puff\n 4: Nata\n Enter you option: ";
		cin >> addOns;
		
		if(addOns == 1){
			addOnsPrice[OrdersCount2] = 0;
			addOns = 0;
			addOnsName = " ";
			addOnsNaming[OrdersCount2] = "None";
		}
		else if(addOns == 2){
			addOnsPrice[OrdersCount2] = 8;
			addOns = 8;
			addOnsName = "Pearl";
			addOnsNaming[OrdersCount2] = "Pearl";
		}
		else if(addOns == 3){
			addOnsPrice[OrdersCount2] = 8;
			addOns = 8;
			addOnsName = "Cream Puff";
			addOnsNaming[OrdersCount2] = "Cream Puff";
		}
		else if(addOns == 4){
			addOnsPrice[OrdersCount2] = 8;
			addOns = 8;
			addOnsName = "Nata";
			addOnsNaming[OrdersCount2] = "Nata";
		}
		
		char AddOrders;
		
		cout << "\n Add order - 1 / Proceed - 2\n ";
		cin >> AddOrders;
		
		price += cupSize + addOns;
						
		switch (AddOrders) {
			
			case '1':
				OrdersCount2++;
				system("cls");
				XOrders++;
				main();
			break;
			
			case '2':
			break;
			
			default:
				cout << " Invalid Input!";
				
		}
		

		
		price;
		cout << "\nTotal : Php " << price << ".00";
		
		cout << "\nPayment : ";
		cin >> payment;
		
		if(payment<price){
			system("cls");
			cout << "Sorry, You don't have enough money\nGOOD BYE!";
			return 0;
		}
		change = payment - price;
		cout << "\nChange : Php " << change << ".00";
	
	// =====================  THIS IS A RECEIPT CODE =====================
	
		cout << "\nWould you like a receipt?";
		cout << "\n	Y	/	N	";
		cout << "\nEnter your option: ";
		cin >> receipt;
		switch(receipt){
			case 'Y':
				system("cls");
				cout << "\n	=================================================";
				cout << "\n			Official Receipt ";
				cout << "\n	=================================================";
				cout << "\n\n	Customer: " << name;
				
				int NumberofOrders = 0;
				int Counter = 1;
				while (NumberofOrders < XOrders){
				
					while (true){
						cout << "\n\n	Order : " << Counter << " " << order[NumberofOrders] << " " << OrderSize[NumberofOrders] << "			Php " << OrderCup[NumberofOrders] << ".00";
						break;
					}
					NumberofOrders++;
					Counter++;
			}
			
				NumberofOrders = 0;
							
				while (NumberofOrders < XOrders){
			
					while (true){
						cout << "\n\n	  Addons: " << addOnsNaming[NumberofOrders] << "				Php " << addOnsPrice[NumberofOrders] << ".00";
						break;
					}
					NumberofOrders++;
			}
				
				cout << "\n\n\n					Total:  Php " << price << ".00";
				cout << "\n\n	Cash : " << "					Php " << payment << ".00";
				cout << "\n\n	Change : " << "				Php " << change << ".00";
				cout << "\n\n	=================================================";
				cout << "\n	Thank you, Please come again";
				cout << "\n	This serves as an OFFICIAL RECEIPT";
				cout << "\n	=================================================";
			
			int enter = 0;
				
						cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t   Please press Enter to Continue";
			enter = 1;
			while ( enter != 13){
				enter=getch();
			}	
				break;
		}
		
	system("cls");
	return 0;
}

// Lagay ko lang to dito para maging 200 lines


void MilkTea() {
	
	int milkTea = 0;
		
				cout << "\n 1: Okinawa";
				cout << "\n 2: Winter Melon";
				cout << "\n 3: Choco";
				cout << "\n 4: Double Dutch";
				cout << "\n 5: Red Velvet";
				cout << "\n 6: Cookies & Cream";
				cout << "\n 7: Salted Caramel";
				cout << "\n Enter you option: ";
				cin >> milkTea;
				
	while (true){
			
				if(milkTea == 1){
					order[OrdersCount] = "Okinawa";
				}
				else if(milkTea == 2){
					order[OrdersCount] = "Winter Melon";
				}
				else if(milkTea == 3){
					order[OrdersCount] = "Choco";
				}
				else if(milkTea == 4){
					order[OrdersCount] = "Double Dutch";
				}
				else if(milkTea == 5){
					order[OrdersCount] = "Red Velvet";
				}
				else if(milkTea == 6){
					order[OrdersCount] = "Cookies & Cream";
				}
				else if(milkTea == 7){
					order[OrdersCount] = "Salted Caramel";
				}
				
				
				OrdersCount++;
				break;
	}
	milkTea = 0;
}



void IceBrew() {

	int icedBrew = 0;
	
	cout << "\n1: Macchiato";
				cout << "\n2: Cinno";
				cout << "\n3: Choco";
				cout << "\n4: Hazlenut";
				cout << "\n5: Americano";
				cout << "\n6: Caramel";
				cout << "\nEnter you option: ";
				cin >> icedBrew;
				
	while (true){
			
				if(icedBrew == 1){
					order[OrdersCount] = "Macchiato";
				}
				else if(icedBrew == 2){
					order[OrdersCount] = "Cinno";
				}
				else if(icedBrew == 3){
					order[OrdersCount] = "Choco";
				}
				else if(icedBrew == 4){
					order[OrdersCount] = "Hazlenut";
				}
				else if(icedBrew == 5){
					order[OrdersCount] = "Americano";
				}
				else if(icedBrew == 6){
					order[OrdersCount] = "Caramel";
				}
				
				OrdersCount++;
				break;
	}
	icedBrew = 0;
}


void HotBrew(){
	

	int hotBrew;
	
	cout << "\n1: Macchiato";
				cout << "\n2: Cinno";
				cout << "\n3: Choco";
				cout << "\n4: Americano";
				cout << "\nEnter you option: ";
				cin >> hotBrew;
				
	while (true){
			
				if(hotBrew == 1){
					order[OrdersCount] = "Macchiato";
				}
				else if(hotBrew == 2){
					order[OrdersCount] = "Cinno";
				}
				else if(hotBrew == 3){
					order[OrdersCount] = "Choco";
				}
				else if(hotBrew == 4){
					order[OrdersCount] = "Americano";
				}
				
				OrdersCount++;
				break;
	}
	hotBrew = 0;
}

void FruitTea() {
	

	int fruitTea;
	
	cout << "\n1: Green Apple";
				cout << "\n2: Kiwi";
				cout << "\n3: Honey Peach";
				cout << "\n4: Mango";
				cout << "\n5: Strawberry";
				cout << "\nEnter you option: ";
				cin >> fruitTea;
				
	while (true){
			
				if(fruitTea == 1){
					order[OrdersCount] = "Green Apple";
				}
				else if(fruitTea == 2){
					order[OrdersCount] = "Kiwi";
				}
				else if(fruitTea == 3){
					order[OrdersCount] = "Honey Peach";
				}
				else if(fruitTea == 4){
					order[OrdersCount] = "Mango";
				}
				else if(fruitTea == 5){
					order[OrdersCount] = "Strawberry";
				}
				
				OrdersCount++;
				break;
	}
	fruitTea = 0;
}

