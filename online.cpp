#include<iostream>
using namespace std;
int id = 0;
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
int main()
{
	HEAD *head = new HEAD;	
	head->count = 0;
	head->link = NULL;
	
	char name[20];
	int total=0;
	cout<<"Enter your name";
	cin>>name;
	cout<<"Welcome to our online shopping "<<name<<endl;
	char product[6][30] = {"Mobiles","Computer accessories","Books","Bags","Shoes","Gadgets"};//Product
	for(int i=0;i<6;i++)
	{
		cout<<(i+1)<<"."<<product[i]<<endl;//To display products
	}
	
	cout<<"Enter your choice"<<endl;
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1:cout<<"1.MI A1 - Rs.15000\n2.Vivo Y51L - Rs.11000\n3.Samsung - Rs.14000\n4.Moto - Rs.16000\n5.IPhone 6 - Rs.75000\n6.Gionee - Rs.10000"<<endl;
			char mobiles[6][60] = {"MI A1","Vivo Y51L","Samsung","Moto","IPhone 6","Gionee"}; 
			cout<<"Enter your choice"<<endl;
			cin>>choice;
			int price[] = {15000,11000,14000,14000,16000,75000,10000};
			switch(choice)
			{
				case 1:head = insrear(mobiles[0],price[0],head);
					total = total + price[0];
					//display(head);
					break;
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
		cout<<nameg;
		newn -> idp = (id+1);
		(head -> count)++;
		
		newn -> pr = price;
		newn->prod = nameg;
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
		
