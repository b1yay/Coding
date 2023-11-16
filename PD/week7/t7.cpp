#include<iostream>
using namespace std;
int treated(int num);
int untreat = 0;

int main()
{   int num,result;
    cout << "Enter Number of days you visited Hospital: ";
    cin >> num;
    result=treated(num);
    cout << "Treated Patients: " << result << endl ;
    cout << "Untreated Patients: " << untreat ;
}

int treated(int num)
{
    int treat = 0; 
    int doctor = 7; 
    int patients = 0;
    
    for(int i = 1; i <= num; i++)
    {
        if(i == 3 && untreat > treat)
        {
            doctor++;
        }

        cout << "Number of patients who visited hospital on Day " << i << ": ";
        cin >> patients;

        if(patients <= doctor)
        {
            treat += patients;
        }
        else
        {
            treat += doctor;
            untreat += patients - doctor;
        }
    }

    untreat;
    return treat ;
}
