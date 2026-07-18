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
	   
	     printf("\nEnter book ID:");
		 scanf("%d",&barr[*currindex].BookID);
		 
		 printf("Enter Book name:");
		 fflush(stdin);
		 gets(barr[*currindex].BookName);
		 
		 printf("Enter author name:");
		 fflush(stdin);
		 gets(barr[*currindex].AuthorName);
		 
		 printf("Enter category:");
		 fflush(stdin);
		 gets(barr[*currindex].category);
		 
		 printf("Enter price:");
		 scanf("%d",&barr[*currindex].price);
		 
		 printf("Enter rating:");
		 scanf("%f",&barr[*currindex].rating);
		
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

int searchByID(book *barr,int currindex,int id)
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

int searchByName(book *barr,int currindex,char name[])
{
    for(int i=0;i<currindex;i++)
    {
        if(strcmp(barr[i].BookName,name)==0)
        {
            return i;
        }
    }

    return -1;
}

void removeBook(book *barr,int *currindex,int id)
{
    int index=searchByID(barr,*currindex,id);

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

void showAuthorBooks(book *barr,int currindex)
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
    
       
    for(int i=0;i<currindex;i++)
    {
        if(strcmp(barr[i].AuthorName,author)==0)
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

void showcategoryBooks(book *barr,int currindex)
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
    
       
    for(int i=0;i<currindex;i++)
    {
        if(strcmp(barr[i].category,category)==0)
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
void updateBook(book *barr,int currindex,int id)
{
    int index=searchByID(barr,currindex,id);

    if(index!=-1)
    {
        printf("Enter New Price : ");
        scanf("%d",&barr[index].price);

        printf("Enter New Rating : ");
        scanf("%f",&barr[index].rating);

        printf("Book Updated Successfully\n");
    }
    else
    {
        printf("Book Not Found\n");
    }
}
void sortByPrice(book *barr, int currindex)
{
    for(int i=0;i<currindex-1;i++)
    {
        for(int j=0;j<currindex-i-1;j++)
        {
            if(barr[j].price > barr[j+1].price)
            {
                book temp=barr[j];
                barr[j]=barr[j+1];
                barr[j+1]=temp;
            }
        }
    }

    printf("Books sorted by price successfully.\n");
}

void sortByRating(book *barr, int currindex)
{
    for(int i=0;i<currindex-1;i++)
    {
        for(int j=0;j<currindex-i-1;j++)
        {
            if(barr[j].rating < barr[j+1].rating)
            {
                book temp=barr[j];
                barr[j]=barr[j+1];
                barr[j+1]=temp;
            }
        }
    }

    printf("Books sorted by rating successfully.\n");
}

void top3Rating(book *barr,int currindex)
{
    book tempArr[currindex];

    for(int i=0;i<currindex;i++)
    {
        tempArr[i]=barr[i];
    }

    for(int i=0;i<currindex-1;i++)
    {
        for(int j=0;j<currindex-i-1;j++)
        {
            if(tempArr[j].rating < tempArr[j+1].rating)
            {
                book temp=tempArr[j];
                tempArr[j]=tempArr[j+1];
                tempArr[j+1]=temp;
            }
        }
    }

    printf("\nTop 3 Books By Rating\n");

    int limit=currindex;

    if(limit>3)
        limit=3;

    for(int i=0;i<limit;i++)
    {
        printf("\nBook ID : %d\n",tempArr[i].BookID);
        printf("Book Name : %s\n",tempArr[i].BookName);
        printf("Rating : %.2f\n",tempArr[i].rating);
    }
}

int main(){
	int currindex=0;
	book* barr=(book*)malloc(size*sizeof(book));
	if(barr==NULL)
    {
        printf("Memory allocation failed");
        return 1;
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
	  printf("Enter 7 to sorted books\n");
	  printf("Enter 8 to display all books\n");
	  printf("Enter 9 to show top 3 rated books\n");
	  int choice;
	  printf("Enter choice:");
	  scanf("%d",&choice);
	  switch (choice)
	       {
	  	    case 1:
	  	    	 {
	  		         printf("Enter book details\n");
	  		         barr=addbook(barr,&currindex);
	                 break;
	             }
	        case 2:
                {
                   int id;
                   printf("Enter Book ID : ");
                   scanf("%d",&id);
                   removeBook(barr,&currindex,id);
                   break;
                }  
			case 3:
               {
                   int searchChoice;
                   printf("1. Search by Book ID\n");
                   printf("2. Search by Book Name\n");
                   printf("Enter choice: ");
                   scanf("%d", &searchChoice);

                  switch(searchChoice)
                  {
                     case 1:    
                     {
					        int id;
                            printf("Enter Book ID : ");
                            scanf("%d",&id);
                           int index=searchByID(barr,currindex,id);

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

                          int index2=searchByName(barr,currindex,name);

                          if(index2!=-1)
                          {
                              printf("BookID    :%d\n",barr[index2].BookID);
		                      printf("BookName  :%s\n",barr[index2].BookName);
		                      printf("Author    :%s\n",barr[index2].AuthorName);
	   	                      printf("category  :%s\n",barr[index2].category);
		                      printf("price     :%d\n",barr[index2].price);
		                      printf("rating    :%.2f\n",barr[index2].rating);
		                    }
                          else
                          printf("Book Not Found\n");

                        break;
                       }
                     default:
                     printf("Invalid choice.\n");
                    }

                 break;
                }
				
			case 4:

               showAuthorBooks(barr,currindex);

               break;
			 
			case 5:

               showcategoryBooks(barr,currindex);

               break; 
			   
			case 6:
           {
               int id;
               printf("Enter Book ID : ");
               scanf("%d",&id);

               updateBook(barr,currindex,id);

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
                     sortByPrice(barr,currindex);
                     displaybook(barr,currindex);
                     break;

                     case 2:
                     sortByRating(barr,currindex);
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

                 top3Rating(barr,currindex);

                 break;   
                
	        default:
			      printf("Invalid choice!\n");	  
	        }
	   printf("Do you want to continue 1/0:");
	  scanf("%d",&choice2);
   }
	while(choice2==1);
	free(barr);
	return 0;
}
     