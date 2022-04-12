//Program to calculate distance travelled by the car
#include <stdio.h>

int main()
{
    float total_price,petrol_price_per_litre,distance_travelled;int mileage;
    total_price=1066.64;
    //mileage=14;

    printf("Input the price of petrol per litre\n");
    scanf("%f",&petrol_price_per_litre);

    printf("Enter the mileage of the car\n");
    scanf("%d",&mileage);

    float total_petrol_in_car=total_price/petrol_price_per_litre;

    distance_travelled=total_petrol_in_car*mileage;

    printf("Total fuel in the car = %f litres\n",total_petrol_in_car);
    printf("Total distance travelled by the car = %.2f kms\n",distance_travelled);

    return 0;
}
