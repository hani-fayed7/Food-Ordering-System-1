#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>
#include<ctype.h>
#include <conio.h>
#define CLEAR(x) memset(x,'\0',1000)

struct order{ 
	char category[1000];
	int quantity;
	double price;
	char add[1000]; 
	char removee[1000];		
}O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13, O14, O15, O16, O17, O18, O19, O20, O21, O22, O23, qar;

/* functions prototypes */
void mainmenu();
void menu(int *choice);
void burgers(int *choice);
void sandwiches(int *choice);
void desserts(int *choice);
void beverages(int *choice);
struct order Information();
void receipt(void);
void orderChoices(FILE *fpointer);
void Initializer();


int orderNumber;
double SUBTOTAL = 0;
double TAX = 0; 
double TOTAL = 0;
	
int main(){	

	printf("Welcome to our restaurant\n");	
	mainmenu();
	
	return 0; 
}


void mainmenu(){
	
	for(orderNumber = 1 ; orderNumber <= 100 ; orderNumber++){
		char menu_loop = 'y';
		int menu_choice;
		int inner_loop = 0;
		
		while(menu_loop == 'y'){
			int burger_choice, sandwich_choice, dessert_choice, beverages_choice, offers_choice;
			
			menu(&menu_choice); 
		 	
		 	switch(menu_choice){
		 		case 1:
			 		burgers(&burger_choice);
			 		
			 		while(inner_loop != 1){
		 				if(burger_choice == 1){
							O1 = Information();
						/*Copy the added element to O1.add then clears the content of qar.add*/
							strcpy(O1.category, "Beef Burger");

							strcpy(O1.add, qar.add);
							strcpy(O1.removee, qar.removee);
							CLEAR(qar.add);
							CLEAR(qar.removee);

							O1.price = 2.50;
							
							SUBTOTAL += (O1.quantity * O1.price);
							inner_loop = 1;
				 			
				 		}
				 		else if(burger_choice == 2){
		 					O2 = Information();
		 					strcpy(O2.category, "Chicken Burger");
		 					
		 					strcpy(O2.add, qar.add);
		 					strcpy(O2.removee, qar.removee);
		 					CLEAR(qar.add);
		 					CLEAR(qar.removee);

							O2.price = 2.50;
							
							SUBTOTAL += (O2.quantity * O2.price);
				 			inner_loop = 1;
				 		}
				 		else if(burger_choice == 3){
				 			O3 = Information();
		 					strcpy(O3.category, "Cheese Burger");
				 			
		 					strcpy(O3.add, qar.add);
							strcpy(O3.removee, qar.removee);
							CLEAR(qar.add);
							CLEAR(qar.removee);
							
							O3.price = 3.00;
							
							SUBTOTAL += (O3.quantity * O3.price);
				 			inner_loop = 1;
				 		}
				 		else if(burger_choice == 4){
				 			O4 = Information();
		 					strcpy(O4.category, "Zinger Burger");
		 					
		 					strcpy(O4.add, qar.add);
							strcpy(O4.removee, qar.removee);
							CLEAR(qar.add);
							CLEAR(qar.removee);
							
							O4.price = 5.00;
							
							SUBTOTAL += (O4.quantity * O4.price);
				 			inner_loop = 1;
				 		}
				 		else if(burger_choice == -1){
			 				inner_loop = 1;
			 				mainmenu();
				 		}
				 		else{
				 			printf("Invalid selection!! Please choose one of the choices below or -1 to go back to the menu\n");
			 				burgers(&burger_choice);
			 			}
			 		}
			 		
			 		
			 		break;
			 		
		 		case 2:
		 			sandwiches(&sandwich_choice);
		 			inner_loop = 0;
		 			while(inner_loop != 1){
				 		if(sandwich_choice == 1){
				 			O5 = Information();
		 					strcpy(O5.category, "Crispy Sandwich");
		 					
		 					strcpy(O5.add, qar.add);
							strcpy(O5.removee, qar.removee);
							CLEAR(qar.add);
							CLEAR(qar.removee);
							
							O5.price = 7.00;
							
							SUBTOTAL += (O5.quantity * O5.price);
				 			inner_loop = 1;
			 			}
				 		else if(sandwich_choice == 2){
				 			O6 = Information();
		 					strcpy(O6.category, "Fransisco Sandwich");
		 					
		 					strcpy(O6.add, qar.add);
							strcpy(O6.removee, qar.removee);
							CLEAR(qar.add);
							CLEAR(qar.removee);
							
							O6.price = 5.80;
							
							SUBTOTAL += (O6.quantity * O6.price);
				 			inner_loop = 1;
				 		}
				 		else if(sandwich_choice == 3){
				 			O7 = Information();
		 					strcpy(O7.category, "Chicken Sub Sandwich");
		 					
		 					strcpy(O7.add, qar.add);
							strcpy(O7.removee, qar.removee);
							CLEAR(qar.add);
							CLEAR(qar.removee);
							
							O7.price = 5.10;
							
							SUBTOTAL += (O7.quantity * O7.price);
				 			inner_loop = 1;
				 		}
				 		else if(sandwich_choice == 4){
				 			O8 = Information();
		 					strcpy(O8.category, "Tawook Sandwich");
		 					
		 					strcpy(O8.add, qar.add);
							strcpy(O8.removee, qar.removee);
							CLEAR(qar.add);
							CLEAR(qar.removee);
							
							O8.price = 6.50;
							
							SUBTOTAL += (O8.quantity * O8.price);
				 			inner_loop = 1;
				 		}
				 		else if(sandwich_choice == -1){
			 				inner_loop = 1;
			 				mainmenu();
				 		}
				 		else{
				 			sandwiches(&sandwich_choice);
				 		}
				 	}
			 		
			 		break;
		 		
		 		case 3:
		 			desserts(&dessert_choice);
		 			while(inner_loop != 1){
					 	if(dessert_choice == 1){
				 			printf("How many do you want?");
		 					scanf("%d", &O9.quantity);
		 					strcpy(O9.category, "Brownies");
							O9.price = 7.00;
						 	
						 	SUBTOTAL += (O9.quantity * O9.price);
				 			inner_loop = 1;
				 		}
				 		else if(dessert_choice == 2){
				 			printf("How many do you want?");
		 					scanf("%d", &O10.quantity);
		 					strcpy(O10.category, "Tiramisu");
							O10.price = 8.00;
							
							SUBTOTAL += (O10.quantity * O10.price);
				 			inner_loop = 1;
				 		}
				 		else if(dessert_choice == 3){
				 			printf("How many do you want?");
		 					scanf("%d", &O11.quantity);
		 					strcpy(O11.category, "Cake");
							O11.price = 10.00;
							
							SUBTOTAL += (O11.quantity * O11.price);
				 			inner_loop = 1;
				 		}
				 		else if(dessert_choice == 4){
				 			printf("How many do you want?");
		 					scanf("%d", &O12.quantity);
		 					strcpy(O12.category, "Muffins");
							O12.price = 6.00;
							
							SUBTOTAL += (O12.quantity * O12.price);
				 			inner_loop = 1;
				 		}
				 		else if(dessert_choice == 5){
				 			printf("How many do you want?");
		 					scanf("%d", &O13.quantity);
		 					strcpy(O13.category, "Ice Cream");
							O13.price = 4.00;
							
							SUBTOTAL += (O13.quantity * O13.price);
				 			inner_loop = 1;
				 		}
				 		else if(dessert_choice == -1){
			 				inner_loop = 1;
			 				mainmenu();
				 		}
				 		
				 		else{
			 				desserts(&dessert_choice);
				 		}	
				 	}
			 		
			 		break;
			 		
		 		case 4:
		 			beverages(&beverages_choice);
		 			while(inner_loop != 1){
				 		if(beverages_choice == 1){
							/* choose a juice */
							printf("How many do you want?");
		 					scanf("%d", &O14.quantity);
		 					strcpy(O14.category, "Fresh juice");
							O14.price = 8.00;
							
							SUBTOTAL += (O14.quantity * O14.price);
	 						inner_loop = 1;
				 		}
				 		else if(beverages_choice == 2){
				 			printf("How many do you want?");
		 					scanf("%d", &O15.quantity);
		 					strcpy(O15.category, "Ice Tea");
							O15.price = 4.50;
							
							SUBTOTAL += (O15.quantity * O15.price);
				 			inner_loop = 1;
				 		}
				 		else if(beverages_choice == 3){
				 			printf("How many do you want?");
		 					scanf("%d", &O16.quantity);
		 					strcpy(O16.category, "Coffee Frappe");
							O16.price = 5.00;
							
							SUBTOTAL += (O16.quantity * O16.price);
				 			inner_loop = 1;
				 		}
				 		else if(beverages_choice == 4){
				 			/* choose a soft drink */
				 			printf("How many do you want?");
		 					scanf("%d", &O17.quantity);
		 					strcpy(O17.category, "Soft Drinks");
							O17.price = 4.00;
							
							SUBTOTAL += (O17.quantity * O17.price);
				 			inner_loop = 1;
				 		}
				 		else if(beverages_choice == 5){
				 			printf("How many do you want?");
		 					scanf("%d", &O18.quantity);
		 					strcpy(O18.category, "Water");
							O18.price = 1.00;
				 			
				 			SUBTOTAL += (O18.quantity * O18.price);
				 			inner_loop = 1;
				 		}
				 		else if(beverages_choice == 6){
				 			printf("How many do you want?");
		 					scanf("%d", &O19.quantity);
	 						strcpy(O19.category, "Coffee");
							O19.price = 2.34;
							
							SUBTOTAL += (O19.quantity * O19.price);
				 			inner_loop = 1;
				 		}
				 		else if(beverages_choice == 7){
				 			printf("How many do you want?");
		 					scanf("%d", &O20.quantity);
		 					strcpy(O20.category, "Espresso");
							O20.price = 2.50;
							
							SUBTOTAL += (O20.quantity * O20.price);
				 			inner_loop = 1;
				 		}
				 		else if(beverages_choice == 8){
				 			printf("How many do you want?");
		 					scanf("%d", &O21.quantity);
		 					strcpy(O21.category, "Cappuccino");
							O21.price = 4.35;
							
							SUBTOTAL += (O21.quantity * O21.price);
				 			inner_loop = 1;
				 		}
				 		else if(beverages_choice == 9){
				 			printf("How many do you want?");
		 					scanf("%d", &O22.quantity);
		 					strcpy(O22.category, "Hot Chocolate");
							O22.price = 4.00;
							
							SUBTOTAL += (O22.quantity * O22.price);
				 			inner_loop = 1;
				 		}
				 		else if(beverages_choice == 10){
			 				printf("How many do you want?");
		 					scanf("%d", &O23.quantity);
		 					strcpy(O23.category, "Tea");
							O23.price = 2.34;
							
							SUBTOTAL += (O23.quantity * O23.price);
				 			inner_loop = 1;
				 		}
				 		else if(beverages_choice == -1){
			 				inner_loop = 1;
			 				mainmenu();
				 		}
				 		else{
			 				beverages(&beverages_choice);
				 		}
				 	}
			 		
			 		break;
			 		
		 	}
		 	
			menu_loop = 'x'; /* To exit the while loop */
			while(menu_loop == 'x'){
				printf("\nDo you want to continue Ordering? (y/n)");
				scanf("%s", &menu_loop);
				if(menu_loop == 'y'){
					inner_loop = 0;
				}
				
				else{
					while(menu_loop != 'y' && menu_loop != 'n'){
						printf("Invalid selection!\n");	
						printf("Do you want to continue Ordering? (y/n)");
						scanf("%s", &menu_loop);
						inner_loop = 0;
					}
				}
			}	
		}
		
		system("cls"); //Clear screen
		
		receipt();
		Initializer();
		SUBTOTAL=0;
	
		printf("Press any key to continue . . .");
		getch();
		system("cls"); //Clear screen
		
		
	}
}

void menu(int *choice){
	int loop;
	loop = 1;
	printf("Menu:\n"
		   "1. Burgers\n"
		   "2. Sandwiches\n"
	       "3. Desserts\n"
	       "4. Beverages\n");
 	scanf("%d", choice);

}

void burgers(int *choice){
 	printf("Burgers:\n"
            "1. Beef burger..........................2.50$\n"
            "2. Chicken burger.......................2.50$\n"
            "3. Cheese burger........................3.00$\n"
            "4. Zinger burger........................5.00$\n"
            "Type -1 to go back \n");
  	scanf("%d", choice);
  	
}

void sandwiches(int *choice){
	printf("Sandwiches:\n"
            "1. Crispy Sandwich......................7.00$\n"
            "2. Fransisco Sandwich...................5.80$\n"
            "3. Chicken Sub Sandwich.................5.10$\n"
            "4. Tawook Sandwich......................6.50$\n"
            "Type -1 to go back \n");
  	scanf("%d", choice);

}

void desserts(int *choice){
	printf("Desserts:\n"
            "1. Brownies.............................7.00$\n"
            "2. Tiramisu.............................8.00$\n"
            "3. Cake................................10.00$\n"
            "4. Muffins..............................6.00$\n"
            "5. Ice Cream............................4.00$\n"
            "Type -1 to go back \n");
  	scanf("%d", choice);

}

void beverages(int *choice){
	printf("Cold Beverages:                                        Hot Beverages:\n"
           "1. Fresh juice...........................8.00$    |     6. Coffee................................2.34$\n"
           "2. Ice tea...............................4.50$    |     7. Espresso..............................2.50$\n"
           "3. Coffee Frappe.........................5.00$    |     8. Cappuccino............................4.35$\n"
           "4. Soft Drinks...........................4.00$    |     9. Hot Chocolate.........................4.00$\n"      
           "5. Water.................................1.00$    |    10. Tea...................................2.34$\n"
           "Type -1 to go back \n");                                
  	scanf("%d", choice);

}

struct order Information(){

	char yes_or_no;
	int while_loop1 = 0;
	
	printf("How many do you want? ");
	scanf("%d", &qar.quantity);
	
	
				
	printf("Do you want to add or remove any ingredients? (y/n)");
	scanf("%s", &yes_or_no);

	while(while_loop1 != 1){
		if(yes_or_no == 'y'){

			char add_or_remove;
			printf("Add or Remove? (a/r)");	
			scanf("%s", &add_or_remove);
			
			int while_loop2 = 0;
			while(while_loop2 != 1){
				if(add_or_remove == 'a'){
					char a[1000];
					printf("What do you want to add? ");
					getchar();
					gets(a);
					strcpy(qar.add, a);
					while_loop2 = 1;
				}
				else if(add_or_remove == 'r'){
					char r[1000];
					printf("What do you want to remove? ");
					getchar();
					gets(r);
					strcpy(qar.removee, r);
					while_loop2 = 1;
				}
				
				else{
					while(add_or_remove != 'a' && add_or_remove != 'r'){
						printf("Invalid selection!\n");
						printf("Add or Remove? (a/r)");	
						scanf("%s", &add_or_remove);	
					}	
				}	
			}
			while_loop1 = 1;
		}
		else if(yes_or_no == 'n'){
	 		while_loop1 = 1;
	 		
		}
		else{
			while(yes_or_no	!= 'y' && yes_or_no	 != 'n'){
				printf("Invalid selection!\n");
				printf("Do you want to add or remove any ingredients? (y/n)");
				scanf("%s", &yes_or_no);
			}
		}
	}
	
	return qar;	 					
}

void receipt(void){
	struct choice;
	struct Ingredients;
    time_t t;  // 'time_t' is an arithmetic time type
    
    time(&t); // Obtain current time and returns the current time of the system as a 'time_t' value
   	TAX = 0.05 * SUBTOTAL;
	TOTAL = SUBTOTAL + TAX;
	
	FILE *fpointer;
	fpointer = fopen("Food Ordering System (Receipts).txt", "a");
	
	printf("..................Receipt..................\n");
 	printf("Date & Time: %s\n", ctime(&t)); // Convert to local time format and print to the screen
	printf("Order Number: %d\n", orderNumber);
	printf("\nCatergory                             Price\n\n");
	
	
	fprintf(fpointer, "Receipt number %d:\n\n", orderNumber);
	
	fprintf(fpointer, "..................Receipt..................\n");
 	fprintf(fpointer, "Date & Time: %s\n", ctime(&t)); // Convert to local time format and print to the screen
	fprintf(fpointer, "Order Number: %d\n", orderNumber);
	fprintf(fpointer, "\nCatergory                             Price\n\n");

	orderChoices(fpointer);
	
	printf("\nSubtotal..............................%.2lf$\n", SUBTOTAL);
	printf("Tax...................................%.2lf$\n", TAX);
	printf("--------------------------------------------\n");
	printf("TOTAL.................................%.2lf$\n", TOTAL);
	printf("\nYou have been served by: -Hani Fayed\n"); 
 	printf("                         -Fouad Soubra\n");
 	printf("                         -Haitham Dayeh\n");
 	printf("\n.............Enjoy your meal :).............\n\n");
 	
 	fprintf(fpointer, "\nSubtotal..............................%.2lf$\n", SUBTOTAL);
	fprintf(fpointer, "Tax...................................%.2lf$\n", TAX);
	fprintf(fpointer, "--------------------------------------------\n");
	fprintf(fpointer, "TOTAL.................................%.2lf$\n", TOTAL);
	fprintf(fpointer, "\nYou have been served by: -Hani Fayed\n"); 
 	fprintf(fpointer, "                         -Fouad Soubra\n");
 	fprintf(fpointer, "                         -Haitham Dayeh\n");
 	fprintf(fpointer, "\n.............Enjoy your meal :).............\n\n");
 	
	fclose(fpointer);
	
 	
}
void orderChoices(FILE *fpointer){
	
	int print_loop;
	for(print_loop = 1; print_loop < 24; print_loop++){
		switch (print_loop){
			case 1:
				if(O1.quantity != 0){
					printf("%s(x%d)%27.2lf$\n", O1.category, O1.quantity, O1.price*O1.quantity);
					fprintf(fpointer, "%s(x%d)%27.2lf$\n", O1.category, O1.quantity, O1.price*O1.quantity);
					if(strlen(O1.add) != 0){
						printf("....ADD: %s\n",O1.add);
						fprintf(fpointer, "....ADD: %s\n",O1.add);
					}
					
					if(strlen(O1.removee) != 0){
						printf("....REMOVE: %s\n",O1.removee);
						fprintf(fpointer, "....REMOVE: %s\n",O1.removee);
					}
					
				}
				break;
			
			case 2:
				if(O2.quantity	 != 0){
					printf("%s(x%d)%24.2lf$\n", O2.category, O2.quantity, O2.price*O2.quantity);
					fprintf(fpointer, "%s(x%d)%24.2lf$\n", O2.category, O2.quantity, O2.price*O2.quantity);
					if(strlen(O2.add) != 0){
						printf("....ADD: %s\n",O2.add);
						fprintf(fpointer, "....ADD: %s\n",O2.add);
					}
					
					if(strlen(O2.removee) != 0){
						printf("....REMOVE: %s\n",O2.removee);
						fprintf(fpointer, "....REMOVE: %s\n",O2.removee);
					}
				}
				break;
			
			case 3:
				if(O3.quantity	 != 0){
					printf("%s(x%d)%25.2lf$\n", O3.category, O3.quantity, O3.price*O3.quantity);
					fprintf(fpointer, "%s(x%d)%25.2lf$\n", O3.category, O3.quantity, O3.price*O3.quantity);
					if(strlen(O3.add) != 0){
						printf("....ADD: %s\n",O3.add);
						fprintf(fpointer, "....ADD: %s\n",O3.add);
					}
					
					if(strlen(O3.removee) != 0){
						printf("....REMOVE: %s\n",O3.removee);
						fprintf(fpointer, "....REMOVE: %s\n",O3.removee);
					}
				}
				break;
				
			case 4:
				if(O4.quantity	 != 0){
					printf("%s(x%d)%25.2lf$\n", O4.category, O4.quantity, O4.price*O4.quantity);
					fprintf(fpointer, "%s(x%d)%25.2lf$\n", O4.category, O4.quantity, O4.price*O4.quantity);
					if(strlen(O4.add) != 0){
						printf("....ADD: %s\n",O4.add);
						fprintf(fpointer, "....ADD: %s\n",O4.add);
					}
					
					if(strlen(O4.removee) != 0){
						printf("....REMOVE: %s\n",O4.removee);
						fprintf(fpointer, "....REMOVE: %s\n",O4.removee);
					}
				}
				break;
				
			case 5:
				if(O5.quantity	 != 0){
					printf("%s(x%d)%23.2lf$\n", O5.category, O5.quantity, O5.price*O5.quantity);
					fprintf(fpointer, "%s(x%d)%23.2lf$\n", O5.category, O5.quantity, O5.price*O5.quantity);
					if(strlen(O5.add) != 0){
						printf("....ADD: %s\n",O5.add);
						fprintf(fpointer, "....ADD: %s\n",O5.add);
					}
					
					if(strlen(O5.removee) != 0){
						printf("....REMOVE: %s\n",O5.removee);
						fprintf(fpointer, "....REMOVE: %s\n",O5.removee);
					}
				}
				break;
				
			case 6:
				if(O6.quantity	 != 0){
					printf("%s(x%d)%20.2lf$\n", O6.category, O6.quantity, O6.price*O6.quantity);
					fprintf(fpointer, "%s(x%d)%20.2lf$\n", O6.category, O6.quantity, O6.price*O6.quantity);
					if(strlen(O6.add) != 0){
						printf("....ADD: %s\n",O6.add);
						fprintf(fpointer, "....ADD: %s\n",O6.add);
					}
					
					if(strlen(O6.removee) != 0){
						printf("....REMOVE: %s\n",O6.removee);
						fprintf(fpointer, "....REMOVE: %s\n",O6.removee);
					}
				}
				break;
				
			case 7:
				if(O7.quantity	 != 0){
					printf("%s(x%d)%18.2lf$\n", O7.category, O7.quantity, O7.price*O7.quantity);
					fprintf(fpointer, "%s(x%d)%18.2lf$\n", O7.category, O7.quantity, O7.price*O7.quantity);
					if(strlen(O7.add) != 0){
						printf("....ADD: %s\n",O7.add);
						fprintf(fpointer, "....ADD: %s\n",O7.add);
					}
					
					if(strlen(O7.removee) != 0){
						printf("....REMOVE: %s\n",O7.removee);
						fprintf(fpointer, "....REMOVE: %s\n",O7.removee);
					}
				}
				break;
				
			case 8:
				if(O8.quantity	 != 0){
					printf("%s(x%d)%23.2lf$\n", O8.category, O8.quantity, O8.price*O8.quantity);
					fprintf(fpointer, "%s(x%d)%23.2lf$\n", O8.category, O8.quantity, O8.price*O8.quantity);
					if(strlen(O8.add) != 0){
						printf("....ADD: %s\n",O8.add);
						fprintf(fpointer, "....ADD: %s\n",O8.add);
					}
					
					if(strlen(O8.removee) != 0){
						printf("....REMOVE: %s\n",O8.removee);
						fprintf(fpointer, "....REMOVE: %s\n",O8.removee);
					}
				}
				break;
				
			case 9:
				if(O9.quantity	 != 0){
					printf("%s(x%d)%30.2lf$\n", O9.category, O9.quantity, O9.price*O9.quantity);
					fprintf(fpointer, "%s(x%d)%30.2lf$\n", O9.category, O9.quantity, O9.price*O9.quantity);
				}
				break;
				
			case 10:
				if(O10.quantity	 != 0){
					printf("%s(x%d)%30.2lf$\n", O10.category, O10.quantity, O10.price*O10.quantity);
					fprintf(fpointer, "%s(x%d)%30.2lf$\n", O10.category, O10.quantity, O10.price*O10.quantity);
				}
				break;
				
			case 11:
				if(O11.quantity	 != 0){
					printf("%s(x%d)%34.2lf$\n", O11.category, O11.quantity, O11.price*O11.quantity);
					fprintf(fpointer, "%s(x%d)%34.2lf$\n", O11.category, O11.quantity, O11.price*O11.quantity);
				}
				break;
				
			case 12:
				if(O12.quantity	 != 0){
					printf("%s(x%d)%31.2lf$\n", O12.category, O12.quantity, O12.price*O12.quantity);
					fprintf(fpointer, "%s(x%d)%31.2lf$\n", O12.category, O12.quantity, O12.price*O12.quantity);
				}
				break;
				
			case 13:
				if(O13.quantity	 != 0){
					printf("%s(x%d)%29.2lf$\n", O13.category, O13.quantity, O13.price*O13.quantity);
					fprintf(fpointer, "%s(x%d)%29.2lf$\n", O13.category, O13.quantity, O13.price*O13.quantity);
				}
				break;
				
			case 14:
				if(O14.quantity	 != 0){
					printf("%s(x%d)%27.2lf$\n", O14.category, O14.quantity, O14.price*O14.quantity);
					fprintf(fpointer, "%s(x%d)%27.2lf$\n", O14.category, O14.quantity, O14.price*O14.quantity);
				}
				break;
				
			case 15:
				if(O15.quantity	 != 0){
					printf("%s(x%d)%31.2lf$\n", O15.category, O15.quantity, O15.price*O15.quantity);
					fprintf(fpointer, "%s(x%d)%31.2lf$\n", O15.category, O15.quantity, O15.price*O15.quantity);
				}
				break;
				
			case 16:
				if(O16.quantity	 != 0){
					printf("%s(x%d)%25.2lf$\n", O16.category, O16.quantity, O16.price*O16.quantity);
					fprintf(fpointer, "%s(x%d)%25.2lf$\n", O16.category, O16.quantity, O16.price*O16.quantity);
				}
				break;
				
			case 17:
				if(O17.quantity	 != 0){
					printf("%s(x%d)%27.2lf$\n", O17.category, O17.quantity, O17.price*O17.quantity);
					fprintf(fpointer, "%s(x%d)%27.2lf$\n", O17.category, O17.quantity, O17.price*O17.quantity);
				}
				break;
				
			case 18:
				if(O18.quantity	 != 0){
					printf("%s(x%d)%33.2lf$\n", O18.category, O18.quantity, O18.price*O18.quantity);
					fprintf(fpointer, "%s(x%d)%33.2lf$\n", O18.category, O18.quantity, O18.price*O18.quantity);
				}
				break;
				
			case 19:
				if(O19.quantity	 != 0){
					printf("%s(x%d)%32.2lf$\n", O19.category, O19.quantity, O19.price*O19.quantity);
					fprintf(fpointer, "%s(x%d)%32.2lf$\n", O19.category, O19.quantity, O19.price*O19.quantity);
				}
				break;
				
			case 20:
				if(O20.quantity	 != 0){
					printf("%s(x%d)%30.2lf$\n", O20.category, O20.quantity, O20.price*O20.quantity);
					fprintf(fpointer, "%s(x%d)%30.2lf$\n", O20.category, O20.quantity, O20.price*O20.quantity);
				}
				break;
				
			case 21:
				if(O21.quantity	 != 0){
					printf("%s(x%d)%28.2lf$\n", O21.category, O21.quantity, O21.price*O21.quantity);
					fprintf(fpointer, "%s(x%d)%28.2lf$\n", O21.category, O21.quantity, O21.price*O21.quantity);
				}
				break;
				
			case 22:
				if(O22.quantity	 != 0){
					printf("%s(x%d)%25.2lf$\n", O22.category, O22.quantity, O22.price*O22.quantity);
					fprintf(fpointer, "%s(x%d)%25.2lf$\n", O22.category, O22.quantity, O22.price*O22.quantity);
				}
				break;
				
			case 23:
				if(O23.quantity	 != 0){
					printf("%s(x%d)%35.2lf$\n", O23.category, O23.quantity, O23.price*O23.quantity);
					fprintf(fpointer, "%s(x%d)%35.2lf$\n", O23.category, O23.quantity, O23.price*O23.quantity);
				}
				break;
			
		}
		
		
	}
}

void Initializer(){
	O1.quantity = 0;
	O2.quantity = 0;
	O3.quantity = 0;
	O4.quantity = 0;
	O5.quantity = 0;
	O6.quantity = 0;
	O7.quantity = 0;
	O8.quantity = 0;
	O9.quantity = 0;
	O10.quantity = 0;
	O11.quantity = 0;
	O12.quantity = 0;
	O13.quantity = 0;
	O14.quantity = 0;
	O15.quantity = 0;
	O16.quantity = 0;
	O17.quantity = 0;
	O18.quantity = 0;
	O19.quantity = 0;
	O20.quantity = 0;
	O21.quantity = 0;
	O22.quantity = 0;
	O23.quantity = 0;
}
