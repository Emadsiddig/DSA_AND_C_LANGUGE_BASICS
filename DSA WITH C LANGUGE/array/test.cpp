#include<iostream>
#include<ctime>
#include<cctype>
#include <limits>  
using namespace std;
//using namespace std::chrono;
class PersonHeartRateRange
{
private:
    std :: string firstName;
    std :: string lastName;
    int yearOfBearth;
    int monthOfBearth;
    int dayOfBirth;
public:
    PersonHeartRateRange(std :: string firstName, std :: string lastName,int yearOfBearth,int monthOfBearth,  int dayOfBirth )
    {
        this-> firstName= firstName;
        this-> lastName = lastName;
        this-> yearOfBearth= yearOfBearth;
        this-> monthOfBearth = monthOfBearth;
        this-> dayOfBirth= dayOfBirth;
    }
    bool validateName(std :: string name)
    {
        if(name.empty())
        {
        cout << "Empty name or ";
            return false ;
        }
        for(char letter : name )
        {
            if(!isalpha(static_cast<unsigned char>(letter))&& letter!=' ')
            {
                return false ;
            }

        }
        return true ;
    }
    std :: string  getFirstName()
    {
        return firstName;
    }
    std :: string getLastName()
    {
        return lastName;
    }
    int getYearOfBearth(  )
    {
        return yearOfBearth;
    }
    int getMonthOfBearth(  )
    {
        return monthOfBearth;
    }
    int getDayOfBirth()
    {
        return dayOfBirth;
    }

    void setFirstName(std :: string FirstName)
    {
        firstName= FirstName;
    }
    void setLastName(std :: string LastName)
    {
        lastName= LastName;
    }
    void setYearOfBearth( int YearOfBearth )
    {
        yearOfBearth= YearOfBearth;
    }
    void setMonthOfBearth( int MonthOfBearth )
    {
        monthOfBearth = MonthOfBearth;
    }
    void setDayOfBirth(int DayOfBirth )
    {
        dayOfBirth = DayOfBirth;
    }
    static int getCurrentYear()
    {
        time_t now = time(0);
        tm* localTime = localtime(&now);
        return 1900 + localTime->tm_year;
    }

    int getAge()
    {
        time_t now = time(0);
        tm* localTime = localtime(&now);

        // Extract current date components
        int currentYear = 1900 + localTime->tm_year;
        int currentMonth = 1 + localTime->tm_mon; // months are 0-11
        int currentDay = localTime->tm_mday;
        int age = currentYear - yearOfBearth;

        // Adjust if birthday hasn't happened yet this year
        if (currentMonth < monthOfBearth ||
                (currentMonth == monthOfBearth && currentDay < dayOfBirth)) {
            age--;
        }
        return age;
    }
    int getmaxHeartRate()
    {
        int age ;
        age = getAge();
        return (220 - age);

    }
    int * targtHeartRate()
    {
        int max;
        max = getmaxHeartRate();
        static int targtHeartRateRange[2];
        targtHeartRateRange[0]= static_cast<int> (max * (50.0 / 100.0));
        targtHeartRateRange[1]= static_cast<int> (max * (85.0 / 100.0));

        return targtHeartRateRange;
    }

};


int main()
{
    int year, month, day, valid = 0;
    char choice ;
    int *TargetHeartRange;
    PersonHeartRateRange person("","",0,0,0);
    do
    {

        std:: string first_name;
        do {
            cout << "Enter frist name :" << endl;
            getline(cin,first_name);
            if(person.validateName(first_name))
            {
                valid =1;
                person.setFirstName(first_name);
            }
            else
            {
                cout << "Invalid name (special characters and numbers not allowed!" << endl;
            }
        } while(valid!=1);
        valid =0;
        std:: string last_name;
        do {
            cout << "Enter last name :" << endl;
            getline(cin,last_name);
            if(person.validateName(last_name))
            {
                valid =1;
                person.setLastName(last_name);
            }
            else
            {
                cout << "Invalid name (special characters and numbers not allowed!" << endl;
            }
        }
        while(valid!=1);
        cout << "Enter your birth date :" << endl;
        int yearSet=2,  yearFailed=0;
        do
        {
            cout << "Enter year :" << endl;
            cin >> year;
            if(cin.fail())
            {
                yearFailed=1;
                cout << "Please Enter a number " << endl;
                cin.clear(); // Clear the fail state
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard everything until newline
            }
            int currentYear = person.getCurrentYear();
            if(year<1900|| year>currentYear)
            {
                if(yearFailed==0)
                    cout << "Enter a valid year ( 1900 -  this year) : " << endl;
            }
            else
            {
                yearSet=1;
                person.setYearOfBearth(year);
            }
        } while (yearSet!=1);
        int monthSet=2, monthFailed=0;
        do
        {
            cout << "Enter month :" << endl;
            cin >> month;
            if(cin.fail())
            {
                monthFailed=1;
                cout << "Please Enter a number " << endl;
                cin.clear(); // Clear the fail state
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard everything until newline
            }
            if(month<1|| month>12)
            {
                if(monthFailed==0)
                    cout << "Enter a valid month ( 1- 12 ) : " << endl;
            }
            else
            {
                monthSet=1;
                person.setMonthOfBearth(month);
            }
        } while(monthSet!=1);
        int daySet=2, dayFailed=0;
        do
        {
            cout << "Enter day :" << endl;
            cin >> day;
            if(cin.fail())
            {
                dayFailed=1;
                cout << "Please Enter a number " << endl;
                cin.clear(); // Clear the fail state
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard everything until newline
            }
            if(day <1 || day > 31)
            {
                if(dayFailed==0)
                    cout << "Enter a valid day ( 1- 31 ) : " << endl;
            }
            else
            {
                daySet=1;
                person.setDayOfBirth(day);
            }
        } while(daySet!=1);

        TargetHeartRange=person.targtHeartRate();
        cout << "Hello! \nYou're " << person.getAge()<<" Years old ";
        cout << "And Your target heart rate is in range between: ";
        cout << *(TargetHeartRange);
        cout <<" - " << *(TargetHeartRange+1)<<" bpm\n";
        cout << "You wanna check for another person? (Y/N)" << endl;
        cin >> choice;
        cin.ignore();
    } while(toupper(choice)=='Y');
    cout << "Program ended, stay healthy !" << endl;
    return 0;
}