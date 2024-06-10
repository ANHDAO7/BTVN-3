#include<stdio.h>

int main(){
	int choice;
	printf("========MENU========\n1.Please input your name and MAMA birthday.\n2.Check if a number is even or odd.\n3.Exit\n");
	
	do{
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:{
					char name[111];
					int dd,mm,yy;
					int c;
					
					printf("\nEnter your mother's name: ");
					scanf("%s",&name);
	    			while ((c = getchar()) != '\n' && c != EOF); 
	
					printf("Enter your MAMA birthday (dd mm yyyy): ");
					scanf("%d %d %d",&dd,&mm,&yy);
					printf("Your mother's name is %s and your MAMA birthday is %d/%d/%d.\n",name,dd,mm,yy);
					break;
				}
			
			case 2:{
					int n;
					printf("\nEnter a number: ");
					scanf("%d",&n);
					while( n != 0){
						if(n % 2 == 0){ 
							printf("%d is even number.\n",n);
						}else printf("%d is odd number.\n",n);
						break;
					}
					break;	
				}
			
			case 3:
				break;
				printf("Thanks for using.Goodbye!!!\n");
				break;
			default:
				printf("Invalid choice!!!\n");
				break;
		}
	}while(choice != 3);
}
