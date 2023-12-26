#include<stdio.h>
float temperature_conversion(float temperature,char unit)
{
    if(unit == 'F')
    {
        temperature = (temperature - 32)*0.555556;
        return temperature;
    }
    else if(unit == 'C')
    {
        temperature = (temperature*1.8) + 32;
        return temperature;
    }
    return 0;
}
void main()
{
    float temperature,new_temperature;
    char unit;
    printf("ENTER THE TEMPERATURE:");
    scanf("%f",&temperature);
    printf("TEMPERATURE UNIT(FAHRENHEIT F OR CELSIUS C): ");
    scanf(" %c",&unit);
    new_temperature = temperature_conversion(temperature,unit);
    if(unit == 'F')
    {
        printf("THE TEMPERATURE IN DEGREE CELSIUS: %f*C",new_temperature);
    }
    else if(unit == 'C')
    {
        printf("THE TEMPERATURE IN DEGREE FAHRENHEIT: %f*F",new_temperature);
    }
}