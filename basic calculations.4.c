/*#include <stdio.h>
#include <stdio.h>

int main(){
int Quantity = 2000;
int UnitPrice = 1500;
int TotalCost = Quantity * UnitPrice;
printf("The total cost of items is %d", TotalCost);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){
int HourlyWage = 2500;
int HoursWorked = 16000;
int MonthlySalary = HourlyWage * HoursWorked;
printf("The monthly salary of an employee is %d", MonthlySalary);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){
int Price1 = 3000;
int Quantity1 = 100;
int Price2 = 4500;
int Quantity2 = 150;
int Price3 = 6000;
int Quantity3 = 200;
int TotalRevenue = (Price1 * Quantity1) + (Price2 * Quantity2) + (Price3 * Quantity3);
printf("The total revenue is %d", TotalRevenue);
return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

int main(){

double SellingPrice = 250;
double CostPrice = 200;
double ProfitLossPercentage = ((SellingPrice - CostPrice) / CostPrice) * 100;
printf("The Profit loss percentage for the item is %.2lf", ProfitLossPercentage);
return 0;
}
