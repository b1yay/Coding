#include<iostream>
using namespace std ;
float calculateAverage(float e, float m, float
c, float s, float b);
string calculateGrade(float avg);
main(){
string name,result2 ;
float e,m,c,s,b,result ;
cout << "Enter student name: ";
cin >> name ;
cout << "Enter marks for English: " ;
cin >> e ;
cout << "Enter marks for Maths: " ;
cin >> m ; 
cout << "Enter marks for Chemistry: " ;
cin >> c ;
cout << "Enter marks for Social Science: " ;
cin >> s ;
cout << "Enter marks for Biology: " ;
cin >> b ;
result = calculateAverage(e, m,
c, s, b) ;
result2 = calculateGrade( result ) ;
cout <<"Student Name: " << name << endl ;
cout << "Percentage : " << result << "%" << endl ;
cout << "Grade: " << result2 ;
}
float calculateAverage(float e, float m, float
c, float s, float b) {
    float avg ;
    avg = (e+m+c+s+b)/5 ;
    return avg ;
}
string calculateGrade(float result){
    string grade;
    if (result>=90){
        grade = "A+" ;
    }
    else if(result>=80 && result < 90) {
        grade = "A" ;
    }
    else if(result >=70 && result < 80){
        grade = "B+" ;
    }
    else if(result >=60 && result < 70){
        grade ="B" ;
    }
    else if(result >=50 && result < 60){
        grade= " C";
    }
    else if(result >=40 && result < 50){
        grade = "D" ;
    }
    else if(result < 40){
        grade = "F";
    }
    return grade ;
}
