#include<stdio.h>

#include<stdlib.h>

#include<math.h>


float length(float a);

float angle(float a);

float area(float a);

float currency(float a);

float time(float a);

float weight(float a);


void main()

{

    float value,r;

    int ch;

    printf("UNIT CONVERSION\n");

   

    printf("Select the type of measurement\n");

    printf("1->length in m\n2->Angle\n3->Area\n4->Currency\n5->Time\n6->Mass\n");

    scanf("%d",&ch);

    printf("you chose %d\n",ch);

    printf("Enter value: ");

    scanf("%f",&value);

    

  
    switch(ch)

    {

        case 1: r=length(value);

                break;

        case 2: r=angle(value);

                break;

        case 3: r=area(value);

                break;

        case 4: r=currency(value);

                break;

        case 5: r=time(value);

                break;

        case 6: r=weight(value);

                break;

        default: printf("Invalid option\n");

                 exit(0);

    }

    printf("answer=%f",r);

} 


float length(float a)

{

        int ch;

        printf("Choose the unit you wish to convert\n");

        printf("1->m to mile\n2->m to yard\n3->m to foot\n4->m to inch\n");

        scanf("%d",&ch);

        switch(ch)

        {

                case 1: a*=0.000621;

                        break;

                case 2: a*=1.09361;

                        break;

                case 3: a*=3.28084;

                        break;

                case 4: a*=39.3701;

                        break;

                default: printf("Invalid choice\n");

                        exit(0);

        }

        return a;

}


float angle(float a)

{

        int ch;

        printf("Choose the unit you wish to convert\n");

        printf("1->degree to radian\n2->degree to min of arc\n3->radian to degree\n4->degree to arcsecond\n");

        scanf("%d",&ch);

        switch(ch)

        {

                case 1: a*=0.0174533;

                        break;

                case 2: a*=60;

                        break;

                case 3: a*=57.2958;

                        break;

                case 4: a*=3600;

                        break;

                default: printf("Invalid choice\n");

                        exit(0);

        }

        return a;

}


float area(float a)

{

        int ch;

        printf("Choose the unit you wish to convert\n");

        printf("1->sqm to sqkm\n2->sqkm to sqm\n3->sqm to sqfoot\n4->sqm to sqinch\n");

        scanf("%d",&ch);

        switch(ch)

        {

                case 1: a*=pow(10,-6);

                        break;

                case 2: a*=pow(10,6);

                        break;

                case 3: a*=10.7639;

                        break;

                case 4: a*=1550;

                        break;

                default: printf("Invalid choice\n");

                        exit(0);

        }

        return a;

}


float currency(float a)

{

        int ch;

        printf("Currency value as per June 2, 2023\n");

        printf("Choose the unit you wish to convert\n");

        printf("1->Rupees to Dollar\n2->Dollar to Rupees\n3->Rupees to Euro\n4->Euro to Rupees\n");

        scanf("%d",&ch);

        switch(ch)

        {

                case 1: a*=0.012;

                        break;

                case 2: a*=82.33;

                        break;

                case 3: a*=0.011;

                        break;

                case 4: a*=88.63;

                        break;

                default: printf("Invalid choice\n");

                        exit(0);

        }

        return a;

}


float time(float a)

{

        int ch;

        printf("Choose the unit you wish to convert\n");

        printf("1->days to seconds\n2->days to hour\n3->days to min\n");

        scanf("%d",&ch);

        switch(ch)

        {

                case 1: a*=86400;

                        break;

                case 2: a*=24;

                        break;

                case 3: a*=1440;

                        break;

                default: printf("Invalid choice\n");

                        exit(0);

        }

        return a;

}


float weight(float a)

{

        int ch;

        printf("Choose the unit you wish to convert\n");

        printf("1->g to kg\n2->kg to g\n3->kg to pound\n4->kg to ton\n");

        scanf("%d",&ch);

        switch(ch)

        {

                case 1: a*=0.001;

                        break;

                case 2: a*=1000;

                        break;

                case 3: a*=2.20462;

                        break;

                case 4: a/=907.2;

                        break;

                default: printf("Invalid choice\n");

                        exit(0);

        }

        return a;

}
