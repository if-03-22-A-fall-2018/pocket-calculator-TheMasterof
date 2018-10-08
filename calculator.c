//Marcel Plakolb
//2AHIF
#include<stdio.h>

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
	scanf("%lf", op1);

	printf("Please enter the second operant: ");
	scanf("%lf", op2);
}

void startOperation()
{
	switch(Choice())
	{
		case 1:
			Add();
			break;

		case 2:
		Subtract();
		break;

		case 3:
			Multiply();
			break;

		case 4:
			Divide();
			break;

		default:
			break;
}

int Add()
{
	return *op1 + *op2;
}

int Subtract()
{
	return *op1 - *op2;
}

int Multiply()
{
	return *op1 * *op2;
}

int Divide()
{
	if(*op1 == 0 || *op2 == 0)
	{
		return "Division by Zero";
	}

	return *op1 / *op2;
}
}
