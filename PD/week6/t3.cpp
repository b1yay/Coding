#include<iostream>
using namespace std ;
string findZodiacSign(int date, string month);
main(){
    int date ;
    string month,result ;
    cout << "Enter the day of birth: " ;
    cin >> date ;
    cout << "Enter the month of birth(e.g. , January, February): " ;
    cin >> month ;
    result = findZodiacSign(date, month) ;
    cout << "Zodiac Sign: " << result ;
}
string findZodiacSign(int date, string month){
    if((date<=21 || date >=19) && (month == "march" || month == "april")){
        return "Aries" ;
    }
    else if((date=20) && (month == "april" || month == "may")){
        return "Taurus" ;
    }
    else if((date>=21 || month == "may" ) && ( date <=20 || month == "june")){
        return "Gemini" ;
    }
    else if((date>=21 || month == "june" ) && ( date <=22 || month == "july")){
        return "Cancer" ;
    }
    else if((date>=22 || month == "july" ) && ( date <=22|| month == "august")){
        return "Leo" ;
    }
    else if((date>=23 || month == "august" ) && ( date <=22 || month == "september")){
        return "Virgo" ;
    }
    else if((date>=23 || month == "september" ) && ( date<=22 || month == "october")){
        return "Libra" ;
    }
    else if((date>=23 || month == "october") && (  date <=21 || month == "november")){
        return "Scorpio" ;
    }
    else if((date>=22 ||  month == "november" ) && ( date <=21|| month == "december")){
        return "Sagittarius" ;
    }
    else if((date>=22 || month == "december" ) && ( date <=19 || month == "january")){
        return "Capricon" ;
    }
    else if((date>=20 || month == "january" ) && ( date <=18 || month == "february")){
        return "Aquarius" ;
    }
    return " " ;
}