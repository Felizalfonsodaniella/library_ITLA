/*
 * Menu.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Menu.h"
#include <iostream>

using namespace std;

void Menu::show()
{
	//TODO: Implement this method.
	cout << "Implement the menu" << endl;
}

Menu::Menu()
{

}

void display_spb(char n[])
{
	cout<<"\nBOOK DETAILS\n";
	int flag=0;
	fp.open("book.dat",ios::in);
	while(fp.read((char*)&bk,sizeof(book)))
	{
		if(strcmpi(bk.retbno(),n)==0)
		{
			bk.show_book();
		 	flag=1;
		}
	}
	
	fp.close();
	if(flag==0)
		cout<<"\n\nBook does not exist";
	getch();
}

void display_sps(char n[])
{
	cout<<"\nSTUDENT DETAILS\n";
	int flag=0;
	fp.open("student.dat",ios::in);
	while(fp.read((char*)&st,sizeof(student)))
	{
		if((strcmpi(st.retadmno(),n)==0))
		{
			st.show_student();
			flag=1;
		}
	}
	
	fp.close();
	if(flag==0)
    		cout<<"\n\nStudent does not exist";
 	getch();
}
