//============================================================================
// Name        : Assignment.cpp
// Author      : Sairaj Dherange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int order_count = 0 ;
int customer_count = 0 ;

typedef struct customer
{
	int id;
	char name[50] , address[50];
}customer_t;

typedef struct date
{
	int day , month , year ;
}date_t;

typedef struct product
{
	int id ;
	char name[50],category[50] ;
	float rate ;
}product_t;

typedef struct order
{
	int id , customer_id , product_id , quantity;
	char status[20];
	date_t order_date ;
}order_t;

void print_admin_orders(order_t *order1)
{
	printf("Order ID	:	%d\n", order1->id);
	printf("Order Date	:	%d/%d/%d\n", order1->order_date.day, order1->order_date.month, order1->order_date.year);
	printf("Customer ID	:	%d\n\n", order1->customer_id);
	printf("Product ID	:	%d\n\n", order1->product_id);
	printf("Quantity	:	%d\n\n", order1->quantity);
}

void get_product_details(product_t *product1)
{
	printf("Enter the product details\n");
		printf("ID : ");
		scanf("%d", &product1->id);
		printf("Name : ");
		scanf("%s", product1->name);
		printf("Category : ");
		scanf("%s", product1->category);
		printf("Rate : ");
		scanf("%f", &product1->rate);
}

void add_product()
{
	product_t product1;
	FILE *fp;
	fp = fopen("products.db" , "ab");
	if(fp == NULL)
	{
		printf("IO ERROR!!!\n");
		return;
	}

	get_product_details(&product1);

	fwrite( &product1 , sizeof(product_t), 1 , fp);
	printf("product added\n");

	fclose(fp);

}

void dispatch_order()
{
	int dispatch_id;
	admin_list_pending_orders();
	printf("Enter the order id to dispatch : ");
	scanf("%d",&dispatch_id);
	long size = sizeof(order_t) ;
	order_t order1;
	FILE *stream = fopen("orders.db", "rb+" );
	if( stream != NULL )
	{
		while( (fread( &order1 , sizeof(order_t) , 1 , stream)) != 0)
			if(order1.id == dispatch_id)
			{
				strcpy(order1.status , "d");
				//printf("hello");
				fseek(stream, -size, SEEK_CUR);
				fwrite(&order1, sizeof(order_t), 1, stream);
				break;
			}
			else
				printf("ID not found");
			fclose(stream);
	}
	else
		printf("IO ERROR!!!\n");
}

void admin_list_pending_orders()
{
		order_t order1;
		FILE *stream = fopen("orders.db", "rb" );
		if( stream != NULL )
		{
			while( fread( &order1 , sizeof(order_t) , 1 , stream) != 0)
					if(strcmp(order1.status , "p") == 0)
						print_admin_orders(&order1);
				fclose(stream);
				}
				else
					printf("IO Error !!!");

}

void admin_list_delivered_orders()
{
	order_t order1;
	FILE *stream = fopen("orders.db", "rb" );
	if( stream != NULL )
	{
		while( fread( &order1 , sizeof(order_t) , 1 , stream) != 0)
			if(strcmp(order1.status ,"d") == 0)
				print_admin_orders(&order1);
		fclose(stream);
	}
	else
		printf("IO Error !!!");
}

void delete_product()
{
	FILE *fs , *fd ;
	product_t product1;
	int pro_id , found = 0;
	printf("Enter the product id to delete : ");
	scanf("%d", &pro_id);
	fs = fopen("products.db" , "rb" );
	if( fs == NULL)
	{
		printf("ERROR\n");
		return;
	}
	fd = fopen("temp.db" , "wb" );
	if( fd == NULL )
	{
		printf("ERROR\n");
		return;
	}
	while((fread(&product1 , sizeof(product_t) , 1 , fs) != 0))
	{
		if(product1.id == pro_id)
			found = 1;
		else
			fwrite(&product1 , sizeof(product_t) , 1 , fd);

	}
	fclose(fd);
	fclose(fs);
	remove("products.db");
	rename("temp.db" , "products.db");

	if(found == 0 )
		printf("ID Not Found\n");
}

void edit_product()
{
	product_t product1 ;
	int edit_product_id ;
	long size = sizeof(product_t);
	printf("Enter the product ID : ");
	scanf("%d",&edit_product_id);
	FILE *stream = fopen("products.db", "rb+");
	if(stream == NULL)
	{
		perror("fopen() failed");
		return;
	}
	while( (fread(&product1, sizeof(product_t), 1, stream)) != 0 )
	{
		if(product1.id == edit_product_id)
		{
			printf("Product Found \n");
			printf("Name - %s\nID - %d\nPrice - %f\n", product1.name , product1.id , product1.rate);

			get_product_details(&product1);

			fseek(stream, -size, SEEK_CUR);
			fwrite(&product1, sizeof(product_t), 1, stream);
		}
	}fclose(stream);
}

void find_by_name()
{
	product_t product1;
	FILE *fp;
	char s_name[50];
	fp = fopen("product.db" , "rb");
	if( fp == NULL )
	{
		printf("ERROR\n");
		return;
	}
	 printf("Enter the Product name to find : ");
	 scanf("%s", s_name);

	 while((fread( &product1 , sizeof(product_t) , 1 , fp)) != 0 )
	 {
		 if(product1.name == s_name )
		 {
			 printf("Product Found \n");
			 printf("Name - %s\nID - %d\nPrice - %f\n", product1.name , product1.id , product1.rate);
		 }
		 else
			 printf("Product Not Found\n");
	 }
}

void list_all_products()
{
	product_t product1;

		FILE *stream = fopen("products.db", "rb");
		if( stream != NULL )
		{
			printf("Id\tName\tPrice\n");
			while(fread(&product1, sizeof( product_t ), 1, stream) != 0)
			{
				printf("%d\t%s\t%f\n", product1.id, product1.name , product1.rate);
			}
		}
		else
			printf("IO ERROR!!!\n");
}

void add_category()
{
	char temp_category[50];
	FILE *stream = fopen("categories.txt","a");
	if(stream != NULL)
	{
		printf("Enter the New Category Name : ");
		scanf("%s",temp_category);

		fputs(strcat(temp_category , "\n") , stream);

		fclose(stream);
	}
	else
		printf("IO Error!!!\n");
}


int admin_menu()
{
	int choice2;

		printf("0 . Exit to Main Menu\n");
		printf("1 . List product Categories\n");
		printf("2 . Add product category\n");
		printf("3 . List all products\n");
		printf("4 . Find product by name\n");
		printf("5 . Edit product\n");
		printf("6 . Delete product\n");
		printf("7 . List pending orders\n");
		printf("8 . List delivered orders\n");
		printf("9 . Dispatch Order\n");
		printf("10. Add product\n");
		printf("Enter your choice	:	\n");
		scanf("%d", &choice2);
		return choice2;
}

void list_product_categories()
{
	FILE *stream = fopen("categories.txt" , "r");
	if( stream != NULL)
	{
		char buffer[ 256 ];
		while( fgets(buffer, 256, stream ) != NULL )
			printf("%s\n", buffer);
		fclose(stream);
	}
	else
		printf("IO ERROR!!!\n");

}

int compare_by_name(const void *p1, const void *p2)
{
	const product_t *s1 = (product_t *) p1;
	const product_t *s2 = (product_t *) p2;
	return strcmp(s1->name,s2->name);
}

int compare_by_price(const void *p1, const void *p2)
{
	const product_t *s1 = (const product_t*)p1;
	const product_t *s2 = (const product_t*)p2;
	if( s1->rate < s2->rate )
		return -1;
	else if( s1->rate > s2->rate )
		return 1;
	else
		return 0;
}

void products_under_category_by_name()
{
	char category[50];
	int index1 = 0 ;
	printf("Enter the category : ");
	scanf("%s", category);
	product_t product1, temp_products[50];
	FILE *fp = fopen("products.db","rb");
	if( fp != NULL )
	{
		while(fread(&product1, sizeof( product_t ), 1, fp) != 0)
			if( strcmp(product1.category , category) == 0)
				{
					strcpy(temp_products[index1].category , product1.category);
					temp_products[index1].id = product1.id;
					strcpy(temp_products[index1].name , product1.name);
					temp_products[index1].rate = product1.rate;
					index1++ ;
				}
		fclose(fp);

		qsort(temp_products, index1 , sizeof(product_t), compare_by_name);

		printf("The products under category \"%s\" sorted according to name are as follows : \n\n", category);
		printf("Id\tName\tPrice\n");
		int i;
		for(i = 0 ; i < index1 ; ++i)
		{
			printf("%d\t%s\t%f\n", temp_products[i].id , temp_products[i].name , temp_products[i].rate);
		}
	}
	else
		printf("IO Error !!!\n");
}

void products_under_category_by_price()
{
	char category[50];
	int index1 = 0 ;
	printf("Enter the category : ");
	scanf("%s", category);
	product_t product1, temp_products[50];
	FILE *fp = fopen("products.db","rb");
	if( fp != NULL )
	{
		while((fread(&product1, sizeof( product_t ), 1, fp)) != 0)
			if( strcmp(product1.category , category) == 0)
				{
					strcpy(temp_products[index1].category , product1.category);
					temp_products[index1].id = product1.id;
					strcpy(temp_products[index1].name , product1.name);
					temp_products[index1].rate = product1.rate;
					index1++ ;
				}
		fclose(fp);
		fp = NULL ;

		qsort(temp_products, index1 , sizeof(product_t), compare_by_price);

		printf("The products under category \"%s\" sorted according to price are as follows : \n\n" , category);
		printf("Id\tName\tPrice\n");
		int i;
		for(i = 0 ; i < index1 ; ++i)
		{
			printf("%d\t%s\t%f\n", temp_products[i].id , temp_products[i].name , temp_products[i].rate);
		}
	}
	else
		printf("IO Error !!!\n");
}

void order_item( int customer_id)
{
		order_t order1 ;

		order1.customer_id = customer_id ;

		printf("Enter the ID of the product : ");
		scanf("%d", &order1.product_id);

		printf("Enter the quantity of the product : ");
		scanf("%d", &order1.quantity);

		order1.id = order_count + 1 ;

		printf("Enter the date of the order ( DD / MM / YYYY) : ");
		scanf("%d/%d/%d", &order1.order_date.day , &order1.order_date.month , &order1.order_date.year);

		strcpy(order1.status , "p");

		FILE *stream = fopen("orders.db" , "ab");
		if( stream != NULL )
		{
			fwrite(&order1 , sizeof(order_t) , 1 , stream );


			order_count++;
			printf("Order placed\n");
			fclose(stream);
		}

}

void customers_list_pending_orders(int customer_id)
{
		order_t order1;
		FILE *stream = fopen("orders.db", "rb" );
		if( stream != NULL )
		{
			while( (fread( &order1 , sizeof(order_t) , 1 , stream)) != 0)
				if(order1.customer_id == customer_id && strcmp(order1.status , "p") == 0)
				{
					printf("Order ID	:	%d\n", order1.id);
					printf("Order Date	:	%d/%d/%d\n\n", order1.order_date.day, order1.order_date.month, order1.order_date.year);
				}

			fclose(stream);
		}
		else
			printf("IO Error !!!");
}

void customers_list_delivered_orders(int customer_id)
{
		order_t order1;
		FILE *stream = fopen("orders.db", "rb" );
		if( stream != NULL )
		{
			while( (fread( &order1 , sizeof(order_t) , 1 , stream)) != 0)
				if(order1.customer_id == customer_id && strcmp(order1.status , "d") == 0)
				{
					printf("Order ID	:	%d\n", order1.id);
					printf("Order Date	:	%d/%d/%d\n\n", order1.order_date.day, order1.order_date.month, order1.order_date.year);
				}

			fclose(stream);
		}
		else
			printf("IO Error !!!");
}

int customer_menu()
{
	int choice ;
	printf("0. Exit\n");
	printf("1. List product categories\n");
	printf("2. Products under category ( sorted by name )\n");
	printf("3. Products under category ( sorted by price )\n");
	printf("4. Order an item\n");
	printf("5. List pending ordrs\n");
	printf("6. List delivered orders\n");
	printf("Enter your choice : ");
	scanf("%d", &choice );
	return choice;
}

void register_new_customer()
{
	customer_t customer1 ;
	{
		printf("Enter the details of the customer below\n");
		printf("Name	:	");
		scanf("%s", customer1.name );

		printf("Address	:	");
		scanf("%s", customer1.name);

		customer1.id = customer_count + 1 ;

		FILE *stream = fopen("customer.db" , "ab");
		if( stream != NULL )
		{
			fwrite(&customer1 , sizeof(customer_t) , 1 , stream );
			fclose( stream );

			printf("Customer Registered\n");
			printf("Customer ID is %d \n Note the customer ID for future access", customer1.id);


			customer_count++ ;
		}
		else
			printf("IO ERROR\n");
	}
}

void customer_login()
{
	int search_id ;
	printf("Enter your Customer ID : ");
	scanf("%d", &search_id);

	customer_t customer1 ;
	{
		FILE *stream = fopen("customer.db" , "rb" );
		if( stream != NULL )
		{
			while(fread(&customer1 , sizeof(customer_t), 1 , stream ) !=0)
			if( customer1.id == search_id )
				{

					printf("ID Found !!!\n");
					int choice;
					while((choice = customer_menu()) != 0 )
					{
						switch(choice)
						{
						case 1 : list_product_categories();
						break;

						case 2 : products_under_category_by_name();
						break;

						case 3 : products_under_category_by_price();
						break;

						case 4 : order_item(search_id);
						break;

						case 5 : customers_list_pending_orders(search_id);
						break;

						case 6 : customers_list_delivered_orders(search_id);
						break;

						default : printf("INVALID OPTION!!!\n");
						}
					}
				}
				else
					printf("ID Not Found.\nPlease Register as new customer\n");
				fclose(stream);
			}
			else
				printf("IO ERROR\n");
		}
}

void admin()
{
	int choice3;
	while((choice3 = admin_menu()) != 0 )
	{
		switch( choice3 )
		{
		case 1 : list_product_categories();
		break;

		case 2 : add_category();
		break;

		case 3 : list_all_products();
		break;

		case 4 : find_by_name();
		break;

		case 5 : edit_product();
		break;

		case 6 : delete_product();
		break;

		case 7 : admin_list_pending_orders();
		break;

		case 8 : admin_list_delivered_orders();
		break;

		case 9 : dispatch_order();
		break;

		case 10 : add_product();
		break;

		default : printf("Invalid Option !!!\n");
		}
	}
}

int main_menu()
{
	int choice;
	printf("0. Exit\n");
	printf("1. Register New Customer\n");
	printf("2. Customer login\n");
	printf("3. Admin\n");
	printf("Enter your choice :	");
	scanf("%d",&choice);
	return choice;
}

int main(void)
{
	int choice;

	while ((choice = main_menu()) != 0 )
	{
		switch( choice )
		{
		case 1 : register_new_customer();
		break;

		case 2 : customer_login();
		break;

		case 3 : admin();
		break;

		default : printf("INVALID OPTION!!!\n");
		}
	}
	return 0;
}
