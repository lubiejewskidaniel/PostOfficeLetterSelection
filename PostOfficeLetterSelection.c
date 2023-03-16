#include <stdio.h>

int main(void) {
  //variables declarations
  int weight;
  int opt, p=156;;
  float basicFee=2.85;
  char isN;

  printf("Enter the weight of the letter: ");//asking user for letter weight
  scanf("%d", &weight); //reading user answer

  printf("Select type of letter would you like to send: \n1 - First Class\n2 - Second Class\n");
  scanf("%d", &opt);

    switch(opt){ /*switch function used instead of if statement to give and option to choose class of letter to be sent.
                  opt is defind as an integer variable and in this function works as an argument to allow the user to choose
                  wanted option (type of letter in this scenario) */

      case 1: //1st class  letter - if numer 1 will be inputed
        if(weight<=100){//parcel up to 100g = basic fee
         printf("The cost to be paid is %c%.2f", p, basicFee);
        }else if(weight > 100 && weight <= 250){//parcel from 101g to 250g = basic fee + 25% charge
         printf("The cost to be paid is %c%.2f", p, basicFee + (basicFee * 0.25));
        }else if(weight > 250 && weight <= 500){//parcel from 251g to 500g = basic fee + 42% charge
         printf("The cost to be paid is &c%.2f", p, basicFee + (basicFee * 0.42));
        }else if(weight > 500 && weight <= 750){//parcel from 501g to 750g = basic fee + 65% charge
         printf("The cost to be paid is %c%.2f", p, basicFee + (basicFee * 0.65));
        }else{
         printf("It is not a letter anymore!");
          /*This is a program answer if user type in any weight bigger than
          750g what is actually outside of the scale for letters */
        } //end of 1st case
      break;

      case 2: //2nd class letter - if number 2 will be inputed

        if(weight<=100){//parcel up to 100g = basic fee - 15% (discount)
          printf("The cost to be paid is is %c£%.2f",  p, basicFee - (basicFee * 0.15));
            printf("Enter ...");
   scanf("");
        }else if(weight > 100 && weight <= 250){//parcel from 101g to 250g = basic fee + 25% charge - 15% (discount)
          printf("The cost to be paid is %c%.2f", p, (basicFee + (basicFee * 0.25)) - (basicFee + (basicFee * 0.25)) * 0.15);
        }else if(weight > 250 && weight <= 500){//parcel from 251g to 500g = basic fee + 45% charge - 15% (discount)
          printf("The cost to be paid is %c%.2f", p, ((basicFee * 0.42) + basicFee) - (basicFee + (basicFee * 0.42)) * 0.15);
        }else if(weight > 500 && weight <= 750){//parcel from 501g to 750g = basic fee + 65% charge - 15% (discount)
          printf("The cost to be paid is %c%.2f", p, ((basicFee * 0.65) + basicFee) - (basicFee + (basicFee * 0.65)) * 0.15);
        }else{
          printf("It is not a letter anymore!");
          /*This is program answer - if user type in any weight bigger than
          750g what is actually outside of the scale for letters */
        } //end of second case

      break;

     default: //scenario when other than 1 or 2 will be inputed by the user
      printf("Incorrect selection!");

    } //end of switch function
 _getch();
}//end of main function
