//C LANGUAGE IMP NOTES FOR REVISION :-

# include<stdio.h>
int main(){
    int age;
    printf("enterage");
    scanf("%d", &age);
    printf("%d", age);
    return 0;
}

//THIS CODE WAS PASTED HERE TO KNOW ABOUT INPUT OUTPUT AND ALSO SCANF FUNCTION.

# include<stdio.h>
int main(){
   int a, b;
   printf("enter a");
   scanf("%d", &a);

   printf("enter b");
   scanf("%d", &b);
  
   int sum = a + b;
   printf("sum is %d", sum);
    return 0;
}

//THIS WAS PASTED HERE TO KNOW THAT HOW ACTUALLY THE CONCEPT OF INPUT AND OUTPUT WORK HOW YOU DEFINE VARIABLES AND HOW YOU STORE SOMETHING I  THEM AND HOW YOU BRING THE OUTPUT FROM THEM.

 #include <stdio.h>
int main(){
 int a;
 printf("what is the side of a square");
 scanf("%d",&a);

 printf("area of the given square is %d", a*a);
 return 0;
}

//THIS WAS THE FIRST QUESTION SOLVED BY ME.

# include<stdio.h>
# include<math.h>

int main(){
  
    int a = 4;
    int b = 5;
 int power = pow(a,b);
 printf("%d", power);

    return 0; 
    
}


//THIS CODE WAS PASTED HERE TO KNOW POWER OPERATOR. ONE IMP THING TO APPLY POW(A,B) U HAVE TO MENTION A HEADER FILE MATH.H ON TOP OF THE CODE.

# include<stdio.h>
# include<math.h>

int main(){
  
  printf("%f",2*2.1);
  return 0;
}

//THIS CODE WAS STORE HERE TO KNOW THAT INT * FLOAT GIVES FLOAT. OUTPUT IS IN %F AND IT IS 4.2.

# include<stdio.h>

int main(){
  int a = (int) 1.99999;
  printf("%d", a);
  return 0; 
}
 
//THIS CODE WAS PASTED HERE TO KNOW ABPUT EXPLICIT CONVERSIONS IN C.

# include<stdio.h>

int main(){
printf("%d", 5==5);
  return 0; 
} 
 
//THIS CODE WAS PASTED HERE TO KNOW ABOUT RELATIONAL OPERATOR IN C AND ALSO TRUE OR FALSE IN C.
//IN C TRUE IS 1 AND FALSE IS 0.

# include<stdio.h>

int main(){
  
  printf("%d", ! ((5>2) && (3==2)));
 
  return 0; 
} 
 
//THIS WAS PASTED HERE TO KNOW ABOUT THE OUTPUTS OF LOGICAL OPERTORS.

# include<stdio.h>

int main(){
  int x;
  printf("enter a number");
  scanf("%d", &x);
 printf("%d", x % 2 == 0);
  return 0; 
} 

	//THIS WAS A QUESTION WHERE WE HAVE TO WRITE A PROGRAM TO CHECK WHETHER A NUMBER IS DIVISIBLE BY 2 OR NOT.


# include<stdio.h>

int main(){
 int itsmonday = 1;
int itsraining = 0;
  
 printf("%d", itsmonday || itsraining);

  return 0; 
} 

//THIS WAS PASTED BECAUSE IT IS THE SOLUTION TO PRACTICE QUESTION 8 B PART.

# include<stdio.h>

int main(){
 int x;
 printf("enter the number");
 scanf("%d", &x);
 printf("%d", x>9 && x<100);
 

  return 0; 
} 

/*THIS IS THE SOLUTION TO QUESTION NUMBER 8 C PART IN THE BOOK.

CONDITIONAL STATEMENTS :-*/

//IF ELSE:=

# include<stdio.h>

int main(){
 int age;
 printf("enter the age");
 scanf("%d", &age);

  if(age > 18){
    printf("adult\n");
    printf("they can vote");
  }
  else {
    printf("not adult\n");
    printf("they can't vote");
  }
 

  return 0; 
} 

//THIS WAS THE FIRST CODE TO UNDERSTAND IF ELSE CONDITIONAL STATEMENT.

# include<stdio.h>

int main(){
  int marks;
  printf("enter the marks");
  scanf("%d", &marks);

  if(marks > 90){
    printf("A+ good job\n");
  }
else if (marks > 50){
  printf("A nice try/n");
}

else{
  printf("F better luck next time\n");
}

printf("happy holidays\n");

  return 0; 
} 

//IF ELSE STATEMENT CODES WHICH INCLUDE THE CONCEPT OF ELSE IF STATEMENTS.

# include<stdio.h>

int main(){
  int marks;
  printf("enter the marks");
  scanf("%d", &marks);

   marks >= 80 ? printf("awesome \n") : printf("good job \n");

  return 0; 
} 

//THIS CODE WAS PASTED HERE TO KNOW ABOUT TERNARY OPERATOR.

# include<stdio.h>

int main(){
  int day; // 1-mon; 2-tue; 3-wed; .....;
  printf("enter day : ");
  scanf("%d", &day);

  switch(day){
    case 1: printf("monday\n");
    break;

    case 2: printf("tuesday\n");
    break;

    case 3: printf("wednesday\n");
    break;

    case 4: printf("thursday\n");
    break;

    case 5: printf("friday\n");
    break;

    case 6: printf("saturday\n");
    break;

    case 7: printf("sunday\n");
    break;

    default : printf("not a valid day\n");

  }

  return 0; 
} 

//THIS CODE WAD PASTED HERE TO KNOW ABOUT SWITCH OPERATOR AND ITS SYNTAX.

# include<stdio.h>

int main(){
  for(int i=1; i<=5; i++){

    if(i == 3){
      break;
    }
    printf("%d\n", i);
  }
  printf("the end");
  return 0;
  } 

//THIS CODE WAS PASTED HERE TO KNOW THAT WHAT BREAK DOES TO A LOOP.


# include<stdio.h>

int main(){
  int number;
  printf("enter the number");
  scanf("%d", &number);

  if(number>=0) {
    printf("positive\n");
    if(number % 2 == 0){
      printf("number is even\n");
    } else{
      printf("number is odd");
    }

  } else{
    printf("negative");
  }
  return 0; 
} 

//THIS WAS PASTED HERE TO KNOW ABOUT NESTED IFS, HOW WE CAN ADD MORE IF IN ONE IF MAKING CONDITION MORE BRIEF.

# include<stdio.h>

int main(){
  int marks;
  printf("enter the marks");
  scanf("%d", &marks);

  if (marks >= 30){
    printf("student has passed the exam\n");
  } else{
    printf("student will not be promoted to the next class\n");
  }
} 

//SOLUTION TO THE QUESTION 9 FROM LECTURE.

# include<stdio.h>

int main(){
  int marks;
  printf("enter the marks");
  scanf("%d", &marks);

  if(marks < 30){
    printf("grade is c");
  }
  else if(marks >= 30 && marks < 70){
    printf("grade is b");
  }
  else if(marks >= 70 && marks < 90){
    printf("grade is a");
  }
  else if(marks >= 90 && marks <= 100){
    printf("grade is a+");
  }
  else {
    printf("invalid marks");
  }
  return 0;

  
} 

//SOLUTION TO QUESTION NUMBER 10 FROM THE C TUTORIAL LECTURE.

# include<stdio.h>

int main(){
  char ch;
  printf("enter the character :");
  scanf("%c", &ch);

  if( ch >= 'A' && ch <= 'Z'){
    printf("upper case");
  }

  else if (ch >= 'a' && ch <= 'z'){
    printf("lower case");
  }

  else{
    printf("not an english letter");
  }
}

//SOLUTION TO QUESTION NUMBER 12.

# include<stdio.h>

int main(){
  for(int i=1; i<=5; i=i+1){
    printf("hello world\n");
  }

  return 0;
  
  }

//THIS CODE WAS PASTED HERE TO UNDERSTAND THE SYNTAX OF FOR LOOP.

# include<stdio.h>

int main(){
  for(int i=0; i<=10; i=i+1){
    printf("%d\n", i);
  }

  return 0;
  
  }

//OUT PUT  0 TO 10.

# include<stdio.h>

int main(){
  for(float i=1.0; i<=5.0; i++){
    printf("%f\n", i);
  }

  for(char ch='a'; ch<='z'; ch++){
    printf("%c\n", ch);
  }

  return 0;
  
  }

//MORE CODES TO UNDERSTAND FOR LOOPS.

# include<stdio.h>

int main(){
  int n;
  printf("enter the number");
  scanf("%d", &n);

  for(int i=0; i<=n; i++){
    printf("%d\n", i);
  }
  return 0;
  
  } 

//THIS IS THE SOLUTION TO QUESTION NUMBER 14.

# include<stdio.h>

int main(){
  int n;
  printf("enter the number");
  scanf("%d", &n);

  int i=0;
  while(i<=n){
    printf("%d\n", i);
    i++;
  }
  return 0;
  } 

//SOLUTION TO QUESTION NUMBER 14 USING WHILE LOOP.

# include<stdio.h>

int main(){
   int n;
  printf("enter the number :");
  scanf("%d", &n);

  int sum = 0;
   for(int i=1; i<=n; i++){
     sum = sum + i;
   }

   printf("sum is %d", sum);
  
  return 0;
  } 

//THIS IS THE SOLUTION TO QUESTION NUMBER 15 1ST PART OBSERVE IT CAREFULLY COZ IT IS THE CODE WHICH WILL TEACH YOU SOMETHING REGARDING FOR LOOPS.

# include<stdio.h>

int main(){
   int n;
  printf("enter the number :");
  scanf("%d", &n);

  int sum = 0;
   for(int i=1; i<=n; i++){
     sum = sum + i;
   }

   printf("sum is %d\n", sum);

   for(int i=n; i>=1; i--){
    printf("%d\n", i);
   }
  
  return 0;
  } 

//SOLUTION TO 15 B PART.

# include<stdio.h>

int main(){
   int n;
   printf("enter the number : ");
   scanf("%d", &n);

   for(int i=1; i<=10; i++){

    printf("%d\n", n*i);

   }
  
  return 0;
  } 

//SOLUTION TO QUESTION NUMBER NUMBER 16 DONE BY ME.


int main(){
  int n;
 do{
  printf("enter the number : ");
  scanf("%d", &n);
  printf("%d\n", n);

  if(n % 2 != 0){
    break;
  }

 } while(1);

 printf("thank you");

  return 0;
  } 

//THIS IS THE SOLUTION TO QUESTION NUMBER SEVENTEEN THIS IS VERY INTERESTING QUESTION COZ WE USED DO WHILE AND IN ADDITION TO THAT WE MADE A LOOP WHICH PROCEEDS THROUGH USER INPUT.

# include<stdio.h>

int main(){
 for(int i=1; i<=5; i++){
  if(i == 3){
    continue;
  }
  printf("%d\n", i);
 }
 return 0;

  } 

//THIS CODE WAS PASTED HERE TO UNDERSTAND CONTINUE STATEMENT.

# include<stdio.h>

int main(){
 for(int i=1; i<=10; i++){
  if(i == 6){
    continue;
  }
  printf("%d\n", i);
 }
 return 0;

  } 

//SOLUTION TO QUESTION NUMBER 19.

# include<stdio.h>

int main(){
 for(int i=7; i<=50; i++){
  if(i % 2 == 0){
    continue;
  }
  printf("%d\n", i);
 }
 return 0;

  } 

//SOLUTION TO QUESTION NUMBER 20

# include<stdio.h>

int main(){
  int n;
  printf("ENTER THE NUMBER : ");
  scanf("%d", &n);
  int fact = 1;
  for(int i=1; i<=n; i++){
     fact = fact*i;
  }
   printf("%d", fact);

 return 0;


  } 

//THIS IS THE SOLUTION TO QUESTION NUMBER 21.

# include<stdio.h>

int main(){
  int n;
  printf("ENTER THE NUMBER : ");
  scanf("%d", &n);
  
for(int i=10; i>=1; i--){
  printf("%d\n", n*i);
}

 return 0;

  } 

//SOLUTION TO QUESTION NUMBER 22.

# include<stdio.h>
void printHello();

int main(){

  printHello();
  return 0;

}

void printHello(){
  printf("hello!!");
}

//THIS WAS PASTED HERE TO UNDERSTAND THE SYNTAX OF FUNCTION.
//FUNCTIONS WILL BASICALLY HELP US TO AVOID WRITING CLUSTER OF CODES REPEATEDLY TO PERFORM SOMETHING. IT WILL BECOME VERY EASY AS YOU WILL JUST CHANGE THE FUNCTION DEFINITION AND WILL BRING A GOOD CHANGE IN YOUR OUTPUT.

# include<stdio.h>
void printHello();
void printgoodbye();

int main(){

  printHello();
  printgoodbye();
  return 0;
 
}

void printHello(){
  printf("hello!!\n");
 
}

void printgoodbye(){
  printf("goodbye\n");
}

//SOLUTION TO QUESTION NUMBER 27.

# include<stdio.h>
void namaste();
void bonjour();

int main(){
  printf("enter f for french and i for indian");
  char ch;
  scanf("%d", &ch);
  if(ch == 'i'){
    namaste();
  } else{
    bonjour();
  }

  return 0;
 
}

void namaste(){
  printf("namaste\n");
}

void bonjour(){
  printf("bonjour");
}

//SOLUTION QUESTION NUMBER 28.

#include <stdio.h>

int sum2(int a , int b);

int main(){
  int a,b;
  printf("enter the first number : ");
  scanf("%d", &a);
  printf("enter the second number : ");
  scanf("%d", &b);

  int s = sum2(a, b);
  printf("sum is : %d ", s);


  return 0;
 
}
int sum2(int x, int y){
  return x + y;
}

//THIS WAS PASTED HERE TO UNDERSTAND A TYPE OF A FUNCTION.

#include <stdio.h>

void calculateprice(float value);

int main(){
  float value;
  printf("enter the value");
  scanf("%f", &value);

  calculateprice(value);
  
}
 
void calculateprice(float value){
  value = value + 0.18*value ;
  printf("%f", value);
}

//MORE BRIEF OF WRITING A FUNCTION.

# include<stdio.h>

float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float a, float b);

int main(){
float side;
printf("enter the side of the square");
scanf("%f", &side);
float A = squarearea(side);
printf("area of the square is : %f\n", A);

float rad;
printf("enter the radius of the circle");
scanf("%f", &rad);
float B = circlearea(rad);
printf("area of the circle is : %f\n", B);

float a,b;
printf("enter the length of the rectangle ");
scanf("%f", &a);
printf("enter the breadth of the rectangle");
scanf("%f", &b);
float C = rectanglearea(a,b);
printf("area of the rectangle is : %f", C);

return 0;

}

float squarearea(float side){
  return side*side;
}

float circlearea(float rad){
  return 3.14*rad*rad;
}

float rectanglearea(float a, float b){
  return a*b;
}

//THIS IS THE SOLUTION TO QUESTION NUMBER 29.

# include<stdio.h>

void printHW(int count);

 
int main(){
  printHW(5);


return 0;
}

void printHW(int count){
  if (count == 0){
    return;
  }
  printf("hello world\n");
  printHW(count-1);
}

//THIS CODE WAS PASTED HERE TO UNDERSTAND RECURSION.
     
# include<stdio.h>
int sum(int n);
 
int main(){
 printf("sum is %d", sum(5));
 

return 0;
}

int sum(int n){
  if(n == 1){
    return 1;
  }
  int sumnm1 = sum(n-1);
  int sumn = sumnm1 + n;
  return sumn;
}

//SOLUTION TO QUESTION NUMBER 30. 

# include<stdio.h> 
int fact(int n);
 
int main(){
 printf("factorial  is %d", fact(5));


return 0;
}

int fact(int n){
  if(n == 1){
    return 1;
  }
  int factnm1 = fact(n-1);
  int factn = factnm1 * n;
  return factn;
}

//SOLUTION TO QUESTION NUMBER 31.

# include<stdio.h>
float converttemperature(float celsius);
 
int main(){
  float celsius;
  printf("enter the temp in celsius");
  scanf("%f", &celsius);
 printf("temperature in fahreinheit is %f", converttemperature(celsius));


return 0;
}

float converttemperature(float celsius){
  float far = celsius* 9/5 + 32;
  return far;
}

//SOLUTION TO QUESTION NUMBER 32.

# include<stdio.h>

int calculatepercentage(int science, int math, int sanskrit);
 
int main(){

  int science = 100;
  int math = 100;
  int sanskrit = 100;
  printf("percentage is %d", calculatepercenatge(science, math, sanskrit));
 


return 0;
}

int calculatepercenatge(int science, int math, int sanskrit){

    return((science + math+ sanskrit)/300 * 100);

}

//SOLUTION TO QUESTION NUMBER 33.	

# include<stdio.h>

int fib(int n);
 
int main(){

printf("fibonacci of the number is %d", fib(6)); 


return 0;
}

int fib(int n){
  if(n == 0 || n == 1){
    if(n==1){
      return 1;
    }
    if(n==0){
      return 0;
    }
   
  }

  int fibNm1 = fib(n-1);
  int fibNm2 = fib(n-2);

  int fibN= fibNm1 + fibNm2;
  return fibN;
}


//SOLUTION TO QUESTION NUMBER 34.

#include <stdio.h>
int main(){
      int age = 22;
      int *ptr = &age;
      int _age = *ptr;
      printf("%d", _age);

      return 0;
}

//BASE OF POINTER.

#include <stdio.h>
int main(){
      int age = 22;
      int *ptr = &age;
      int _age = *ptr;
      printf("%d\n", _age);
      printf("%p\n", &age);
      printf("%u\n", ptr);
      printf("%p\n", &ptr);
      

      return 0;
}  

/*ADDRESS PRINTING. OUTPUT IS :-
22
0061FF18
6422296
0061FF14*/


#include <stdio.h>
int main(){
      int age = 22;
      int *ptr = &age;
      int _age = *ptr;
     printf("%d\n", age);
     printf("%d\n", *ptr);
     printf("%d", *(&age));
      

      return 0;
}  

//VALUE PRINTING IN POINTERS.

#include <stdio.h>
int main(){
      float price = 100.00;
      float *ptr = &price;
      float **pptr = &ptr;
      printf("%u\n", ptr);
      printf("%u\n",pptr );
      

      return 0;
}   

//POINTER TO POINTER ENTERS THE CHAT.

#include <stdio.h>

void square(int n);
void _square(int* n);

int main(){
     int number = 4;
     square(number);
     printf("number is %d\n", number);
      
      
    _square(&number);
    printf("number is %d\n", number);
      return 0;
}   

void square (int n){
  n = n * n;
  printf("%d\n", n );
}

void _square(int* n){
    *n = (*n) * (*n);
    printf("square is %d\n", *n);

}

/*THIS CODE EXPLAINS US ABOUT DIFFERENCE BETWEEN CALL BY VALUE  AND CALL BY REFERENCE.
OUTPUT IS 16 4 16 16. *N IS BASICALLY A POINTER.*/

#include <stdio.h>


void _swap(int *a, int *b);

int main(){
    int a =3, b = 5;
   

    _swap(&a, &b);
     printf("a = %d and b = %d", a,b);

    return 0;
}   



void _swap(int  *a, int *b){
  int t = *a;
  *a = *b;
  *b = t;
   
}

//SOLUTION TO QUESTION 38.

#include <stdio.h>

void printaddress(int *n);

int main(){
   int n = 4;
   printf("address is %p\n", &n);
   printaddress(&n);

    return 0;
}   

void printaddress(int *n){

  printf(" address is %p\n", n);
}

//SOLUTION TO QUESTION NUMBER 39. OUTPUT WILL BE SAME ADDRESSES.

#include <stdio.h>

void dowork(int a, int b,int *sum,int *prod,int *avg);


int main(){

  int a = 3;
  int b = 5;
  int sum, prod, avg;
  dowork(a,b, &sum, &prod, &avg);

  printf("sum = %d, prod = %d, avg = %d", sum, prod, avg);

 
    return 0;
}   

void dowork(int a , int b,int *sum,int *prod,int *avg){

  *sum = a+b;
  *prod = a*b;
  *avg = (a+b)/2;

}

//SOLUTION TO QUESTION NUMBER 40.

#include <stdio.h>

int main(){

  int marks[3];
  printf("enter phy :");
  scanf("%d", &marks[0]);

    printf("enter math :");
  scanf("%d", &marks[1]);

    printf("enter eng :");
  scanf("%d", &marks[2]);

  printf("physics score is : %d\n", marks[0]);
    printf("maths score is : %d\n", marks[1]);
      printf("english score is : %d\n", marks[2]);
 
    return 0;
}   

//BASIC SYNTAX OF ARRAYS.

#include <stdio.h>

int main(){

float price[3];
printf("enter the three prices");
scanf("%f", &price[0]);
scanf("%f", &price[1]);
scanf("%f", &price[2]);

 printf("total price 1 : %f\n", price[0]+(0.18*price[0]));
 printf("total price 2 : %f\n", price[1]+(0.18*price[1]));
 printf("total price 3 : %f", price[2]+(0.18*price[2]));
    return 0;
}   

//SOLUTION TO QUESTION NUMBER 41.

#include <stdio.h>

int main(){
    float price = 20.00;
    float *ptr = &price;
    printf("intially ptr is %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr is now %u", ptr);

    return 0;
}   

/*OUTPUT : intially ptr is 6422296
ptr = 6422300
ptr is now 6422296  	THIS WAS PASTED HERE TO UNDERSTAND THE CONCEPT OF POINTER AIRTHMETIC.*/

#include <stdio.h>

int main(){
int age = 22;
int _age  = 23;
int *ptr = &age;
int *_ptr = &_age;
printf("difference is %u\n", ptr-_ptr);

printf("comparision is %u", ptr == _ptr);

    return 0;
}   

/*OUTPUT : difference is 1
comparision is 0

COMPARISION WILL BE 0 IE FALSE COZ BOTH PTR AND _PTR STORE DIFFERENT ADDRESSESS, AND DIFFERENCE IN THEIR ADDRESS WILL BE 4 THEN WHY ITS SHOWING 1 THIS IS BECAUSE IT SHOWS THAT USME 1 INTEGER KA DIFFERENCE. */

#include <stdio.h>

int main(){
    int aadhar[5];

    int *ptr = &aadhar[0];
    for(int i = 0; i<5; i++){
        printf("%d index :", i);
        scanf("%d", ptr+i);
    }

    for(int i=0; i<5; i++){
        printf("value at %d index is %d", i, *ptr+i);
    }
    return 0;
}   

//THIS CODE WAS PASTED HERE TO UNDERSTAND RELATION BETWEEN ARRAY AND POINTER.

#include <stdio.h>

    void printnumbers(int arr[], int n);

int main(){

        int arr[] = {1,2,3,4,5,6,};
        printnumbers(arr, 6);
        return 0;
}    

    void printnumbers(int arr[], int n){

        for(int i=0; i<n; i++){
            printf("%d \t", arr[i]);

        }
        printf("\n");
    }

//THIS CODE WAS PASTED HERE TO UNDERSTAND HOW ARRAYS ARE PASSED IN FUNCTION ARGUMENTS.

#include <stdio.h>



int main(){
    int marks[2][3];
     marks[0][0] = 90;
     marks[0][1] = 89;
     marks[0][2] = 78;

     marks[1][0] = 98;
     marks[1][1] = 81;
     marks[1][2] = 72;

     printf("%d", marks[0][2]);
        
        return 0;
}   

//THIS WAS PASTED HERE TO UNDERSTAND THE SYNTAX IF 2 D ARRAY.

#include <stdio.h>

        int countodd(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5,6};
    
     printf("the total odd numbers are %d", countodd(arr,6));
        return 0;
}   

    int countodd(int arr[], int n){

        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i] % 2 != 0){
                count++;
            }
            
        }          
        
        return count;
    }

//SOLUTION TO QUESTION NUMBER 42.

#include <stdio.h>

    void reverse(int arr[], int n);
    void printArr(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5};

        reverse(arr,5);
        printArr(arr, 5);
        return 0;
}   


    void reverse(int arr[], int n){
        for(int i=0; i<n/2; i++){
            int firstvalue = arr[i];
            int secondvalue = arr[n-i-1];
            arr[i] = secondvalue;
            arr[n-i-1] = firstvalue;

        }  
    }
    
      void printArr(int arr[], int n){
            for(int i=0; i<n; i++){
                printf("%d\t", arr[i]);
            }
            printf("\n");

        }

//SOLUTION TO QUESTION NUMBER 44.

# include <stdio.h>

    void storetable(int arr[][10], int n, int m, int number);

int main(){

    int tables[2][10];
    storetable(tables,0,10,2);
    storetable(tables,1,10,3);

    for(int i =0; i<10;i++){
        printf("%d\t", tables[0][i]);
    }

    printf("\n");

        for(int i =0; i<10;i++){
        printf("%d\t", tables[1][i]);
    }
    
}

     void storetable(int arr[][10], int n, int m, int number){
        for(int i=0; i<m; i++){
            arr[n][i] = number * (i+1);
        }
     }

//SOLUTION TO QUESTION NUMBER 46.

# include <stdio.h>

void printstring(char arr[]);
    
int main(){
    char firstname[] = "ujwal";
    char lastname[] = "dwivedi";

    printstring(firstname);
    printstring(lastname);


   
    return 0; 
}

    void printstring(char arr[]){
        for(int i=0;arr[i] != '\0' ; i++){
            printf("%c", arr[i]);
        }
        printf("\t");
    }

//SOLUTION TO QUESTION NUMBER 47.

# include <stdio.h>
    
int main(){

    char name[50];
    scanf("%s", name);
    printf("your name is %s", name);

   
    return 0; 
}

//STRING FORMAT SPECIFIER CONCEPT.

# include <stdio.h>
    
int main(){

    char fullname[50];
    scanf("%s", fullname);
    printf("your full name is %s ", fullname);
   
    return 0; 
}

/*OUTPUT :- your full name is ujwal
WHY NOT FULL NAME?. THIS IS BECAUSE SCAN F CANNOT INPUT MULTI WORD STRINGS.*/

# include <stdio.h>
    
    int countlength(char arr[]);

int main(){
    char name[100];
    fgets(name,100,stdin);
    countlength(name);
    printf("length is %d", countlength(name));


    return 0; 
} 

    int countlength(char arr[]){
        int count = 0;
        for(int i=0; arr[i] != '\0';i++){
           count++;
        }
        return count-1;

    }

//SOLUTION TO QUESTION NUMBER 49.

# include <stdio.h>
# include <string.h>
    


int main(){
    char name[] = "ujwal";
    int length = strlen(name);
    printf("length is %d", length);
  
    return 0; 
} 

//THIS WAS PASTED HERE TO UNDERSTAND STANDARD LIBRARY FUNCTIONS OF STRINGS.

# include <stdio.h>
# include <string.h>
    


int main(){
    char name[] = "ujwal";
    char sur[] = "ujji";
    puts(name);
    strcpy(name, sur);
    puts(name);
    return 0; 
} 

//MORE LIBRARY FUNCTIONS.

# include <stdio.h>
# include <string.h>
    


int main(){
    char firststr[100] = "hello ";
    char secondstr[] = "world";
    strcat(firststr, secondstr);
    puts(firststr);
    return 0; 
} 

//ANOTHER. AGAR FIRSTSTR KA SIZE MENTION NAHI KARTE TO WO SIZE WO HELLO WALA HI LE LETA TO HELLO WORLD PRINT NAHI HO PATA ISLIYE SIZE MENTION KARNA ZAROORI THA.

# include <stdio.h>
# include <string.h>
    


int main(){
    char firststr[] = "Apple";
    char secondstr[] = "Banana";

    printf("%d", strcmp(firststr, secondstr));
    return 0; 
} 

//ANOTHER ONE.

# include <stdio.h>
# include <string.h>

int main(){
    char str[100];
    char ch;
    int i=0;
    while(ch != '\n'){
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    return 0; 
} 

//SOLUTION TO QUESTION NUMBER 50.

# include <stdio.h>
# include <string.h>

    void salting(char arr[]);

int main(){
   char password[100];
   scanf("%s", password);
   salting(password);

} 

    void salting(char arr[]){
        char salt[] = "123";
        char newpassword[200];
        strcpy(newpassword, arr);
        strcat(newpassword, salt);
        puts(newpassword);
    }

//SOLUTION TO QUESTION NUMBER 51.

# include <stdio.h>
# include <string.h>

    void slice(char arr[], int n, int m);

int main(){
    char str[] = "helloworld";
    slice(str,3,6);
} 
    void slice(char arr[], int n, int m){
       char newstr[100];
       int j = 0;
       for(int i=n; i<=m; i++, j++){
        newstr[j] = arr[i];
       }
       newstr[j] = '\0';
       puts(newstr);
    }

//SOLUTION TO QUESTION NUMBER 52.

# include <stdio.h>
# include <string.h>

    int countvowels(char str[]);

int main(){
    char str[100] = "helloworld";
    printf("%d", countvowels(str));
 
} 

int countvowels(char str[]){
        int count = 0;
        for(int i=0; str[i] != '\0'; i++){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u'){
                count++;
            }
        }
        return count;
}

//SOLIUTION TO QUESTION NUMBER 53.

# include <stdio.h>
# include <string.h>

    void find(char str[], char ch);

int main(){
   char str[] = "ujwal";
   char ch;
   printf("enter the character which you want to check");
   scanf("%c", &ch);
   find(str,ch);
   return 0;
} 

    void find(char str[], char ch){
        for(int i=0; str[i] != '\0'; i++){
            if(str[i] == ch){
                printf("yes");if(str[i] != ch){
                    continue;
                }
            }
            }
            }

//MY  SOLUTION TO QUESTION NUMBER 54.

# include <stdio.h>
# include <string.h>

    void find(char str[], char ch);

int main(){
   char str[] = "ujwal";
   char ch;
   printf("enter the character which you want to check");
   scanf("%c", &ch);
   find(str,ch);
   return 0;
} 

    void find(char str[], char ch){
        for(int i=0; str[i] != '\0'; i++){
            if(str[i] == ch){
                printf("yes character is present");
                return;  
            }
            }
            printf("character is not present");
            }

//MAM KA SOLUTION TO QUESTION NUMBER 54.

# include <stdio.h>
# include <string.h>

    struct student{
        int roll;
        float cgpa;
        char name[100];
    };


    int main (){
         struct student s1;
         s1. roll = 1664;
         s1. cgpa = 9.2;
         strcpy(s1.name,"ujwal");

         printf("%d\n", s1.roll);
         printf("%f\n",s1.cgpa);
         printf("%s", s1.name);

        return 0;
    }

//THIS WAS PASTED HERE TO UNDERSTAND THE BASIC SYNTAX OF STRING.

# include <stdio.h>
#include <string.h>

    struct student{
        int roll;
        float cgpa;
        char name[100];
    };

    int main() {
        struct student s1;
        s1.cgpa = 9.2;
        s1.roll = 1665;
        strcpy(s1.name, "ujwal");

        printf("%d\n", s1.roll);
        printf("%f\n", s1.cgpa);
        printf("%s\n", s1.name);

        struct student s2;
        s2.cgpa = 7.5;
        s2.roll = 1455;
        strcpy(s2.name, "tanmay");

        printf("%d\n",s2.roll );
        printf("%f\n", s2.cgpa);
        printf("%s\n", s2.name);

        struct student s3;
        s3.cgpa = 10;
        s3.roll = 1500;
        strcpy(s3.name, "dany");

        printf("%d\n", s3.roll);
        printf("%f\n", s3.cgpa);
        printf("%s\n", s3.name);

        return 0;
    }

//SOLUTION TO QUESTION NUMBER 55.

#include <stdio.h>
#include <string.h>

    struct student{
        int roll;
        float cgpa;
        char name[100];
    };

        int main(){
            struct student ece[100];
            ece[0].roll = 1664;
            ece[0].cgpa = 9.2;
            strcpy(ece[0].name, "ujwal");

            printf("%s", ece[0].name);


        }

//THIS WAS PASTED  HERE TO UNDERSTAND ARRAY OF STRUCTURES.

#include <stdio.h>
#include <string.h>

    struct student{
        int roll;
        float cgpa;
        char name[100];
    };

        int main(){
            struct student s1 = {1664,9.3,"ujwal"};

            printf("%s",s1.name);

            struct student *ptr = &s1;
             printf("%s",(*ptr).name);



        }


//POINTERS TO STRUCTURES.

#include <stdio.h>
#include <string.h>

    struct student{
        int roll;
        float cgpa;
        char name[100];
    };

        void printinfo(struct student s1);

        int main(){
            struct student s1 = {1664,9.3,"ujwal"};
            struct student s2 = {1992,8.8, "naksh"};

           printinfo(s2);
           return 0;



        }

            void printinfo(struct student s1){
                printf("student info :\n");
                printf("%d roll no\n", s1.roll);
                printf("%s name\n", s1.name );
                printf("%f cgpa", s1.cgpa);

            }

//FUNCTION AND STRUCTURE.	

#include <stdio.h>

int sumDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int positiveNum = (number < 0) ? -number : number;
    printf("Sum of digits of %d is: %d\n", number, sumDigits(positiveNum));
    return 0;
}

//sumit ke practice set ke question 1 ka ans
 
#include <stdio.h>S

int main(){
    char s[] = "ujwal";
    char temp;
    int len = 0;
    while(s[len] != '\0'){
        len++;
    }
    printf("length is %d\n", len);
    for(int i=0; i< (len-1) / 2; i++){
        temp = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = temp;
    }
    printf("new string is %s", s);
}

//code to reverse an string

  #include <stdio.h>

  int main(){
    int n;
    printf("enter the valur of the number ");
    scanf("%d", &n);
     for(int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            printf("*");
        }
        printf("\n");
     }
     return 0;
  }

  // first question on pattern printing.

  #include <stdio.h>

   int main(){
      int n;
      printf("enter the number ");
      scanf("%d", &n);

         for(int i = 0; i< n;i++){
            for(int j = 0; j< n; j++){
               if(i+j >= n-1){
                  printf("*");
               }
               else{
                  printf(" ");
               }
            }
            printf("\n");
         }
         
   }

   //second question on pattern printing.

   # include <stdio.h>

   int checkinc(int arr[], int n);

   int main(){
      int num[] = {1,3,5,7,9};
      printf(" it is %d", checkinc(num,5));
      return 0;
   }

   int checkinc(int arr[], int n){
      for(int i=1; i<=n;i++){
         if(arr[i] <= arr[i-1]){
         return 0;            

         }
      }
      return 1;
   }

   //solution to check if array is strictly inc or not.

   #include <stdio.h>
int main(){
    char str[100] = "RaNdI";

    for(int i=0; str[i] != '\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i] - 32;
        }
    }
    printf("lauda is %s\n", str);
    return 0;

}

//this is pasted here to know how to make a lower case string to an upper one

#include <stdio.h>
#include <string.h>

    int main(){
        char land[100] = "radar";
        int n = strlen(land);
        for(int i =0; land[i]<n/2; i++){
            if(land[i] != land[n-i-1]){
                printf("no  it is not the thing you are looking for so shut your ass and get lost");
            }
        }
        printf("yes it is palindrome");
        
    }

//palindrome number question 

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "uwajl";//uwajl
    char str2[] = "ujwal";
    
    int count[300] = {0}; 
    

    for (int i = 0; str1[i] != '\0'; i++) {
        count[(int)str1[i]]++; 
        count[(int)str2[i]]--;
    }

    for (int i = 0; i < 300; i++) {
        if (count[i] != 0) {
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n");
    return 0;
}

//accha question

