#include<stdio.h>

int main()
{
    int i = 1, q;
    float s = 0.0;
    printf("Welcome to Varendra University Cafeteria\nDeveloped by Rafiun\n");
    printf("\nComplete order\t\t 10%% VAT will be included\n\n");
    printf("01. Pizza\t\t300 BDT\n02. Burger\t\t180 BDT\n03. Sandwich\t\t220 BDT\n04. Coffee\t\t80 BDT\n05. Drinks\t\t50 BDT\n\n");

    while(i != 0)
    {
        printf("Enter ID of items (0 to finish): ");
        scanf("%d", &i);
        switch(i)
        {
            case 0 : break;
            case 1: printf("Quantity of Pizza: ");
                    scanf("%d", &q);
                    s += (300 * q);
                    break;
            case 2: printf("Quantity of Burger: ");
                    scanf("%d", &q);
                    s += (180 * q);
                    break;
            case 3: printf("Quantity of Sandwich: ");
                    scanf("%d", &q);
                    s += (220 * q);
                    break;
            case 4: printf("Quantity of Coffee: ");
                    scanf("%d", &q);
                    s += (80 * q);
                    break;
            case 5: printf("Quantity of Drinks: ");
                    scanf("%d", &q);
                    s += (50 * q);
                    break;
            default: printf("Invalid input\n");
        }
    }

    s = s + (s * 0.1); // Adding 10% VAT
    printf("\nTotal Amount: %.2f BDT\n", s);
    return 0;
}

