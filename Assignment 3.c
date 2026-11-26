#include <stdio.h>
int main()
{
    float first_number, second_number;
    int op_choice;

    printf ("Enter two numbers:");
    if (scanf("%f %f", &first_number, &second_number)!= 2)
    {
        printf ("Error : Invalid number.\n");
        return 1;
    }
    printf ("Enter operation choice :");
    if (scanf("%d", & op_choice)!= 1)
    {
        printf ("Error : Invalid operation.\n");
        return 0;
    }
    switch(op_choice)
    {
        case 1 : 
        printf ("Addition = %f\n", first_number + second_number);
        break;

        case 2 :
        printf ("Subraction = %f\n", first_number - second_number);
        break;

        case 3 :
        printf ("Multiplication = %f\n", first_number * second_number);
        break;

        case 4 :
        if (second_number == 0)
        {
            printf ("Error : Cannot devide by zero.\n");
        }
        else 
        {
            printf ("Division = %f\n", first_number / second_number);
        }
        break;

        default:
        printf ("Error : Invalid operation.\n");
    }

    return 0;     
}