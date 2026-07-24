#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Book
{
	int BookID;
	char BookName[50];
	char AuthorName[50];
	char category[50];
	int price;
	float rating;
} book;

int size=2;
  
int searchbyid(book* barr,int currindex,int id)
{
    for(int i=0;i<currindex;i++)
    {
        if(barr[i].BookID==id)
        {
            return i;
        }
    }

    return -1;
}

book* addbook(book* barr,int* currindex)
{
	if(*currindex>=size)
	   {
		 printf("array size is full and relocation started");
		 int newsize=size*2;
		 book* temp=realloc(barr,newsize*sizeof(book));
		 if(temp==NULL)
		 {
		 	printf("realloc failed");
		 	return barr;
		 }
		 barr=temp;
		 size=newsize;
	   }
	   
	     do
         {
           printf("\nEnter Book ID: ");
           scanf("%d",&barr[*currindex].BookID);

           if(barr[*currindex].BookID <= 0)
          {
            printf("Book ID must be greater than 0.\n");
            continue;
          }

           if(searchbyid(barr,*currindex,barr[*currindex].BookID) != -1)
             {
               printf("Error: Book ID already exists!\n");
               barr[*currindex].BookID =-1;
              }

            } while(barr[*currindex].BookID <= 0);
            
		    printf("Enter Book name:");
		    fflush(stdin);
		    gets(barr[*currindex].BookName);
		    if(strlen(barr[*currindex].BookName)==0)
            {
             printf("Book name cannot be empty\n");
             return barr;
            }
		 
		 printf("Enter author name:");
		 fflush(stdin);
		 gets(barr[*currindex].AuthorName);
		 if(strlen(barr[*currindex].AuthorName)==0)
         {
           printf("Author name cannot be empty\n");
           return barr;
          }
          
         printf("Enter category:");
		 fflush(stdin);
		 gets(barr[*currindex].category);
		 
		 if(strlen(barr[*currindex].category)==0)
           {
             printf("Category cannot be empty\n");
             return barr;
           }
           
		 do
           {
              printf("Enter Price: ");
              scanf("%d",&barr[*currindex].price);

              if(barr[*currindex].price<=0)
              {
                 printf("Invalid Price! Price must be greater than 0.\n");
               }

            }while(barr[*currindex].price<=0);
		 
		 do
          {
             printf("Enter Rating (0 to 5): ");
             scanf("%f",&barr[*currindex].rating);

             if(barr[*currindex].rating<0 || barr[*currindex].rating>5)
              {
                 printf("Invalid Rating! Enter a value between 0 and 5.\n");
              }

        }while(barr[*currindex].rating<0 || barr[*currindex].rating>5);
		
		 (*currindex)++;
		 
		 printf("Book Added successfully.\n");
		
		 return barr;
       
	}
 
void displaybook(book* barr,int currindex)
{
	if(currindex==0)
	{
		printf("No books Available");
	}
	else{
	      for(int i=0;i<currindex;i++)
	     {
	     	  printf("\n--------------------\n");
		      printf("BookID    :%d\n",barr[i].BookID);
		      printf("BookName  :%s\n",barr[i].BookName);
		      printf("Author    :%s\n",barr[i].AuthorName);
	   	      printf("category  :%s\n",barr[i].category);
		      printf("price     :%d\n",barr[i].price);
		      printf("rating    :%.2f\n",barr[i].rating);
	     }
        }
}

void searchbyname(book* barr, int currindex, char* name)
{
    char searchname[50];
    strcpy(searchname, name);
    strlwr(searchname);
    int found=0;
    for(int i=0;i<currindex;i++)
    {
        char bookname[50];
        strcpy(bookname,barr[i].BookName);
        strlwr(bookname);
        if(strstr(bookname,searchname)!=NULL)
        {
            printf("\n--------------------\n");
            printf("BookID    : %d\n", barr[i].BookID);
            printf("BookName  : %s\n", barr[i].BookName);
            printf("Author    : %s\n", barr[i].AuthorName);
            printf("Category  : %s\n", barr[i].category);
            printf("Price     : %d\n", barr[i].price);
            printf("Rating    : %.2f\n", barr[i].rating);
            found=1;
        }
    }

    if(found == 0)
    {
        printf("No Books Found\n");
    }
}

void removebook(book* barr,int* currindex,int id)
{
    int index=searchbyid(barr,*currindex,id);

    if(index!=-1)
    {
        for(int i=index;i<*currindex-1;i++)
        {
            barr[i]=barr[i+1];
        }

        (*currindex)--;

        printf("Book removed Successfully\n");
    }
    else
    {
        printf("Book Not Found\n");
    }
}

void showauthorbooks(book* barr,int currindex)
{
	 if(currindex==0)
      {
        printf("No books available\n");
       return;
      }   
    char author[50];
    int found=0;
    printf("Enter Author Name : ");
    fflush(stdin);
    gets(author);
    strlwr(author);
       
    for(int i=0;i<currindex;i++)
    {
        char tempauthor[50];
        strcpy(tempauthor,barr[i].AuthorName);
        strlwr(tempauthor);
        if(strcmp(tempauthor,author)==0)
        {
            printf("\n------------------------\n");

            printf("Book ID : %d\n",barr[i].BookID);
            printf("Book Name : %s\n",barr[i].BookName);
            printf("Category : %s\n",barr[i].category);
            printf("Price : %d\n",barr[i].price);
            printf("Rating : %.2f\n",barr[i].rating);

            found=1;
        }
    }

    if(found==0)
{
        printf("No Books Found\n");
    }
}

void showcategorybooks(book* barr,int currindex)
{
	 if(currindex==0)
      {
        printf("No books available\n");
       return;
      }   
    char category[50];
    int found=0;
    printf("Enter category Name : ");
    fflush(stdin);
    gets(category);
    strlwr(category);
    for(int i=0;i<currindex;i++)
    {
        char tempcategory[50];
        strcpy(tempcategory,barr[i].category);
        strlwr(tempcategory);
        if(strcmp(tempcategory,category)==0)
        {
            printf("\n------------------------\n");
            printf("Book ID : %d\n",barr[i].BookID);
            printf("Book Name : %s\n",barr[i].BookName);
            printf("Category : %s\n",barr[i].category);
            printf("Price : %d\n",barr[i].price);
            printf("Rating : %.2f\n",barr[i].rating);
            found=1;
        }
    }
    if(found==0)
{
        printf("No Books Found\n");
    }
}
void updatebook(book* barr,int currindex,int id)
{
	int index=searchbyid(barr,currindex,id);
    if(index!=-1)
    {
         int choice;
         printf("\nWhat do you want to update?\n");
         printf("1. Book Name\n");
         printf("2. Author Name\n");
         printf("3. Category\n");
         printf("4. Price\n");
         printf("5. Rating\n");
         printf("Enter Choice: ");
         scanf("%d",&choice);
         switch(choice)
         {
            case 1:
              do
              {
                printf("Enter New Book Name: ");
                fflush(stdin);
                gets(barr[index].BookName);

              if(strlen(barr[index].BookName)==0)
             {
               printf("Book name cannot be empty\n");
             }

             }while(strlen(barr[index].BookName)==0);
              break;
            case 2:
              do
			  {
                printf("Enter New Author Name: ");
                fflush(stdin);
                gets(barr[index].AuthorName);
              if(strlen(barr[index].AuthorName)==0)
             {
               printf("Author name cannot be empty\n");
             }

              }while(strlen(barr[index].AuthorName)==0);
              break;
            case 3:
              do
			  {
              printf("Enter New Category: ");
              fflush(stdin);
              gets(barr[index].category);
              if(strlen(barr[index].category)==0)
              {
               printf("category cannot be empty\n");
              }
              }while(strlen(barr[index].category)==0);
              break;
            case 4:
              do
             {
               printf("Enter New Price: ");
               scanf("%d",&barr[index].price);
              if(barr[index].price<=0)
                printf("Invalid Price\n");
             }while(barr[index].price<=0);
              break;
            case 5:
             do
             {
               printf("Enter New Rating (0 to 5): ");
               scanf("%f",&barr[index].rating);
               if(barr[index].rating<0 || barr[index].rating>5)
             {
               printf("Invalid Rating\n");
             }

            }while(barr[index].rating<0 || barr[index].rating>5);
            break;
            default:
            printf("Invalid Choice\n");
            return;
        }
       printf("Book Updated Successfully\n");
     }
     else
     {
        printf("Book Not Found\n");
     }
 }
 
void sortbyprice(book* barr,int currindex)
{
    for(int i=0;i<currindex-1;i++)
    {
        for(int j=0;j<currindex-i-1;j++)
        {
            if(barr[j].price>barr[j+1].price)
            {
                book temp=barr[j];
                barr[j]=barr[j+1];
                barr[j+1]=temp;
            }
        }
    }

    printf("Books sorted by price successfully.\n");
}

void sortbyrating(book* barr,int currindex)
{
    for(int i=0;i<currindex-1;i++)
    {
        for(int j=0;j<currindex-i-1;j++)
        {
            if(barr[j].rating<barr[j+1].rating)
            {
                book temp=barr[j];
                barr[j]=barr[j+1];
                barr[j+1]=temp;
            }
        }
    }

    printf("Books sorted by rating successfully.\n");
}

void top3rating(book* barr,int currindex)
{
	if(currindex==0)
   {
      printf("No Books Available\n");
      return;
   }
    book temparr[currindex];
    for(int i=0;i<currindex;i++)
    {
        temparr[i]=barr[i];
    }
    for(int i=0;i<currindex-1;i++)
    {
        for(int j=0;j<currindex-i-1;j++)
        {
            if(temparr[j].rating<temparr[j+1].rating)
            {
                book temp=temparr[j];
                temparr[j]=temparr[j+1];
                temparr[j+1]=temp;
            }
        }
    }
    printf("\nTop 3 Books By Rating\n");
    int limit=currindex;
    if(limit>3)
        limit=3;
    for(int i=0;i<limit;i++)
    {
        printf("\nBook ID : %d\n",temparr[i].BookID);
        printf("Book Name : %s\n",temparr[i].BookName);
        printf("Rating : %.2f\n",temparr[i].rating);
    }
}

void top3price(book* barr,int currindex)
{
    if(currindex==0)
    {
        printf("No Books Available\n");
        return;
    }
    book temparr[currindex];
    for(int i=0;i<currindex;i++)
    {
        temparr[i]=barr[i];
    }
    for(int i=0;i<currindex-1;i++)
    {
        for(int j=0;j<currindex-i-1;j++)
        {
            if(temparr[j].price<temparr[j+1].price)
            {
                book temp=temparr[j];
                temparr[j]=temparr[j+1];
                temparr[j+1]=temp;
            }
        }
    }

    printf("\nTop 3 Books By Price\n");
    int limit=currindex;
    if(limit>3)
        limit=3;
    for(int i=0;i<limit;i++)
    {
        printf("\nBook ID : %d\n",temparr[i].BookID);
        printf("Book Name : %s\n",temparr[i].BookName);
        printf("Price : %d\n",temparr[i].price);
    }
}
void main(){
	int currindex=0;
	book* barr=(book*)malloc(size*sizeof(book));
	if(barr==NULL)
    {
        printf("Memory allocation failed");
        return ;
    }
    int choice2;
	do
	{	
	  printf("Enter 1 to add book\n");
	  printf("Enter 2 to remove book\n");
	  printf("Enter 3 to search book\n");
	  printf("Enter 4 to show Author's book\n");
	  printf("Enter 5 to show category\n");
	  printf("Enter 6 to update data\n");
	  printf("Enter 7 to sort books\n");
	  printf("Enter 8 to display all books\n");
	  printf("Enter 9 to show top 3 books\n");
	  printf("Enter 0 to exit\n");
	  int choice;
	  printf("Enter choice:");
	  scanf("%d",&choice);
	  switch (choice)
	       {
	  	    case 1:
	  		         {
                        int n;
                        printf("How many books do you want to add? ");
                        scanf("%d",&n);
                        if(n<=0)
                      {
                          printf("Please enter a valid number of books.\n");
                          break;
                        }
                            for(int i=0;i<n;i++)
                           {
                                printf("\nEnter Details of Book %d\n",i+1);
                                barr=addbook(barr,&currindex);
                            }
                      break;        
	                 }
	        case 2:
                {
                   int id;
                   printf("Enter Book ID : ");
                   scanf("%d",&id);
                   removebook(barr,&currindex,id);
                   break;
                }  
			case 3:
               {
                   int searchchoice;
                   printf("1. Search by Book ID\n");
                   printf("2. Search by Book Name\n");
                   printf("Enter choice: ");
                   scanf("%d",&searchchoice);
                   switch(searchchoice)
                  {
                     case 1:    
                     {
					        int id;
                            printf("Enter Book ID : ");
                            scanf("%d",&id);
                            int index=searchbyid(barr,currindex,id);
                            if(index!=-1)
						    {
						   
                              printf("BookID    :%d\n",barr[index].BookID);
		                      printf("BookName  :%s\n",barr[index].BookName);
		                      printf("Author    :%s\n",barr[index].AuthorName);
	   	                      printf("category  :%s\n",barr[index].category);
		                      printf("price     :%d\n",barr[index].price);
		                      printf("rating    :%.2f\n",barr[index].rating);
		                    }
                            else
                            printf("Book Not Found\n");
                      }
                        break;

                     case 2:
                         {
                            char name[50];
                            printf("Enter Book Name : ");
                            fflush(stdin);
                            gets(name);
                            searchbyname(barr,currindex,name);
                            break;
                          }
                     default:
                     printf("Invalid choice.\n");
                    }

                 break;
                }
			case 4:
               showauthorbooks(barr,currindex);
               break;
			case 5:
               showcategorybooks(barr,currindex);
               break; 
			case 6:
           {
               int id;
               printf("Enter Book ID : ");
               scanf("%d",&id);
               updatebook(barr,currindex,id);
               break;
            } 
			case 7:
            {
                int sortChoice;
                printf("1. Sort by Price\n");
                printf("2. Sort by Rating\n");
                printf("Enter choice: ");
                scanf("%d",&sortChoice);
                switch(sortChoice)
                {
                     case 1:
                     sortbyprice(barr,currindex);
                     displaybook(barr,currindex);
                     break;

                     case 2:
                     sortbyrating(barr,currindex);
                     displaybook(barr,currindex);
                     break;

                     default:
                     printf("Invalid choice\n");
                }

               break;
             }    		   
	        case 8:
	        	{
	        	     printf("Book details are\n");
	        	     displaybook(barr,currindex);
	        	     break;
	            }
	        case 9:
                 {
                     int ch;
                     printf("1. Top 3 Books by Rating\n");
                     printf("2. Top 3 Books by Price\n");
                     printf("Enter Choice: ");
                     scanf("%d",&ch);
                     switch(ch)
                     {
                        case 1:
                        top3rating(barr,currindex);
                        break;

                        case 2:
                        top3price(barr,currindex);
                         break;

                         default:
                         printf("Invalid Choice\n");
                     }

                     break;
                   }   
               case 0:
                  printf("Exiting program...\n");
                  choice2=0;
                  break; 
	        default:
			      printf("Invalid choice!\n");	  
	        }
	   if(choice!=0)
    {
      printf("Do you want to continue 1/0:");
      scanf("%d",&choice2);
    }
   }
	while(choice2==1);
	free(barr);
}
     
