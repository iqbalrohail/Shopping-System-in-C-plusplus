#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

class Person
{
private:
    string Name, City, Address, Gender, Email;
    int Age;
    long double PhoneNumber;

public:
    Person() // free constructor
    {
    }

    // setters and getters
    void setName(string Name)
    {
        this->Name = Name;
    }
    void setCity(string City)
    {
        this->City = City;
    }
    void setAddress(string Address)
    {
        this->Address = Address;
    }
    void setGender(string Gender)
    {
        this->Gender = Gender;
    }
    void setEmail(string Email)
    {
        this->Email = Email;
    }
    void setPhoneNumber(long double PhoneNumber)
    {
        this->PhoneNumber = PhoneNumber;
    }
    void setAge(double Age)
    {
        this->Age = Age;
    }

    string getName()
    {
        return Name;
    }
    string getCity()
    {
        return City;
    }
    string getAddress()
    {
        return Address;
    }
    string getGender()
    {
        return Gender;
    }
    string getEmail()
    {
        return Email;
    }

    long double getPhoneNumber()
    {
        return PhoneNumber;
    }

    int getAge()
    {
        return Age;
    }

    // --------------------------------------------------------------------......................................................

    void inputPersonalDetails()
    {

        ofstream WritePersonalDetails; // for writting

        //         writting personal details                 ////////////////////////////////////////////////////////////////////////////

        WritePersonalDetails.open("PersonalDetails.txt"); // opening a file

        // calling methods of person class and writting/saving personal information of a buyer or seller in a file

        cout << "Enter your city\n";
        cin >> City;
        WritePersonalDetails << "User's City name is " << City << endl;
        cout << "Your City name is " << City << endl;
        cin.ignore();

        cout << "Enter your Name\n";
        getline(cin, Name);
        WritePersonalDetails << "User's name is " << Name << endl;
        cout << "Your name is " << Name << endl;
        cout << "Enter your Address\n";
        getline(cin, Address);
        WritePersonalDetails << "User's address is " << Address << endl;
        cout << "Your address is " << Address << endl;
        cout << "Enter your gender (Male / Female or Other \n";
        getline(cin, Gender);
        WritePersonalDetails << "User's gender is " << Gender << endl;
        cout << "Your gender is " << Gender << endl;
        cout << "Enter your Email\n";
        getline(cin, Email);
        WritePersonalDetails << "User's Email is " << Email << endl;
        cout << "Your Email is " << Email << endl;

        cout << "Enter your phone number\n";
        cin >> PhoneNumber;
        WritePersonalDetails << "User's Phone NUmber is " << PhoneNumber << endl;
        cout << "Your Phone NUmber is " << PhoneNumber << endl;

        cout << "Enter your age\n";
        cin >> Age;
        WritePersonalDetails << "User's Age is " << Age << endl;
        cout << "Your Age is " << Age << endl;

        cout << "\n\n your personal details information have been saved\n";

        WritePersonalDetails.close();
        //----------------------------------------------------------------------------..............................................
    }

    void readDataFromPersonalDetails()
    {
        // reading personal information of a buyer or seller from a file ------------
        ifstream ReadingPersonalDetails;

        ReadingPersonalDetails.open("PersonalDetails.txt");
        string readingPersonalDetails;

        while (getline(ReadingPersonalDetails, readingPersonalDetails)) // for reading all the information to string
        {
            cout << readingPersonalDetails << endl;
        }

        ReadingPersonalDetails.close();

        // /////--------------------------------------------------------------////////////////////
    }
};

class Seller : public Person // class for sellers
{

private:
    float PriceOfItem;
    int IdOfItem;

public:
    Seller()
    {
    }

    // ...........setters and getters //........................//.//////////////././././././././././.
    void setPriceOfItem()
    {
        cout << "Enter price of the item\n";
        cin >> PriceOfItem;
    }
    void setIdOfItem()
    {
        cout << "Enter ID of the item\n";
        cin >> IdOfItem;
    }
    float getPriceOfItem()
    {
        //cout<<"Enter price of the item is \n" <<PriceOfItem<<"\n";
        return PriceOfItem;
    }
    int getIdOfItem()
    {
        //cout<<"Enter price of the item\n"<<IdOfItem<<"\n";
        return IdOfItem;
    }
    //.................................................//////////////////////////..............................
};

// cloths , MobilePhones , Furniture , TechnologyItems ;

class Outfits : public Seller // class for accessories to sell
{

private:
    ofstream WriteOutfitsDetails; // for writting data to a file

    //string Shirt , Pent , Shoes , Belts ;

    float PriceOfShirt, PriceOfPent, PriceOfShoes, PriceOfBelts;
    int IdOfShirt, IdOfPent, IdOfShoes, IdOfBelts;

public:
    Outfits() {} // constructor
                 //---------------------- setters and getters for Outfits -----------------------------------
                 //----------------------Writting data to a file in getters----------------------------------
    void setPriceAndIdOfShirt()
    {

        setPriceOfItem();
        setIdOfItem();
        PriceOfShirt = getPriceOfItem();
        IdOfShirt = getIdOfItem();
    }

    void getPriceAndIdOfShirt()
    {
        WriteOutfitsDetails.open("SellersData.txt");

        WriteOutfitsDetails << "The price of shirt is " << PriceOfShirt << "\n";
        WriteOutfitsDetails << "The ID of shirt is " << IdOfShirt << "\n";
        WriteOutfitsDetails.close();

        cout << "The price of shirt is " << PriceOfShirt << "\n";
        cout << "The ID of shirt is " << IdOfShirt << "\n";
    }

    void setPriceAndIdOfPent()
    {

        setPriceOfItem();
        setIdOfItem();
        PriceOfPent = getPriceOfItem();
        IdOfPent = getIdOfItem();
    }

    void getPriceAndIdOfPent()
    {
        WriteOutfitsDetails.open("SellersData.txt");
        WriteOutfitsDetails << "The price of Pent is " << PriceOfPent << "\n";
        WriteOutfitsDetails << "The ID of Pent is " << IdOfPent << "\n";
        WriteOutfitsDetails.close();

        cout << "The price of Pent is " << PriceOfPent << "\n";
        cout << "The ID of Pent is " << IdOfPent << "\n";
    }

    void setPriceAndIdOfShoes()
    {

        setPriceOfItem();
        setIdOfItem();
        PriceOfShoes = getPriceOfItem();
        IdOfShoes = getIdOfItem();
    }

    void getPriceAndIdOfShoes()
    {
        WriteOutfitsDetails.open("SellersData.txt");
        WriteOutfitsDetails << "The price of shoes is " << PriceOfShoes << "\n";
        WriteOutfitsDetails << "The ID of shoes is " << IdOfShoes << "\n";
        WriteOutfitsDetails.close();

        cout << "The price of shoes is " << PriceOfShoes << "\n";
        cout << "The ID of shoes is " << IdOfShoes << "\n";
    }

    void setPriceAndIdOfBelts()
    {

        setPriceOfItem();
        setIdOfItem();
        PriceOfBelts = getPriceOfItem();
        IdOfBelts = getIdOfItem();
    }

    void getPriceAndIdOfBelts()
    {
        WriteOutfitsDetails.open("SellersData.txt");

        WriteOutfitsDetails << "The price of Belt is " << PriceOfBelts << "\n";
        WriteOutfitsDetails << "The ID of Belt is " << IdOfBelts << "\n";
        WriteOutfitsDetails.close();

        cout << "The price of Belt is " << PriceOfBelts << "\n";
        cout << "The ID of Belt is " << IdOfBelts << "\n";
    }

    // *************************************************************************************************************
};

class Technology : public Outfits
{
private:
    ofstream WriteOutfitsDetails; // for writting data to a file
    float PriceOfMobile, PriceOfLaptop;
    int IdOfMobile, IdOfLaptop;

public:
    void setPriceAndIdOfMobile()
    {

        setPriceOfItem();
        setIdOfItem();
        PriceOfMobile = getPriceOfItem();
        IdOfMobile = getIdOfItem();
    }

    void getPriceAndIdOfMobile()
    {
        WriteOutfitsDetails.open("TechnologyItemsData.txt");

        WriteOutfitsDetails << "The price of Mobile phone is " << PriceOfMobile << "\n";
        WriteOutfitsDetails << "The ID of Mobile Phone is " << IdOfMobile << "\n";
        WriteOutfitsDetails.close();

        cout << "The price of Mobile is " << PriceOfMobile << "\n";
        cout << "The ID of Mobile is " << IdOfMobile << "\n";
    }

    void setPriceAndIdOfLaptop()
    {

        setPriceOfItem();
        setIdOfItem();
        PriceOfLaptop = getPriceOfItem();
        IdOfLaptop = getIdOfItem();
    }

    void getPriceAndIdOfLaptop()
    {
        WriteOutfitsDetails.open("TechnologyItemsData.txt");

        WriteOutfitsDetails << "The price of Laptop is " << PriceOfLaptop << "\n";
        WriteOutfitsDetails << "The ID of Laptop is " << IdOfLaptop << "\n";
        WriteOutfitsDetails.close();

        cout << "The price of Laptop is " << PriceOfLaptop << "\n";
        cout << "The ID of Laptop is " << IdOfLaptop << "\n";
    }
};

class Furniture : public Technology
{
private:
    ofstream WriteOutfitsDetails;

    float priceOfBed, priceOfSofa;
    int idOfBed, idOfSofa;

public:
    Furniture() {}

    void setPriceAndIdOfBed()
    {
        setPriceOfItem();
        setIdOfItem();

        priceOfBed = getPriceOfItem();
        idOfBed = getIdOfItem();
    }

    void getPriceAndIdOfBed()
    {
        WriteOutfitsDetails.open("FurnitureItemsDetails.txt");

        WriteOutfitsDetails << "The price of a bed is  " << priceOfBed << "\n";
        WriteOutfitsDetails << "The ID of bed is " << idOfBed << "\n";
        WriteOutfitsDetails.close();

        cout << "The price of bed is " << priceOfBed << "\n";
        cout << "The ID of bed is " << idOfBed << "\n";
    }
    void setPriceAndIdOfSofa()
    {
        setPriceOfItem();
        setIdOfItem();

        priceOfSofa = getPriceOfItem();
        idOfSofa = getIdOfItem();
    }

    void getPriceAndIdOfSofa()
    {
        WriteOutfitsDetails.open("FurnitureItemsDetails.txt");

        WriteOutfitsDetails << "The price of a Sofa is  " << priceOfSofa << "\n";
        WriteOutfitsDetails << "The ID of Sofa is " << idOfSofa << "\n";
        WriteOutfitsDetails.close();

        cout << "The price of Sofa is " << priceOfSofa << "\n";
        cout << "The ID of Sofa is " << idOfSofa << "\n";
    }
};

// ======================================Class for Buyer===================================
class Buyer : public Furniture
{

private:
    ifstream is;
    string line;
    string accountNumber;
    int payment;
    ofstream bankaccountdetails;

public:
    void readOutfitsData()
    {

        is.open("SellersData.txt");
        cout << "here is the price and ID for outfits:" << endl;
        while (getline(is, line))
        {
            cout << line << endl;
        }
        is.close();
    }

    void readTechnologyData()
    {

        is.open("TechnologyItemsData.txt");
        cout << "here is the price and ID for Technical items:" << endl;
        while (getline(is, line))
        {
            cout << line << endl;
        }
        is.close();
    }

    void readFurnitureData()
    {

        is.open("FurnitureItemsDetails.txt");
        cout << "here is the price and ID for Furniture accessories:" << endl;
        while (getline(is, line))
        {
            cout << line << endl;
        }
        is.close();
    }

    void payBill() // method for paying for the item

    {
        char paymentDecision;

        cout << "Add your payment Details\n\n 1 Bank account \n 2 Cash on Deleivery\n";
        cin >> paymentDecision;

        switch (paymentDecision)
        {
        case '1':
        {
            inputPersonalDetails();
            cout << "Enter you account Details\n\n";
            cout << "Account Number: ";
            cin >> accountNumber;
            cout << "\nPayment: ";
            cin >> payment;

            bankaccountdetails.open("OrderDetails.txt");

            bankaccountdetails << "The user deposited " << payment << " for account Number " << accountNumber << endl;
            bankaccountdetails.close();
            cout << "Your payment for account Number " << accountNumber << " is sent to seller" << endl;

            break;
        }
        case '2':
        {
            inputPersonalDetails();

            cout << "your order have been placed and payment will be received by hand\n";
            bankaccountdetails.open("OrderDetails.txt");
            bankaccountdetails << "The buyer choose Cash on deleiver for the payment method" << endl;
            bankaccountdetails.close();

            break;
        }

        default:
            break;
        }
    }

    void readOrderdetails()
    {

        is.open("OrderDetails.txt");

        while (getline(is, line))
        {
            cout << line << endl;
        }
        is.close();
    }
};

// ==================================================================================================================================

class security : public Buyer // main functionality controlling class
{
private:
    Outfits outfits;
    Technology technology;
    Furniture furniture;
    Buyer buyer;
    string a, b, x; // variables for writting/reading data in the file
    string Username;

public:
    void setpass()
    {
        ofstream out("password.txt"); // file name
        cout << "Enter your user name" << endl;
        cin >> Username;

        cout << "Enter your password" << endl;
        cin >> a;
        out << Username << "\n"
            << a; // writting in a file
        cout << "your information have been saved " << endl;
        out.close();
    }

    void getpass()
    {
        ifstream inp("password.txt");
        inp >> b; // reads username

        inp >> x; // reads password

        inp.close();
    }

    void sellerPortal()
    {

        // conditions for SELLER       <<<<<<<< ----------------------------------------------------------------->>>>>>>>>>>>>>>>>>>>>>>>>>

        char SellerProductSelect;
        cout << "\nFollowing are the details for seller portal\n\n 1.Outfits\n 2.Technology\n 3.Furniture\n\n press the related number\n";
        cout << "\n Or press 4 to check orders\n";

        cin >> SellerProductSelect;

        // ------------------------- for outfits -------------------------------------------------------------------------------------------
        if (SellerProductSelect == '1')
        {
            char OutfitSelect;
            cout << "Select Outfit to sell\n 1.Shirt\n 2.Pent\n 3.Shoes\n 4.Belts\n";
            cin >> OutfitSelect;

            if (OutfitSelect == '1')
            {
                outfits.setPriceAndIdOfShirt();
                outfits.getPriceAndIdOfShirt();
            }
            else if (OutfitSelect == '2')
            {
                outfits.setPriceAndIdOfPent();
                outfits.getPriceAndIdOfPent();
            }
            else if (OutfitSelect == '3')
            {
                outfits.setPriceAndIdOfShoes();
                outfits.getPriceAndIdOfShoes();
            }
            else if (OutfitSelect == '4')
            {
                outfits.setPriceAndIdOfBelts();
                outfits.getPriceAndIdOfBelts();
            }

        } // outfits condition ends   ------------------------------------------------------------------------------------------------

        // .........................for Technology ---------------------------------------------------------
        else if (SellerProductSelect == '2')
        {
            char TechnologySelect;
            cout << "Select Technical Item to sell\n 1.Mobile phone\n 2.Laptop\n";
            cin >> TechnologySelect;

            if (TechnologySelect == '1')
            {
                technology.setPriceAndIdOfMobile();
                technology.getPriceAndIdOfMobile();
            }
            else if (TechnologySelect == '2')
            {

                technology.setPriceAndIdOfLaptop();
                technology.getPriceAndIdOfLaptop();
            }

        } // technology condition ends

        else if (SellerProductSelect == '3')
        {
            char FurnitureSelect;
            cout << "Select Technical Item to sell\n 1.Bed\n 2.Sofa\n";
            cin >> FurnitureSelect;

            // using switch statement
            switch (FurnitureSelect)
            {
            case '1':
            {
                furniture.setPriceAndIdOfBed();
                furniture.getPriceAndIdOfBed();

                break;
            }

            case '2':
            {
                furniture.setPriceAndIdOfSofa();
                furniture.getPriceAndIdOfSofa();
                break;
            }
            }

        } // end of Furniture condition

        else if (SellerProductSelect == '4')
        {
            readOrderdetails();
            cout << "\n\n";
            readDataFromPersonalDetails();
        }

    } // ==================================================================================================================

    // ===========================portal for buyer =========================
    void buyerPortal()
    {

        char buyerProductSelect;

        cout << "\nFollowing are the details for Buyer portal\n\n 1.Outfits\n 2.Technology\n 3.Furniture\n\n press the related number\n";

        cin >> buyerProductSelect;

        switch (buyerProductSelect)
        {

        case '1':
        {
            buyer.readOutfitsData(); // reads price and id for outfits
            break;
        }

        case '2':
        {

            buyer.readTechnologyData(); // reads price and id for Technology
            break;
        }

        case '3':
        {

            buyer.readFurnitureData(); // reads price and id for Technology
            break;
        }
        }

        payBill();
    }

    void checkpass()
    {
        char DetailsDecision;

        string testusr;  // username for checking
        string testpass; // password for checking
        cout << "Enter you user name" << endl;
        cin >> testusr;
        cout << "Enter you password" << endl;
        cin >> testpass;
        if (b == testusr && x == testpass)
        {
            cout << "you have been logged in" << endl;

            // if login successful ask the following details --------------------------------------------

            //inputPersonalDetails();
            cout << "press 1 for access SELLER/BUYER Portals\n press 2 for Exit\n";
            cin >> DetailsDecision;
            if (DetailsDecision == '1')
            {
                char SellerOrBuyer;
                char loop; // for do-while conditioon

                // using do while loop
                do
                {
                    cout << "Do you want to Login as a seller or buyer?" << endl;
                    cout << "\n\n press 1 for seller\n\n press 2 for buyer\n";
                    cin >> SellerOrBuyer;

                    if (SellerOrBuyer == '1')
                    {
                        sellerPortal();
                    }

                    //------------------------ portal for buyer --------------------
                    else if (SellerOrBuyer == '2')
                    {

                        buyerPortal();
                    }
                    cout << "Press y for continue or press any key to exit portal " << endl;

                    cin >> loop;

                } while (loop == 'y'); // loop continue condition
            }

            else if (DetailsDecision == '2')
            {
                cout << "The program is being Closed\n";
                system("pause");
            }

        } //------------------------------------<<<<<<-Closing of main Condition------>>>>>>>>--------------------------------------------

        else
        {
            cout << "INCORRECT User Name or Password \n\n *** Start the program again *** " << endl;
        }
    }

    void decision(char c) // receiving   char for decision purpose
    {

        if (c == '1')
        {
            setpass();
        }
        getpass();
        if (c == '2')
        {
            checkpass();
        }
    }
};

int main()
{
start:

    security obj1;
    char ch;
    cout << "press 1 for signup\n press 2 for login" << endl;
    cin >> ch;
    obj1.decision(ch); // passing class object and char as arguments
    if (ch == '1')
    {
        system("cls");
        goto start; // transfers the control to start
    }
}
