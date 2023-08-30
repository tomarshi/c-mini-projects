#include<stdio.h>
int main() {
    int i;
    int ans1,ans2,ans3;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    int total;

    printf("Welcome to the game\n\n");
    printf(">press 5 to start the game\n");
    printf(">press 0 to quit the game\n");
    scanf("%d",&i);
 
    if(i==5) {
        printf("The game has started\n\n");
    }
    else if(i==0) {
        printf("The game has ended\n\n");
    }
    else {
        printf("invalid\n\n");

        
    }
    if(i==5) {
        printf("1) Which one is the first search engine on internet?\n\n");
        printf("1) Google\n");
         printf("2) Archie\n");
          printf("3) Wais\n");
           printf("4) Altavista\n");
           printf("enter your answer");

          
           scanf("%d",&ans1);

           if(ans1==2) {
            printf("Correct Answer\n");
            point1=5;
            printf("You have scored %d point\n",point1);
           }
           else {
            printf("Wrong answer\n");
            point01=0;
            printf("You have scored %d point\n",point01);
           }

        
        printf("2) Which one is the web browser invented in 1990?\n\n");
        printf("1) Internet Explorer\n");
         printf("2) Mosaic\n");
          printf("3) Mozilla\n");
           printf("4) Nexus\n");
           printf("enter your answer");

          
           scanf("%d",&ans2);

           if(ans2==4) {
            printf("Correct Answer\n");
            point2=5;
            printf("You have scored %d point\n",point2);
           }
           else {
            printf("Wrong answer\n");
            point02=0;
            printf("You have scored %d point\n",point02);
           }
        printf("3) First computer virus is known as?\n\n");
        printf("1) Rabbit\n");
         printf("2) Creeper Virus\n");
          printf("3)Elk Clonner\n");
           printf("4) SCA Virus\n");
           printf("enter your answer");

           
           scanf("%d",&ans3);

           if(ans3==2) {
            printf("Correct Answer\n");
            point3=5;
            printf("You have scored %d point\n",point3);
           }
           else {
            printf("Wrong answer\n");
            point03=0;
            printf("You have scored %d point\n",point03);

            total =point1+point2+point3;
            printf("%d",total);
        
            
           
    }
           return 0;
    }
}