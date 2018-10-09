//Marcel Plakolb
//2AHIF
#include<float.h>
#include <stdio.h>

int main(int argc, char[]* argv) {
double op1;
double op2;
int choice;

do{
	choice=Choice();
	getOperants(&op1,&op2);
	startOperation();
}while(Choice() != -1);
}

int Choice()
{
	int choice;

	printf("Choose one of the following operations:\n");
	printf("========================================\n", );
	printf("Add.............1\n");
	printf("Subtract........2\n");
	printf("Multiply........3\n");
	printf("Divide..........4\n");
	printf("Stop program...-1\n");
	printf("=================\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	while(choice < -1 || choice > 4 || choice == 0)
	{
		printf("\nInput not allowed, please try again: ");
		scanf("%d", &choice);
	}

	return choice;
}

double getOperants(double* op1, double* op2)
{

	printf("Please enter the first operant: ");
	scanf("%lf", &op1);

	printf("Please enter the second operant: ");
	scanf("%lf", &op2);
}

void startOperation()
{
	switch(Choice())
	{
		case 1:
			add(&op1,&op2);
			break;

		case 2:
		subtract(&op1,&op2);
		break;

		case 3:
			multiply(&op1,&op2);
			break;

		case 4:
			divide(&op1,&op2);
			break;

		default:
			break;
}

int add(int* op1, int* op2)
{
	return *op1 + *op2;
}

int subtract(int* op1, int* op2)
{
	return *op1 - *op2;
}

int multiply(int* op1, int* op2)
{
	return *op1 * *op2;
}

int divide(int* op1, int* op2)
{
	if(*op1 == 0 || *op2 == 0)
	{
		return "Division by Zero";
	}

	return *op1 / *op2;
}
}
//
