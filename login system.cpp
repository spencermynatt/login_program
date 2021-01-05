#include <iostream>
#include <fstream>
using namespace std;

bool check_login(){
	
	
	ifstream read("logininformation.txt", ios::in);
	string username;
	string password;
	string line; //checking the first line
	string line2; // checking the second line of password
	
	cout << " enter username";
	cin >> username;
	cout << " enter password";
	cin >> password;
	
	getline(read, line); //reading file
	getline(read,line2); 
	
	if(line == username && line2 == password)
	{
	
	
	cout<< " login successful";
	
	return true;
	
	}
else{
	cout << "password inccorect";
	return false;
}
	
	
	
	
	
	
	
	
}
void create_account()
{
	
	
	ofstream write("logininformation.txt", ios::out);
	string username;
	string password;
	cout << " create username";
	cin >> username;
	write << username << "\n";
	cout << "create password";
	cin >> password;
	write << password;
	
}

int main()
{
	int choice;
	string username;
	string password;
	cout << " press 1 to create account" << endl;
	cout << "press 2 to login";
	cin >> choice;
	switch(choice)
	{
		case 1:
		create_account();
		break;
			case 2:
				check_login();
				break;
			
	}
	
	
}


