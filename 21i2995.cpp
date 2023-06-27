#include<iostream>
#include<fstream>
#include<string>
using namespace std;
string Manager_City;
class User
{
	//Using sring data types for stroing user's info
	string name;
	char* cnic[13];
	string email;
	char* password[9];
	string number;
	string address;
	char gender; //F for female and M for male
	static int no_users; //The total number of Users

public:
	//Constructors
	User() //Default Constructor
	{

		//This Constructor will set the deafult values to the object created
		name = "\0";
		for (int i = 0; i < 13; i++)
		{
			cnic[i] = NULL;
		}
		email = "\0";
		for (int i = 0; i < 9; i++)
		{
			password[i] = NULL;
		}
		number = "\0";
		address = "\0";
		gender = '\0';
	}
	//This is the Parametrized Constructor
	User(string n, char* cn, string mail, char* pass, string no, string add, char gen)
	{

		name = n;
		*cnic = cn;
		email = mail;
		*password = pass;
		number = no;
		address = add;
		gender = gen;

	}
	//Functions
	void setManager(string n, char* cn, string mail, char* pass, string no, string add, char gen)
	{
		char text2[200];
		fstream file;
		//Reading if  the Username already exist
		file.open("Manager.txt", ios::out | ios::in | ios::app);
		while (!file.eof())
		{
			file >> text2;
			cout << text2 << endl;
			if (text2 == n)
			{
				cout << "The Username already exist" << endl;
				cout << "Kindly, Login" << endl;
				file.close();
				return;
			}
		}
		fstream file2;
		file2.open("Manager.txt", ios::out | ios::in | ios::app);
		file2 << endl << n << "  " << pass <<"  "<< add << "  " << cn << "  " << mail << "  " << no << "  " << gen;

		file2.close();
		cout << "=========================================" << endl;
		cout << "The Account is successfully created" << endl;
		cout << "Kindly Login to the Account" << endl;
		cout << "=========================================" << endl;
	}
	void setCustomer(string n, char* cn, string mail, char* pass, string no, string add, char gen)
	{
		char text2[200];
		fstream file;
		//Reading if  the Username already exist
		file.open("Customer.txt", ios::out | ios::in | ios::app);
		
		while(!file.eof())
		{
			file >> text2;
			cout << text2 << endl;
			if (text2 == n)
			{
				cout << "The Username already exist" << endl;
				cout << "Kindly, Login" << endl;
				file.close();
				return;
			}
			
		}
		fstream file2;
		file2.open("Customer.txt", ios::out | ios::in | ios::app);
		file2 << endl << n << "  " << pass << "  "<<add << "  " << cn << "  " << mail << "  " << no << "  " << gen;

		file2.close();
		cout << "=========================================" << endl;
		cout << "Your Account is successfully created" << endl;
		cout << "Kindly Login to your Account" << endl;
		cout << "=========================================" << endl;
	}
	//Getters and Setter
	//--------------Set Name----------------
	void setname(string na)
	{
		name = na;
	}
	string getname()
	{
		return name;
	}
	//--------------Set CNIC-----------------
	void setcnic(char* cn)
	{
		*cnic = cn;
	}
	char* getcnic()
	{
		return *cnic;
	}
	//--------------Set Password-----------------
	void setpassword(char* pass)
	{
		*password = pass;
	}
	char* gerpassword()
	{
		return *password;
	}
	//--------------Set Email-----------------
	void setemail(string mail)
	{
		email = mail;
	}
	string getmail()
	{
		return email;
	}
	//--------------Set Number-----------------
	void setnumber(string no)
	{
		number = no;
	}
	string getnumber()
	{
		return number;
	}
	//--------------Set Address-----------------
	void setaddress(string ad)
	{
		address = ad;
	}
	string getaddress()
	{
		return address;
	}
	//--------------Set Gender-----------------
	void setgender(char gen)
	{
		gender = gen;
	}
	char getgender()
	{
		return gender;
	}
};
int User::no_users = 0;
class Islamabad
{
	string product;
	int price;
	int amount;
public:
	Islamabad()
	{
		product = "\0";
		price = 0;
		amount = 0;
	}
	Islamabad(string pro, int pri, int am)
	{
		product = pro;
		price = pri;
		amount = am;
	}
	void updateProduct()
	{
		fstream file;
		file.open("Islamabad.txt", ios::out | ios::app);
			file << endl << product << " " << price << " " << amount;
			cout << "Added Successfully" << endl;
	}
	void Viewfile()
	{
		char temp[200];
		fstream file;
		file.open("Islamabad.txt", ios::in | ios::out | ios::app);
			while (!file.eof())
			{
				file >> temp;
				cout << temp<<"   ";
				file >> temp;
				cout << temp << "   ";
				file >> temp;
				cout << temp << endl;

			}
	}
	void SearchFile(string str)
	{
		char temp[200];
		fstream file;
		file.open("Islamabad", ios::in |ios::out|ios::app);
		while (!file.eof())
		{
			cout << str;
			file >> temp;
			if (temp == str)
			{
				cout << "Item Found" << endl;
				return;
			}
		}
		cout << "Item Not Found" << endl;
		return;
	}
};
class Karachi
{
	string product;
	int price;
	int amount;
public:
	Karachi()
	{
		product = "\0";
		price = 0;
		amount = 0;
	}
	Karachi(string pro, int pri, int am)
	{
		product = pro;
		price = pri;
		amount = am;
	}
	void updateProduct()
	{
		fstream file;
		file.open("Karachi.txt", ios::out | ios::app);
		file << endl << product << " " << price << " " << amount;
		cout << "Added Successfully" << endl;
	}
};
class Lahore
{
	string product;
	int price;
	int amount;
public:
	Lahore()
	{
		product = "\0";
		price = 0;
		amount = 0;
	}
	Lahore(string pro, int pri, int am)
	{
		product = pro;
		price = pri;
		amount = am;
	}
	void updateProduct()
	{
		fstream file;
		file.open("Lahore.txt", ios::out | ios::app);
		file << endl << product << " " << price << " " << amount;
		cout << "Added Successfully" << endl;
	}
};
class Product
{
	string product_name;
public:
	Product()
	{
		product_name = "\0";
	}
	Product(string n)
	{
		product_name = n;
	}
	void AddProduct(string product_category)
	{
		char text2[200];
		fstream file, file2;
		file.open("Product.txt", ios::in | ios::app);
		file2.open("Products.txt", ios::out);
		bool check = false;
		while (!file.eof())
		{
			file >> text2;
			file2 << text2<<endl;
			if (text2 == product_category)
			{
				check = true;
				file2 << product_name << endl;
				cout << "Added Successfully" << endl;
			}

		}
		if (!check) cout << "Cannot Find Category" << endl;
		file.close();
		file2.close();
		return;
	}
	void RemoveProduct()
	{
		char text2[200];
		fstream file;
		file.open("Product.txt", ios::out | ios::in | ios::app);
		while (!file.eof())
		{
			file >> text2;
			if (text2 == product_name)
			{

				file << endl << product_name;
				cout << "Removed Successfully" << endl;
				return;
			}

		}
		cout << "Cannot Find Product" << endl;
	}

	void UpdateProduct()
	{
		char text2[200];
		fstream file;
		file.open("Product.txt", ios::out | ios::in | ios::app);
		while (!file.eof())
		{
			file >> text2;
			if (text2 == product_name)
			{

				file << endl << product_name;
				cout << "Updated Successfully" << endl;
				return;
			}

		}
		cout << "Cannot Find Product" << endl;


	}

};
class Inventory
{

};
class Customer : public User
{
	//Data Members for the User type assigned
	string user_name;
	string password;
public:
	Customer()
	{
		user_name = "\0";
		password = "\0";
	}
	Customer(string n, string p)
	{
		user_name = n;
		password = p;
	}
	int checkpass()
	{
		char text2[200];
		fstream file;
		//Reading if  the Username already exist
		file.open("Customer.txt", ios::out | ios::in | ios::app);
		while (!file.eof())
		{
			file >> text2;


			if (text2 == user_name)
			{
				file >> text2;

				if (text2 == password)
				{

					return 0;
				}
				return 1;
			}

		}
		cout << "Username DOESNOT Exist!" << endl;
		return 2;
	}

};
class Manager : public User
{
	//Data Members for the User type assigned
	string user_name;
	string password;
public:
	Manager()
	{
		user_name = "\0";
		password = "\0";
	}
	Manager(string n, string p)
	{
		user_name = n;
		password = p;
	}
	int checkpass()
	{
		char text2[200];
		fstream file;
		//Reading if  the Username already exist
		file.open("Manager.txt", ios::out | ios::in | ios::app);
		while (!file.eof())
		{
			file >> text2;


			if (text2 == user_name)
			{
				file >> text2;

				if (text2 == password)
				{
					file >> text2;
					Manager_City = text2;
					return 0;
				}
				return 1;
			}

		}
		cout << "Username DOESNOT Exist!" << endl;
		return 2;
	}

};
class Admin : public User
{
	//Data Members for the User type assigned
	string user_name;
	string password;
public:
	Admin()
	{
		user_name = "\0";
		password = "\0";
	}
	Admin(string n, string p)
	{
		user_name = n;
		password = p;
	}
	int checkpass()
	{
		char text2[200];
		fstream file;
		//Reading if  the Username already exist
		file.open("Admin.txt", ios::out | ios::in | ios::app);
		while (!file.eof())
		{
			file >> text2;


			if (text2 == user_name)
			{
				file >> text2;
			
				if (text2 == password)
				{
					
					return 0;
				}
				return 1;
			}

		}
		cout << "Username DOESNOT Exist!" << endl;
		return 2;
	}
};


int main()
{
	int n = 1, temp = 0;
	int option, option2,option3, price, amount;
	string name, email, number, address,login_pass,product;
	string name2, login_pass2;
	char* pass = new char[9]; char* cnic = new char[13];
	char gender = '\0';

	cout << "=======================================Welcome to the New Age Grocery Store :)=======================================" << endl;
	while (n)
	{
		cout << "================================" << endl;
		cout << "1. Login (Already the member)" << endl;
		cout << "2. Register (Not the Member)" << endl;
		cout << "================================" << endl;
		cin >> option;

		switch (option)
		{
		case 1: //Login
		{
			cout << "============================================" << endl;
			cout << "Login Block!" << endl;
			cout << "What of the following best represents you?" << endl;
			cout << "1. Admin" << endl;
			cout << "2. Manager" << endl;
			cout << "3. Customer" << endl;
			cout << "============================================" << endl;
			cin >> option2;
			switch (option2)
			{
			case 1: //Admin
			{
				cout << "Welcome Back!" << endl;
				cout << "Please Enter your Username:" << endl;
				cin >> name;
				for (int i = 0; i < 9; i++)
				{
					pass[i] = NULL;
				}
				cout << "Please Enter Password:" << endl;
				cin >> login_pass;
				Admin A(name, login_pass);
				int choice = A.checkpass();
				if (choice==1)
				{
					cout << "Incorrect Password" << endl;
					cout << "Please Try to login Again" << endl;
				}
				else if (choice==0)
				{
					cout <<endl<< "Login Succeed" << endl;
					cout << endl;
					cout << "=========================================" << endl;
					cout << "Enter your Choice:" << endl;
					cout << "1. Register Manager" << endl;
					cout << "2. Manage Product Catalog" << endl;
					cout << "3. Store Checkout Simulation" << endl;
					cout << "=========================================" << endl;
					cin >> option3;
//---------------------------------------Admin's Working--------------------------------------------------

					switch (option3)
					{
					case 1:
					{
//---------------------------------------Register Manager-------------------------------------------------
						cout << "Registration of Manager" << endl;
						cout << "Enter Name:" << endl;
						cin >> name;
						cout << "Enter email:" << endl;
						cin >> email;
						cout << "Enter Phone number:" << endl;
						cin >> number;
						cout << "Enter Address:" << endl;
						cin >> address;
						cout << "Enter Gender: (F, M or N)" << endl;
						cin >> gender;
						cout << "Enter a Valid 13-digit CNIC:" << endl;
						for (int i = 0; i < 13; i++)
						{
							cin >> cnic[i];
						}
						cnic[13] = '\0';
						while (1)
						{
							for (int i = 0; i < 9; i++)
							{
								pass[i] = NULL;
							}
							cout << "Now Set 9 Digit Password for the Account" << endl;
							for (int i = 0; i < 9; i++)
							{
								cin >> pass[i];
							}
							pass[9] = '\0';

							for (int i = 0; i < 9; i++)
							{
								if ((pass[i] >= 'A' && pass[i] <= 'Z'))

								{
									for (int j = 0; j < 9; j++)
									{
										if ((pass[i] >= 0 + 48 || pass[i] <= 9 + 48))
										{
											temp = 4;
										}


									}
								}
							}
							if (temp == 4)
								break;
							cout << "Please Enter Valid Password" << endl;
						}
						User M(name, cnic, email, pass, number, address, gender);
						M.setManager(name, cnic, email, pass, number, address, gender);
						break;
						cin >> name;
						break;
					}
					case 2:
					{
//---------------------------------------Product Catalog---------------------------------------------------
						int ch; string product, cat;
						cout << "Enter the Product:" << endl;
						cin >> product;
						Product P(product);
						cout << "=========================================" << endl;
						cout << "Enter Choice:" << endl;
						cout << "1. Add Product" << endl;
						cout << "2.Update Product" << endl;
						cout << "3. Remove Product" << endl;
						cout << "=========================================" << endl;
						cin >> ch;
						switch (ch)
						{
						case 1 : //Add Product
						{
							cout << "Enter Category of this Product" << endl;
							cin >> cat;
							P.AddProduct(cat);
							break;
						}
						case 2: //Update Product
						{
							P.UpdateProduct();
							break;
						}
						case 3: //Remove Product
						{
							P.UpdateProduct();
							break;
						}
						}
						break;
					}
					case 3:
					{
//--------------------------------------Checkout Simulation-----------------------------------------------
						break;
					}
					break;
					}



				}
				else
				break;

				break;
			}
			case 2: //Manager
			{
				name = "\0";
				login_pass = "\0";
				cout << "Welcome Back!" << endl;
				cout << "Please Enter your Username:" << endl;
				cin >> name2;
				for (int i = 0; i < 9; i++)
				{
					pass[i] = NULL;
				}
				cout << "Please Enter Password:" << endl;
				cin >> login_pass2;
				Manager M(name2, login_pass2);
				int choice = M.checkpass();
				if (choice==1)
				{
					cout << "Incorrect Password" << endl;
					cout << "Please Try to login Again" << endl;
				}
				else if (choice ==0)
				{
					cout << endl << "Login Succeed" << endl;
					cout << endl;
					cout << "=========================================" << endl;
					cout << "Enter your Choice:" << endl;
					cout << "1. Manage Store" << endl;
					cout << "2. View Items" << endl;
					cout << "3. Search Items" << endl;
					cout << "=========================================" << endl;
					cin >> option3;
//------------------------------------------Manager's Working------------------------------------------------
					switch (option3)
					{
					case 1: // Manage Store
					{
						cout << "You can only Update the store of: " << Manager_City << endl;
						if (Manager_City == "Islamabad")
						{
							cout << "Enter Product to Add:" << endl;
							cin >> product;
							cout << "Enter the Price:" << endl;
							cin >> price;
							cout << "Enter the Total Amount" << endl;
							cin >> amount;
							Islamabad I(product, price, amount);
							I.updateProduct();
						
						}
						else if (Manager_City == "Karachi")
						{
							cout << "Enter Product to Add:" << endl;
							cin >> product;
							cout << "Enter the Price:" << endl;
							cin >> price;
							cout << "Enter the Total Amount" << endl;
							cin >> amount;
							Karachi K(product, price, amount);
							K.updateProduct();
						}
						else if (Manager_City == "Lahore")
						{
							cout << "Enter Product to Add:" << endl;
							cin >> product;
							cout << "Enter the Price:" << endl;
							cin >> price;
							cout << "Enter the Total Amount" << endl;
							cin >> amount;
							Lahore L(product, price, amount);
							L.updateProduct();
						}
						else
							cout << "Sorry You can not Update any Items in any store :(" << endl;
						break;
					}
					int no;
					case 2:  //View
					{
						cout << "================================================" << endl;
						cout << "Which Store Products you want to View?" << endl;
						cout << "1. Islamabad" << endl;
						cout << "2. Karachi" << endl;
						cout << "3. Lahore" << endl;
						cout << "================================================" << endl;
						cin >> no;
						switch (no)
						{
						case 1: //Islamabad
						{
							Islamabad I;
							I.Viewfile();
							break;
						}
						case 2: //Karachi

						{
							break;
						}
						case 3: //Lahore
						{
							break;
						}
							break;
						}
							break;
					}
					case 3: //Search
					{
						cout << "================================================" << endl;
						cout << "In Which Store you want to search Item?" << endl;
						cout << "1. Islamabad" << endl;
						cout << "2. Karachi" << endl;
						cout << "3. Lahore" << endl;
						cout << "================================================" << endl;
						cin >> no;
						string str;
						switch (no)
						{
						case 1: //Islamabad
						{
							cout << "What Item you want to Search?" << endl;
							cin >> str;
							Islamabad I;
							I.SearchFile(str);
							break;

						}
						case 2: //Karachi

						{
							break;
						}
						case 3: //Lahore
						{
							break;
						}
						break;
						}
					}

						break;
				}
				
				
				
				}
				break;
			}
			//string n, char* pasw = new char[9];
			case 3: //Customer
			{
				name = "\0";
				login_pass = "\0";
				cout << "Welcome Back!" << endl;
				cout << "Please Enter your Username:" << endl;
				cin >> name2;
				for (int i = 0; i < 9; i++)
				{
					pass[i] = NULL;
				}
				cout << "Please Enter Password:" << endl;
				cin >> login_pass2;
				Customer C(name2, login_pass2);
				int choice = C.checkpass();
				if (choice==1)
				{
					cout << "Incorrect Password" << endl;
					cout << "Please Try to login Again" << endl;
				}
				else if (choice==0)
				{
					cout << endl << "Login Succeed" << endl;
					cout << endl;
					cout << "=========================================" << endl;
					cout << "Enter your Choice:" << endl;
					cout << "1. Browse and Search for specific Item" << endl;
					cout << "2. Start Shopping" << endl;
					cout << "=========================================" << endl;
					cin >> option3;

				}
				else
				break;
				break;
			}

			}
			break;
		}

		case 2: //Registration
		{
			cout << "============================================" << endl;
			cout << "Registration Block!" << endl;
			cout << "What of the following best represents you?" << endl;
			cout << "1. Manager" << endl;
			cout << "2. Customer" << endl;
			cout << "============================================" << endl;
			cin >> option2;
			switch (option2)
			{

			case 1: //Manager
			{
				cout << "============================================================" << endl;
				cout << "Sorry, Only Admin can register Manager's Information :(" << endl;
				cout << "Press 0 to exit and 1 to submit another response" << endl;
				cout << "============================================================" << endl;
				break;
			}
			case 2: //Customer
			{
				cout << "Hey Customer please provide following information" << endl; //Provide Info
				cout << "Enter Your Name:" << endl;
				cin >> name;
				cout << "Enter your email:" << endl;
				cin >> email;
				cout << "Enter your Phone number:" << endl;
				cin >> number;
				cout << "Enter your Address:" << endl;
				cin >> address;
				cout << "Enter your Gender: (F, M or N)" << endl;
				cin >> gender;
				cout << "Enter a Valid 13-digit CNIC:" << endl;
				for (int i = 0; i < 13; i++)
				{
					cin >> cnic[i];
				}
				cnic[13] = '\0';
				while (1)
				{
					for (int i = 0; i < 9; i++)
					{
						pass[i] = NULL;
					}
					cout << "Now Set your 9 Digit Password for your Account" << endl;
					for (int i = 0; i < 9; i++)
					{
						cin >> pass[i];
					}
					pass[9] = '\0';

					for (int i = 0; i < 9; i++)
					{
						if ((pass[i] >= 'A' && pass[i] <= 'Z'))

						{
							for (int j = 0; j < 9; j++)
							{
								if ((pass[i] >= 0 + 48 || pass[i] <= 9 + 48))
								{
									temp = 4;
								}


							}
						}
					}
					if (temp == 4)
						break;
					cout << "Please Enter Valid Password" << endl;
				}
				User C(name, cnic, email, pass, number, address, gender);
				C.setCustomer(name, cnic, email, pass, number, address, gender);
				break;
			}

			}

			break;
		}


		}
		cout << "=============================================" << endl;
		cout << "You want to Sumbit another response?" << endl;
		cout << "1. Yes" << endl;
		cout << "0. No" << endl;
		cout << "=============================================" << endl;
		cin >> n;


	}
	cout << "=======================================Good Bye from New Age Grocery Store :)=======================================" << endl;

	return 0;

}