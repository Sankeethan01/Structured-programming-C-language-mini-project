#include <stdio.h>
#include <string.h>
#include <stdlib.h>




struct orders

{

    char name[50];
    char date[30];
    char nic[20];
    char phone[20];
    char address[50];
    char car[20];
    char email[50];
    char type[30];
    float price;
    float dis;
    float nettotal;

};



// bill

void billtop(char name[50],char date[30],char nic[20],char phone[20],char address[50],char car[20],char email[50])

{


    printf("\n\n");
    printf("\n\t  ****** ANS.AUTOMOBILES PVT LTD.******");
    printf("\n\t-----------------------------------------");




    printf("\n\tDate\t\t:%s",date);
    printf("\n\tBill to \t:%s",name);
    printf("\n\tN.I.C No\t:%s",nic);
    printf("\n\tPhone No\t:%s",phone);
    printf("\n\tAddress \t:%s",address);
    printf("\n\tCar Detail\t:%s",car);
    printf("\n\tEmail\t   \t:%s",email);
    printf("\n");

    printf("\t-----------------------------------------\n");
    printf("\tType\t\t\t\t");
    printf("Price");
    printf("\n\t-----------------------------------------");
    printf("\n\n");


}


void billbody(char type[20],float price,float dis,float nettotal)

{
    printf("\t%s\t\t\t\t\t%0.2f",type,price);

    printf("\n");

    dis = 0.1*price;
    nettotal=price-dis;
    printf("\t-----------------------------------------\n");
    printf("\tTotal\t\t\t\t%0.2f",price);
    printf("\n");
    printf("\tDiscount(10 percent)\t\t%0.2f",dis);
    printf("\n\t---------------------------------------\n");
    printf("\tPayment\t\t\t\t%0.2f",nettotal);
    printf("\n\t---------------------------------------\n");

}


int main()

{


    int opt,date;


    char names[50];
    char saveBill='y',contFlag = 'y';

    FILE *fp;

    struct orders ord;
    struct orders order;

    while(contFlag == 'y')
     {

          system("cls");

         int billfound=0;


          printf("\n\t****** ANS.AUTOMOBILES PVT LTD.******");
          printf("\n\t----------------------------------");
          printf("\n\t----------------------------------");


    printf("\n\n\t1.Booking or Billing for Services");
    printf("\n\n\t2.Show all the Bills");
    printf("\n\n\t3.Search the Bill with Name");
    printf("\n\n\t4.Exit");


    printf("\n\nPlease select your prefered operation:\t");
    scanf("%d",&opt);
    printf("\n\tYou have chosen  %d",opt);
    fgetc(stdin);
    printf("\n");


    switch(opt)
    {

    case 1:

             system("cls");


             printf("\n\t****** ANS.AUTOMOBILES PVT LTD.******");
             printf("\n\t----------------------------------");
             printf("\n\t----------------------------------\n");



    printf("###############################################################################\n");
    printf("#:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::#\n");
    printf("#====================================   ANS AUTOMOBILES  =====================#\n");
    printf("#:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::#\n");
    printf("###############################################################################\n");
    printf("###############################################################################\n");
    printf("#      OUR SERVICES                            #          CHARGES(LKR)        #\n");
    printf("###############################################################################\n");
    printf("#::::::::::::::::::::::::::::::::::::::::: CAR WASH ::::::::::::::::::::::::::#\n");
    printf("###############################################################################\n");
    printf("#  1     Basic wash                            #             1500             #\n");
    printf("#  2     Deluxe wash                           #             2500             #\n");
    printf("#  3     Premium wash                          #             3000             #\n");
    printf("#  4     Ultimate wash                         #             4000             #\n");
    printf("###############################################################################\n");
    printf("#::::::::::::::::::::::::::::::::::::: GENERAL SERVICES ::::::::::::::::::::::#\n");
    printf("###############################################################################\n");
    printf("#  5     ANS Total care                        #            80000             #\n");
    printf("#  6     Full Inspection                       #            35000             #\n");
    printf("#  7     Full Service                          #            20000             #\n");
    printf("#  8     Lube Service                          #            15000             #\n");
    printf("#  9     Exterior Detail                       #             5000             #\n");
    printf("# 10     Interior Detail                       #             5000             #\n");
    printf("# 11     Masking                               #             5000             #\n");
    printf("# 12     Wheel Alignment                       #             7000             #\n");
    printf("# 13     Rubber Treatment                      #             5000             #\n");
    printf("# 14     Car tint sun control films            #             4500             #\n");
    printf("# 15     Filter Replacement                    #             8000             #\n");
    printf("# 16     Rust proofing undercoating            #             8000             #\n");
    printf("# 17     Oil Change                            #             9000             #\n");
    printf("# 18     Auto transmission Fluid Change        #            25000             #\n");
    printf("# 19     Decarbonizing                         #            30000             #\n");
    printf("# 20     DPF setup                             #            15000             #\n");
    printf("# 21     Complete Engine Overhaul              #            40000             #\n");
    printf("###############################################################################\n");
    printf("#::::::::::::::::::::::::::::::::::: CLEANING SERVICES :::::::::::::::::::::::#\n");
    printf("###############################################################################\n");
    printf("# 22     Cleaning and Waxing                   #             4000             #\n");
    printf("# 23     Headlight Restoration                 #             3000             #\n");
    printf("# 24     Electronic Injector Cleaning          #             4000             #\n");
    printf("# 25     Injector Cleaning                     #             4000             #\n");
    printf("# 26     Engine Cleaning & Glazing             #             5000             #\n");
    printf("# 27     Glass Polish                          #             4000             #\n");
    printf("# 28     Car Wrapping                          #             2000             #\n");
    printf("###############################################################################\n");
    printf("#::::::::::::::::::::::::::::::::::::  RUNNING REPAIRS :::::::::::::::::::::::#\n");
    printf("###############################################################################\n");
    printf("# 29     Brake Repairs                         #            15000             #\n");
    printf("# 30     ABS Repairs                           #            35000             #\n");
    printf("# 31     Suspension Repairs                    #            25000             #\n");
    printf("# 32     Engine Overhauls Repairs              #            35000             #\n");
    printf("# 33     A/C Repairs                           #            25000             #\n");
    printf("# 34     Electrical Repairs                    #            35000             #\n");
    printf("# 35     ESC Repairs                           #            15000             #\n");
    printf("# 36     Steering Repairs                      #            20000             #\n");
    printf("# 37     2WD Drive Shaft Repairs               #            45000             #\n");
    printf("# 38     4WD Drive Shaft Repairs               #            65000             #\n");
    printf("# 39     Auto Transmission Repairs             #            65000             #\n");
    printf("# 40     Manual Transmission Repairs           #            50000             #\n");
    printf("# 41     Ignition Repairs                      #            15000             #\n");
    printf("# 42     ECU Repairs                           #            10000             #\n");
    printf("# 43     Heating Systems Repairs               #            25000             #\n");
    printf("# 44     Climate Control Systems Repairs       #            30000             #\n");
    printf("# 45     Disk Facing Repairs                   #            15000             #\n");
    printf("###############################################################################\n");
    printf("#:::::::::::::::::::::::::::::: VEHICLE TUNE UP SERVICES :::::::::::::::::::::#\n");
    printf("###############################################################################\n");
    printf("# 46     Engine Scanning                       #            25000             #\n");
    printf("# 47     EFI Engine Tune up                    #            25000             #\n");
    printf("# 48     Common Rail Engine Tune up(Diesel)    #            25000             #\n");
    printf("# 49     Common Rail Engine Tune up(Patrol)    #            25000             #\n");
    printf("# 50     Emission Control                      #            25000             #\n");
    printf("###############################################################################\n");
    printf("#:::::::::::::::::::::::::::::: Vehicle Option Services ::::::::::::::::::::::#\n");
    printf("###############################################################################\n");
    printf("# 51     Timing Correction                     #             3000             #\n");
    printf("# 52     Audio Surrounding Correction          #           115000             #\n");
    printf("# 53     Remote & sensing Checkup              #            10000             #\n");
    printf("# 54     DVR store                             #            30000             #\n");
    printf("# 55     Park Assist Store                     #            20000             #\n");
    printf("# 56     Nanoe Bootup                          #            15000             #\n");
    printf("# 57     Visual Screens Setup                  #           100000             #\n");
    printf("# 58     Air Bags Store                        #           150000             #\n");
    printf("# 59     Cruise Control Setup                  #            35000             #\n");
    printf("# 60     Safety Package Setup                  #            85000             #\n");
    printf("# 61     Memory Seat Setup Control             #           200000             #\n");
    printf("# 62     Seat Heating Setup                    #           160000             #\n");
    printf("# 63     LED Upgrade                           #            85000             #\n");
    printf("# 64     GPS Navigation Bootup                 #            25000             #\n");
    printf("###############################################################################\n");
    printf("#::::::::::::::::::::::::::::::::::::::: Paint Services ::::::::::::::::::::::#\n");
    printf("###############################################################################\n");
    printf("# 65     Cut & Polish                          #             4500             #\n");
    printf("# 66     Paint Protecting Film                 #             5000             #\n");
    printf("# 67     Full Scratch Scanning                 #            15000             #\n");
    printf("# 68     Scratch Removing                      #            25000             #\n");
    printf("# 69     Full Body Painting(Sedan)             #           850000             #\n");
    printf("# 70     Full Body Painting(Van)               #           950000             #\n");
    printf("# 71     Full Body Painting(SUV)               #           900000             #\n");
    printf("# 72     Full Body Painting(MiniVan)           #           700000             #\n");
    printf("# 73     Full Body Painting(MPV)               #           600000             #\n");
    printf("# 74     Full Body Painting(Micro)             #           500000             #\n");
    printf("# 75     Full Body Painting(Convertible)       #           900000             #\n");
    printf("# 76     Full Body Painting(Wagon)             #           550000             #\n");
    printf("# 77     Full Body Painting(Hatchback)         #           850000             #\n");
    printf("# 78     Full Body Painting(Coupe)             #           900000             #\n");
    printf("# 79     Full Body Painting(Antique)           #           700000             #\n");
    printf("# 80     Full Body Painting(Muscle car)        #           950000             #\n");
    printf("# 81     Full Body Painting(Limousine)         #          1000000             #\n");
    printf("# 82     Full Body Painting(Pickup)            #           900000             #\n");
    printf("# 83     Full Body Painting(Roadster)          #           800000             #\n");
    printf("# 84     Full Body Painting(Supercars)         #          1200000             #\n");
    printf("# 85     Full Body Painting(Campervan)         #          1000000             #\n");
    printf("# 86     Full Body Painting(Cabriolet)         #           900000             #\n");
    printf("# 87     Full Body Painting(Mini Truck)        #           700000             #\n");
    printf("# 88     Full Body Painting(Truck)             #           800000             #\n");
    printf("# 89     Full Body Painting(Big Truck)         #           850000             #\n");
    printf("#                                              #                              #\n");
    printf("#                                              #                              #\n");
    printf("#                                              #                              #\n");
    printf("###############################################################################\n");
    printf("###############################################################################\n");
    printf("###############################################################################\n");




        printf("\n\tEnter the name of the customer:\t");
        fgets(ord.name,50,stdin);
        ord.name[strlen(ord.name)-1]=0;

        strcpy(ord.date,__DATE__);

        printf("\tNIC No\t\t\t\t\:");
        fgets(ord.nic,20,stdin);

        printf("\tPhone no\t\t\t:");
        fgets(ord.phone,20,stdin);

        printf("\tAddress \t\t\t:");
        fgets(ord.address,50,stdin);

        printf("\tCar Detail\t\t\t:");
        fgets(ord.car,20,stdin);

        printf("\tEmail\t   \t\t\t:");
        fgets(ord.email,50,stdin);

        printf("\tName of the service  \t\t:");
        fgets(ord.type,20,stdin);

        printf("\tCharge\t\t\t\t:");
        scanf("%f",&ord.price);


    billtop(ord.name, ord.date, ord.nic, ord.phone,ord.address, ord.car,ord.email);
    billbody(ord.type,ord.price,ord.dis,ord.nettotal);


    printf("\nDo you want to save the booking bill[y/n]:\t");
    scanf("%s",&saveBill);


    if(saveBill=='y')

    {
        fp =fopen("bookingbill.txt","a+");
        fwrite(&ord,sizeof(struct orders),1,fp);

        if(fwrite!=0)
        {
            printf("\n Successfully saved\n");
            printf("A copy of Bill has been emailed.");
        }

        else
        {
            printf("\nError saving");

        }

        fclose(fp);

    }
    break;


    case 2:

         system("cls");

        fp =fopen("bookingbill.txt","r");
        printf("\n *******Your previous Booking*******\n");

        while(fread(&order,sizeof(struct orders),1,fp))
        {

            billtop(order.name, order.date, order.nic, order.phone,order.address, order.car,order.email);
            billbody(order.type,order.price,order.dis,order.nettotal);

        }

        fclose(fp);

    break;



    case 3:

         system("cls");


        printf("\n Enter the name of the customer:\t");
        //fgetc(stdin);
        fgets(names,50,stdin);
        names[strlen(names)-1] = 0;

        fp =fopen("bookingbill.txt","r");
        printf("\n *******Bill of %s*******\n",names);


        while(fread(&order,sizeof(struct orders),1,fp))

        {

             if(!strcmp(order.name,names))
             {

                billtop(order.name, order.date, order.nic, order.phone,order.address, order.car,order.email);
                billbody(order.type,order.price,order.dis,order.nettotal);

             }

              billfound=1;

        }

        if(!billfound)

        {

            printf("***Sorry the invoice for %s doesnot exists",names);

        }

        fclose(fp);
        break;



   case 4:

        system("cls");


    printf("\n\t\t Bye Bye :\n\n");
    exit(0);
    break;



    default:

         system("cls");


    printf("Sorry invalid option");
    break;


}


     printf("\nDo you want to perform another operation?[y/n]:\t");
     scanf("%s",&contFlag);

}

     printf("\n\n");



    return 0;

}

