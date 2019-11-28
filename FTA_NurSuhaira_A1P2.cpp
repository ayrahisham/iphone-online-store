// Full Name: Nur Suhaira Bte Badrul Hisham
// Full Time
// Declaration: It is my own work
// Task:
// Develop an online store to sell iphones
// Divide design into a few phases:
// (1) To allow the company to enter the information to set up the online store
// (2) To allow the company to do some updates
// (3) To allow customer to place the order
// (4) To generate the summary reports

#include <iostream>
#include <iomanip>
using namespace std;

	
const float GST = (7 * 1.0) / 100;	     
	
int main ()
{
	int i8Unit, i8plusUnit, xUnit, 
	custI8Unit, custI8plusUnit, custXunit,
	balI8, balI8plus, balX;
	
	float i8Cost, i8plusCost, xCost, 
	i8bCost, i8plusBCost, xBCost, 
	totalCost, tempCost,
	itemI8cost, itemI8plusCost, itemXCost,
	GSTi8Cost, GSTi8plusCost, GSTXcost,
	finalI8cost, finalI8plusCost, finalXCost,
	totalGSTCost, totalFinalCost;
	
	// Display the program
	cout << "ABC iPhone Store Creation" << endl
		 << setw (25) << setfill ('=') << '='
		 << endl;
	cout << setfill (' ')
		 << endl;
	
	cout << "No of iPhone 8 and unit  cost: ";
	cin  >>  i8Unit >> i8Cost;

	cin.clear ();
	cin.ignore (100, '\n');
	
	while (i8Unit < 0)
	{
		cout << "Please re-enter iPhone 8 unit: ";
		cin >> i8Unit;
	}
	
	while (i8Cost < 0.0)
	{
		cout << "Please re-enter iPhone 8 cost: ";
		cin >> i8Cost;
	}
	
	cout << "No of iPhone 8+ and unit cost: ";
	cin  >>  i8plusUnit >> i8plusCost;

	cin.clear ();
	cin.ignore (100, '\n');
	
	while (i8plusUnit < 0)
	{
		cout << "Please re-enter iPhone 8+ unit: ";
		cin >> i8plusUnit;
	}
	
	while (i8plusCost < -0.0)
	{
		cout << "Please re-enter iPhone 8+ cost: ";
		cin >> i8plusCost;
	}
	
	cout << "No of iPhone X  and unit cost: ";
	cin  >>  xUnit >> xCost;

	cin.clear ();
	cin.ignore (100, '\n');
	
	while (xUnit < 0)
	{
		cout << "Please re-enter iPhone X unit: ";
		cin >> xUnit;
	}
	
	while (xCost < -0.0)
	{
		cout << "Please re-enter iPhone X cost: ";
		cin >> xCost;
	}
	
	cout << endl;
	
	i8bCost = i8Unit * i8Cost;
	i8plusBCost = i8plusUnit * i8plusCost;
	xBCost = xUnit * xCost;
	totalCost = i8bCost + i8plusBCost + xBCost;
	
	//Display summary of stock
	cout << "Summary of stock" << endl;
	
	cout << endl;
	cout << fixed << showpoint << setprecision (2);
	
	cout << left << setw (20) << "Available items"
		 << left << setw (10) << "Quantity"
		 << left << setw (10) << "Unit cost"
		 << left << setw (10) << "Basic cost"
		 << endl << setw (50) << setfill ('-') << '-'
		 << setfill (' ')
		 << endl;
		 
	cout << left << setw (20) << "iPhone 8"
		 << right << setw (8) << i8Unit
		 << right << setw (10) << i8Cost
		 << right << setw (10) << i8bCost
		 << endl;
		 
	cout << left << setw (20) << "iPhone 8+"
		 << right << setw (8) << i8plusUnit
		 << right << setw (10) << i8plusCost
		 << right << setw (10) << i8plusBCost
		 << endl;
		 
	cout << left << setw (20) << "iPhone X"
		 << right << setw (8) << xUnit
		 << right << setw (10) << xCost
		 << right << setw (10) << xBCost
		 << endl
		 << setw (50) << setfill ('=') << '='
		 << endl;
	cout << setfill (' ');
	
	cout << left << setw (20) << "Total Cost"
		 << right << setw (28) << totalCost
		 << endl;
		 
	cout << setw (50) << setfill ('=') << '='
		 << setfill (' ')
		 << endl;
	
	//Swapping costs of all 3 iPhones
	tempCost 	= i8Cost;
	i8Cost 		= i8plusCost;
	i8plusCost  = xCost;
	xCost 		= tempCost;
	
	i8bCost = i8Unit * i8Cost;
	i8plusBCost = i8plusUnit * i8plusCost;
	xBCost = xUnit * xCost;
	totalCost = i8bCost + i8plusBCost + xBCost;
	
	cout << endl << endl;
	
	//Display summary of stock (updates)
	cout << "Summary of stock (Updates)" << endl;
	
	cout << endl;
	cout << fixed << showpoint << setprecision (2);
	
	cout << left << setw (20) << "Available items"
		 << left << setw (10) << "Quantity"
		 << left << setw (10) << "Unit cost"
		 << left << setw (10) << "Basic cost"
		 << endl << setw (50) << setfill ('-') << '-'
		 << setfill (' ')
		 << endl;
		 
	cout << left << setw (20) << "iPhone 8"
		 << right << setw (8) << i8Unit
		 << right << setw (10) << i8Cost
		 << right << setw (10) << i8bCost
		 << endl;
		 
	cout << left << setw (20) << "iPhone 8+"
		 << right << setw (8) << i8plusUnit
		 << right << setw (10) << i8plusCost
		 << right << setw (10) << i8plusBCost
		 << endl;
		 
	cout << left << setw (20) << "iPhone X"
		 << right << setw (8) << xUnit
		 << right << setw (10) << xCost
		 << right << setw (10) << xBCost
		 << endl
		 << setw (50) << setfill ('=') << '='
		 << endl;
	cout << setfill (' ');
	
	cout << left << setw (20) << "Total Cost"
		 << right << setw (28) << totalCost
		 << endl;
		 
	cout << setw (50) << setfill ('=') << '='
		 << setfill (' ')
		 << endl;	    
		 
    cout << endl << endl;
	
	cout << "Please place your request" 
		 << endl
		 << "Purchase of iPhone 8 : ";
	cin  >>  custI8Unit;

	cin.clear ();
	cin.ignore (100, '\n');
	
	while (i8Unit < 0)
	{
		cout << "Please re-enter iPhone 8 unit: ";
		cin >> custI8Unit;
	}
	
	cout << "Purchase of iPhone 8+: ";
	cin  >>  custI8plusUnit;

	cin.clear ();
	cin.ignore (100, '\n');
	
	while (i8Unit < 0)
	{
		cout << "Please re-enter iPhone 8+ unit: ";
		cin >> custI8plusUnit;
	}
	
	cout << "Purchase of iPhone X : ";
	cin  >>  custXunit;

	cin.clear ();
	cin.ignore (100, '\n');
	
	while (i8Unit < 0)
	{
		cout << "Please re-enter iPhone X unit: ";
		cin >> custXunit;
	}
	
	cout << endl << endl;
	
	//Calculate Item Cost
	itemI8cost = custI8Unit * i8Cost;
	itemI8plusCost = custI8plusUnit * i8plusCost;
	itemXCost = custXunit * xCost;
	
	//Calculate GST Cost for foreigners to claim
	GSTi8Cost = GST * itemI8cost;
	GSTi8plusCost = GST * itemI8plusCost;
	GSTXcost = GST * itemXCost;
	
	//Calculate Final Cost inclusive of tax
	finalI8cost = itemI8cost + GSTi8Cost;
	finalI8plusCost = itemI8plusCost + GSTi8plusCost;
	finalXCost = itemXCost + GSTXcost;
	
	//Calculate total GST for foreigners to claim
	totalGSTCost = GSTi8Cost + GSTi8plusCost + GSTXcost;
	
	//Total Final cost 
	totalFinalCost = finalI8cost + finalI8plusCost + finalXCost;
	
	//Display summary of purchase
	cout << "Summary of purchase" 
		 << endl
		 << setw (20) << setfill ('=') << '='
		 << setfill (' ')
		 << endl
		 << endl;
		
	cout << fixed << showpoint << setprecision (2);
	
	cout << left << setw (20) << "Descriptions"
		 << left << setw (10) << "Quantity"
		 << left << setw (10) << "Unit cost"
		 << left << setw (10) << "Item cost"
		 << left << setw (10) << "GST cost"
		 << left << setw (10) << "Final cost"
		 << endl << setw (70) << setfill ('-') << '-'
		 << setfill (' ')
		 << endl;
		 
	cout << left  << setw (20) << "iPhone 8"
		 << right << setw (8)  << custI8Unit
		 << right << setw (10) << i8Cost
		 << right << setw (10) << itemI8cost
		 << right << setw (10) << GSTi8Cost
		 << right << setw (10) << finalI8cost
		 << endl;
		 
	cout << left  << setw (20) << "iPhone 8+"
		 << right << setw (8)  << custI8plusUnit
		 << right << setw (10) << i8plusCost
		 << right << setw (10) << itemI8plusCost
		 << right << setw (10) << GSTi8plusCost
		 << right << setw (10) << finalI8plusCost
		 << endl;
		 
	cout << left  << setw (20) << "iPhone X"
		 << right << setw (8)  << custXunit
		 << right << setw (10) << xCost
		 << right << setw (10) << itemXCost
		 << right << setw (10) << GSTXcost
		 << right << setw (10) << finalXCost
		 << endl
		 << setw (70) << setfill ('=') << '='
		 << setfill (' ')
		 << endl;
	
	cout << left  << setw (20) << "Total Cost"
		 << right << setw (38) << totalGSTCost
		 << right << setw (10) << totalFinalCost
		 << endl;
		 
	cout << setw (70) << setfill ('=') << '='
		 << setfill (' ')
		 << endl;	  
		 
	cout << endl << endl;
	
	//Count balance of units after sales
	balI8 =  i8Unit - custI8Unit;
	balI8plus = i8plusUnit -  custI8plusUnit;
	balX = xUnit - custXunit;
	
	//Display summary of daily transaction
	cout << "Summary of Daily Transaction" 
		 << endl
		 << setw (28) << setfill ('=') << '='
		 << setfill (' ')
		 << endl
		 << endl;
		
	cout << fixed << showpoint << setprecision (2);
	
	cout << left << setw (20) << "Item purchased"
		 << left << setw (10) << "Quantity"
		 << left << setw (10) << "Unit cost"
		 << left << setw (10) << "Sold"
		 << left << setw (10) << "Revenue"
		 << left << setw (10) << "Balance"
		 << endl << setw (70) << setfill ('-') << '-'
		 << setfill (' ')
		 << endl;
		 
	cout << left  << setw (20) << "iPhone 8"
		 << right << setw (8)  << i8Unit
		 << right << setw (10) << i8Cost
		 << right << setw (10) << custI8Unit
		 << right << setw (10) << finalI8cost
		 << right << setw (10) << balI8
		 << endl;
		 
	cout << left  << setw (20) << "iPhone 8+"
		 << right << setw (8)  << i8plusUnit
		 << right << setw (10) << i8plusCost
		 << right << setw (10) << custI8plusUnit
		 << right << setw (10) << finalI8plusCost
		 << right << setw (10) << balI8plus
		 << endl;
		 
	cout << left  << setw (20) << "iPhone 8X"
		 << right << setw (8)  << xUnit
		 << right << setw (10) << xCost
		 << right << setw (10) << custXunit
		 << right << setw (10) << finalXCost
		 << right << setw (10) << balX
		 << endl
		 << setw (70) << setfill ('=') << '='
		 << setfill (' ')
		 << endl;
	
	cout << left  << setw (20) << "Total Income"
		 << right << setw (38) << totalFinalCost
		 << endl;
		 
	cout << setw (70) << setfill ('=') << '='
		 << setfill (' ')
		 << endl;	  
		 
	cout << endl << endl;
	
	  	  	  
}

