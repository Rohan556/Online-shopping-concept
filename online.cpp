#include<iostream>
#include<cstring>

using namespace std;

int id = 0;
int total = 0;
int choice;

char mobiles[6][20] = {"MI A1","Vivo Y51L","Samsung","Moto","IPhone 6","Gionee"}; 
int price[] = {15000,11000,14000,16000,75000,10000};
char comp[6][20] = {"CPU","Mouse","San Disk","Monitor","Key Board","Printer"}; 
int cprice[] = {15000,1100,1400,16000,750,10000};
char books[6][20] = {"Android","C Programming","C++ Programming","Java","Kotlin","Operating System"};
int bprice[] = {540,850,964,452,963,512};
char bag[6][20] = {"Feather","Wildcraft","Sky bags","American Tourister","V-Three","Dell"};
int baprice[] = {1526,2564,2435,1564,3214,2345};
char shoes[6][20] = {"Woody's","Lancer","Adidas","Nike","Bata","Liberty"};
int shprice[] = {4561,500,2356,6532,1256,5689};
char other[6][20] = {"Key Lock","Mobile Cover","Cup Sets","Battery","Bottle","Chair"};
int oprice[] = {500,250,632,1523,653,1000};


typedef struct node
{
	int idp;
	int pr;
	char prod[20];
	node *link;
}NODE;


typedef struct  
{
	int count;
	node *link;
}HEAD;
HEAD *insrear(char nameg[],int price,HEAD *head);
HEAD *dele(int idr,HEAD *head);
void display(HEAD *head);
int main()
{
	HEAD *head = new HEAD;	
	head->count = 0;
	head->link = NULL;
	
	char name[20];
	cout<<"Enter your name"<<endl;
	cin>>name;
	cout<<"Welcome to our online shopping "<<name<<endl;
	char product[6][30] = {"Mobiles","Computer accessories","Books","Bags","Shoes","Others"};//Product
   mai:for(int i=0;i<6;i++)
	{
		cout<<(i+1)<<"."<<product[i]<<endl;//To display products
	}
	
	cout<<"Enter your choice"<<endl;
  again:cin>>choice;
	switch(choice)
	{
		case 1:cout<<"1.MI A1 - Rs.15000\n2.Vivo Y51L - Rs.11000\n3.Samsung - Rs.14000\n4.Moto - Rs.16000\n5.IPhone 6 - Rs.75000\n6.Gionee - Rs.10000"<<endl;
			
			cout<<"Enter your choice"<<endl;
			cin>>choice;
			
			switch(choice)
			{
				case 1:	head = insrear(mobiles[0],price[0],head);
					total = total + price[0];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					int ch;
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 2:head = insrear(mobiles[1],price[1],head);
					total = total + price[1];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 3:head = insrear(mobiles[2],price[2],head);
					total = total + price[2];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 4:head = insrear(mobiles[3],price[3],head);
					total = total + price[3];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 5:head = insrear(mobiles[4],price[4],head);
					total = total + price[4];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
				
				case 6:head = insrear(mobiles[5],price[5],head);
					total = total + price[5];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				default:cout<<"\nInvalid entry\nGive a valid entry\n";
					goto again;
					break;
			}
			break;
	
		
			case 2:cout<<"1.CPU - Rs.15000\n2.Mouse - Rs.1100\n3.San Disk 16GB- Rs.1400\n4.Monitor - Rs.16000\n5.Key Board - Rs.750\n6.Printer - Rs.10000"<<endl;
		
		cout<<"Enter your choice"<<endl;
	 cagain:cin>>choice;
		
		switch(choice)
		{
				case 1:head = insrear(comp[0],cprice[0],head);
				total = total + cprice[0];
				display(head);
				cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					int ch;
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 2:head = insrear(comp[1],cprice[1],head);
					total = total + cprice[1];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 3:head = insrear(comp[2],cprice[2],head);
					total = total + cprice[2];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 4:head = insrear(comp[3],cprice[3],head);
					total = total + cprice[3];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 5:head = insrear(comp[4],cprice[4],head);
					total = total + cprice[4];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
				
				case 6:head = insrear(comp[5],cprice[5],head);
					total = total + cprice[5];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				default:cout<<"\nInvalid entry\nGive a valid entry\n";
					goto cagain;
					break;
		}
		break;
		
		case 3:cout<<"1.Android - Rs.540\n2.C Programming - Rs.850\n3.C++ Programming - Rs.964\n4.Java - Rs.452\n5.Kotlin - Rs.963\n6.Operating System - Rs.512\n";
		
		cout<<"Enter your choice"<<endl;
	 bagain:cin>>choice;
		
		switch(choice)
		{
				case 1:head = insrear(books[0],bprice[0],head);
				total = total + bprice[0];
				display(head);
				cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					int ch;
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 2:head = insrear(books[1],bprice[1],head);
					total = total + bprice[1];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 3:head = insrear(books[2],bprice[2],head);
					total = total + bprice[2];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 4:head = insrear(books[3],bprice[3],head);
					total = total + bprice[3];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 5:head = insrear(books[4],bprice[4],head);
					total = total + bprice[4];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
				
				case 6:head = insrear(books[5],bprice[5],head);
					total = total + bprice[5];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				default:cout<<"\nInvalid entry\nGive a valid entry\n";
					goto bagain;
					break;
		}
		break;
		
		case 4:cout<<"1.Feather - Rs.1526\n2.Wildcraft - Rs.2564\n3.Sky bags - Rs.2435\n4.American Tourister - Rs.1564\n5.V-Three - Rs.3216\n6.Dell - Rs.2345\n";
			
			cout<<"Enter your choice"<<endl;
		bgagain:cin>>choice;
			
			switch(choice)
			{
				case 1:	head = insrear(bag[0],baprice[0],head);
					total = total + baprice[0];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					int ch;
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 2:head = insrear(bag[1],baprice[1],head);
					total = total + baprice[1];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 3:head = insrear(bag[2],baprice[2],head);
					total = total + baprice[2];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 4:head = insrear(bag[3],baprice[3],head);
					total = total + baprice[3];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 5:head = insrear(bag[4],baprice[4],head);
					total = total + baprice[4];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
				
				case 6:head = insrear(bag[5],baprice[5],head);
					total = total + baprice[5];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				default:cout<<"\nInvalid entry\nGive a valid entry\n";
					goto bgagain;
					break;
			}
			break;
			
			case 5:cout<<"1.Woody's - Rs.4561\n2.Lancer - Rs.500\n3.Adidas - Rs.2356\n4.Nike - Rs.6532\n5.Bata - Rs.1256\n6.Liberty - Rs.5689\n";
		
		cout<<"Enter your choice"<<endl;
	 shagain:cin>>choice;
		
		switch(choice)
		{
				case 1:head = insrear(shoes[0],shprice[0],head);
				total = total + shprice[0];
				display(head);
				cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					int ch;
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 2:head = insrear(shoes[1],shprice[1],head);
					total = total + shprice[1];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 3:head = insrear(shoes[2],shprice[2],head);
					total = total + shprice[2];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 4:head = insrear(shoes[3],shprice[3],head);
					total = total + shprice[3];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 5:head = insrear(shoes[4],shprice[4],head);
					total = total + shprice[4];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
				
				case 6:head = insrear(shoes[5],shprice[5],head);
					total = total + shprice[5];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				default:cout<<"\nInvalid entry\nGive a valid entry\n";
					goto shagain;
					break;
		}
		break;
		
		case 6:cout<<"1.Key Lock - Rs.500\n2.Mobile Cover - Rs.250\n3.Cup Sets - Rs.632\n4.Battery - Rs.1523\n5.Bottle - Rs.653\n6.Chair - Rs.1000\n";
		cout<<"Enter your choice"<<endl;
	 oagain:cin>>choice;
		
		switch(choice)
		{
				case 1:head = insrear(other[0],oprice[0],head);
				total = total + oprice[0];
				display(head);
				cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					int ch;
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 2:head = insrear(other[1],oprice[1],head);
					total = total + oprice[1];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 3:head = insrear(other[2],oprice[2],head);
					total = total + oprice[2];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 4:head = insrear(other[3],oprice[3],head);
					total = total + oprice[3];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				case 5:head = insrear(other[4],oprice[4],head);
					total = total + oprice[4];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
				
				case 6:head = insrear(other[5],oprice[5],head);
					total = total + oprice[5];
					display(head);
					cout<<"To go to main portal press 1 \nTo delete or confirm booking press any other number\n";
					
					cin>>ch;
					
					if(ch==1)
					goto mai;
					break;
					
				default:cout<<"\nInvalid entry\nGive a valid entry\n";
					goto oagain;
					break;
		}
		break;
	}
	
	cout<<"\nTo delete press 1\n\nTo confirm press 2\n";
	
	cin>>choice;
	
	if(choice == 1)
	{
		int idr;
		
	dela:	cout<<"Enter the ID number of the product to be deleted\n";
		cin>>idr;
		
		head = dele(idr,head);
		
		display(head);
		
		cout<<"\nPress 1 to delete any other\n\nPress any other number to confirm booking";
		cin>>idr;
		
		if(idr > id && idr <= 0)
		{
			cout<<"Enter valid ID number\n";
			goto dela;
		}
		
		if(idr == 1)
		goto dela;
		
		else
		{
			cout<<"\nPress 1 for cash on delivery\n\nPress any other number for card payment\n\n";
			cin>>choice;
			
			if(choice == 1)
			{
				cout<<"\nThank you for ordering\n\nYour order has been placed\n";
			}
			
			else
			{
				long int cardno;
			ag:	cout<<"Enter the card number";
				cin>>cardno;
				
				if(cardno > 9999999999999999)
				{
					cout<<"Invalid entry";
					goto ag;
				}
				
			cv:	cout<<"Enter the cvv number\n";
				cin>>cardno;
				
				if(cardno > 999)
				{
					cout<<"Invalid entry";
					goto cv;
				}
				
				cout<<"Your order has been placed\n";
				cout<<"Tank you and visit again\n";
		}
			
		}	
	}
}

NODE *getnode()
{
	NODE *temp = new NODE;
		
	if(temp == NULL)
	{
		cout<<"No memory\n";
		return NULL;
	}
	return temp;
}
	
HEAD *insrear(char nameg[],int price,HEAD *head)
{
	NODE *newn = getnode();
	newn -> idp = (id+1);
	id++;
	(head -> count)++;
		
	newn -> pr = price;
	strcpy(newn->prod,nameg);
	newn -> link = NULL;		
	if(head -> link == NULL)
	{
		head -> link = newn;
		return head;
	}
		
	NODE *temp = head->link;
		
	while(temp->link != NULL)
	{
		temp = temp -> link;
	}
		
	temp -> link = newn;
	return head;
} 
	
void display(HEAD *head)
{
	NODE *temp = head->link;
	
	cout<<"\n\nNo of products ordered is "<<head->count<<endl<<endl;
	cout<<"ID\tProduct name\t\tPrice\n";
	while(temp!=NULL)
	{
		cout<<temp->idp<<"\t"<<temp->prod<<"\t\t\t"<<temp->pr<<endl;
		temp = temp -> link;
	}
	cout<<endl<<"Total Cost = "<<total<<endl<<endl;
}
			
HEAD *dele(int idr,HEAD *head)
{
	NODE *present,*previous;
	present = head -> link;
	
	while((present->idp != idr) && (present->link!=NULL))
	{
		previous = present;
		present = present->link;
	}
	
	previous->link = present->link;
	cout<<"\nProduct deleted is\n";
	cout<<present->prod<<endl<<endl;
	
	total = total - (present->pr);
	delete present;
	(head->count)--;
	
	while(previous->link!=NULL)
	{
		previous = previous->link;
		(previous->idp)--;
	}
	
	return head;
}
	
	
	
