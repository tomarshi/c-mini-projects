#include<stdio.h>
int main() {
    char n[50];
    int a;
    int p;
    int d;
    

    char na[50];
    int ag;
    int ph;
    int da;
    
    printf("WELCOME TO PHONEBOOK\n\n");
    printf("MENU\n");
    printf("Press 1 to add the contact\n\n");
    int x;
    printf("Enter\n");
    scanf("%d",&x);

    if(x==1) {
        int y;
        printf("Enter the number of contact to be added");
        scanf("%d",&y);
        if(y==1) {

            printf("------------\n");
            printf("Name:");
            scanf("%s",&n);
        

   printf("Age:");
            scanf("%d",&ag);
                        printf("phone number:");
            scanf("%d",&ph);
                        printf("Date of birth:");
            scanf("%d",&da);
            
                        printf("--------------\n");
        }
           else if(y==2) {
                            printf("------------\n");
            printf("Name:");
            scanf("%s",&n);
        

   printf("Age:");
            scanf("%d",&ag);
                        printf("phone number:");
            scanf("%d",&ph);
                        printf("Date of birth:");
            scanf("%d",&da);
                        
                        printf("--------------\n");

                        printf("--------------\n");
                                    printf("------------\n");
            printf("Name:");
            scanf("%s",&n);
        

   printf("Age:");
            printf("%d",&ag);
                        printf("phone number:");
            scanf("%d",&ph);
                        printf("Date of birth:");
            scanf("%d",&da);
                        
                        printf("--------------\n");

            
        

      

        int z;
        printf("enter\n");
        printf("%d",&z);
        if(z==2) {
            int num;
            printf("enter the number of contact to be viewed");
            printf("%d",&num);
            if(num==1) {
                            printf("------------\n");
            printf("Name:");
            printf("%s",&n);
        

   printf("Age:");
            printf("%d",&ag);
                        printf("phone number:");
            printf("%d",&ph);
                        printf("Date of birth:");
            printf("%d",&da);
                        
                        printf("--------------\n");

            
        }
        else if (num==2) {
            printf("------------\n");
            printf("Name:");
            printf("%s",&n);
        

   printf("Age:");
            printf("%d",&ag);
                        printf("phone number:");
            printf("%d",&ph);
                        printf("Date of birth:");
            printf("%d",&da);
                    
                        printf("--------------\n");

                        printf("--------------\n");
                                    printf("------------\n");
            printf("Name:");
            printf("%s",&n);
        

   printf("Age:");
            printf("%d",&ag);
                        printf("phone number:");
            printf("%d",&ph);
                        printf("Date of birth:");
            printf("%d",&da);
                        
                        printf("--------------\n");

        }

        
    }
    else if(z==3) {
        printf("are u sure u want to close the phonebook\n");
        printf("press 3 for yes\n");
        printf("press 4 for no\n");
        int ans;
        printf("enter\n");
        scanf("%d",&ans);
        if(ans==1) {
          printf("the phonebook is closed\n");

        }
        else if(ans==2) {
            printf("the phonebook has not closed\n");
        }
    }
            }
        else {
            printf("invalid\n");
        }
    return 0;
}
}


        
        
        
        
    


            

            

            

            

            


    
