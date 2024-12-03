#include<stdio.h>
#include <stdlib.h>
int main() {
int c1, c2, 3, temp;
int locks, stocks, barrels; // Changed barrels to match usage
int totallocks = 0, totalstocks = 0, totalbarrels = 0;
float lockprice = 45.0, stockprice = 30.0, barrelprice = 25.0;
float locksales, stocksales, barrelsales, sales, com;
printf("Enter the number of locks (to exit press -1:Nn"); scanf("%d", &locks); // Fixed to use &
while (locks != -1) {
c1 (locks <= 0 11 locks > 70);
printf ("Enter the number of stocks and barrels:\n"); scanf (dzd", &stocks, &barrels); // Fixed to use &
c2 = (stocks <= 011 stocks > 80);
c3= (barrels <= 011 barrels > 90); // Fixed to check barrels
if (c1) {
printf("\nValue of locks is not in the range of 1.70\n");
} else {
temp = totallocks locks;
if (temp > 70) {
printf("New total locks = zd not in the range of 1...70\n", t
} else {
totallocks = temp;
}
printf("Total locks = %d\n", totallocks);
if (c2) {
printf("\nValue of stocks is not in the range of 1...00\n");
} else {
temp = totalstocks + stocks;
if (temp > 80) {
S
printf("\nNew total stocks = %d not in the range of 1...80m
} else {
=3=[↑]
totalstocks = temp;
}
}
printf ("Total stocks zd\n", totalstocks);
if (c3) {
printf("NnValue of barrels is not in the range of 1...90\n");
} else {
temp = totalbarrels barrels:
if (temp > 90) {
printf("\nNew total barrels zd not in the range of 1...90
} else {
totalbarrels = temp;
}
}
printf ("Total barrels zd\n", totalbarrels);
printf("Enter the number of locks (to exit press =1):Nn");
S
scanf("xd", &locks); // Fixed to use &
printf("\nTotal sales = %.2f\n", sales); // Fixed format specifier
// Commission calculation
if (sales > 1800) {
com = 0.10 * 1000;
com += 0.15 * 800;
com += 0.20 (sales 1800);
S
} else if (sales > 1000) {
com = 0.10 * 1000;
com += 0.15 (sales 1000);
} else
com = 0.10 sales; // Fixed missing semicolon
}
printf("Commission = %.2f\n", com); // Fixed format specifier
return 0;
}