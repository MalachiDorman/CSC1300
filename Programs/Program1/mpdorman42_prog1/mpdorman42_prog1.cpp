/**************************************************
* Name: Malachi Dorman                            *
* Class: CSC 1300-002                             *
* Assignment: Program 1                           *
* Date: 2/2/2025                                  *                                  
* Modified: 2/2/2025                              *
***************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables

    string userName;         // may contain spaces
    int currentAge;          // starting point
    char gender;             // male/female
    int currentWeight;       // underweight, just right, overweight, obese
    char smokeVape;          // yes or no
    char drinkAlc;           // yes or no
    int exercise;            // none, very little, periodically, active, athlete
    char ownPet;             // yes or no
    int married;             // divorced, single, married, happily married
    char caretaker;          // yes or no
    int job;                 // hate job, dislike job, it's ok, enjoyable, love it!
    char eatBfast;           // yes or no
    char parentsDeath;       // yes or no
    char fruitsDaily;        // yes or no
    char vegDaily;           // yes or no
    int hangFriends;         // never, periodically, often
    int eduLvl;              // no degrees, hs degree, associates degree, bachelors degree, master/PHD degree
    
    int lifeExp = 60;

    // Main Program
    cout << "********** Life Expectancy Calculator **********" << endl;
    // Name input

    cout << "Enter your name: ";
    cin >> userName;

    // Age input

    cout << "Enter your current age: ";
    cin >> currentAge;

    // Gender input

    cout << "Are you male or female? (enter m or f): ";
    cin >> gender;

    // Weight input

    cout << "What is your weight status?\n";
    cout << "(1)Underweight, (2)Just right, (3)Overweight, (4)Obese\n";
    cout << "(Enter 1, 2, 3 or 4): ";
    cin >> currentWeight;

    // Cig input

    cout << "Do you smoke cigarettes? (Enter y or n); ";
    cin >> smokeVape;

    // Alc input

    cout << "Do you drink more than one alcoholic beverage every day?\n" ;
    cout << "(Enter y or n): ";
    cin >> drinkAlc;

    // Exercise input

    cout << "Do you exercise?\n";
    cout << "(1)None, (2)Very Little, (3)Periodically, (4)Active, (5)Athlete\n";
    cout << "(Enter 1, 2, 3, 4 or 5): ";
    cin >> exercise;

    // Pet input
    
    cout << "Do you have a pet? (Enter y or n): ";
    cin >> ownPet;

    // Marriage input

    cout << "Are you married?\n";
    cout << "(1)Divorced, (2)Single, (3)Married, (4)Happily Married\n";
    cout << "(Enter 1, 2, 3, or 4): ";
    cin >> married;

    // Caretaker input

    cout << "Are you a caretaker? (Enter y or n): ";
    cin >> caretaker;

    // Job stress input

    cout << "How do you feel about your job?\n";
    cout << "(1)Hate it!, (2)Dislike it, (3)It's ok, (4)Enjoyable, (5) Love it!";
    cout << "(Enter 1, 2, 3, 4, or 5): ";
    cin >> job;

    // Breakfast input

    cout << "Do you eat breakfast every day? (Enter y or n): ";
    cin >> eatBfast;

    // Parents death input

    cout << "Did either of your biological parents or any of your biological grandparents die before of age 50? (Enter y or n): ";
    cin >> parentsDeath;

    // Fruits input

    cout << "Do you eat fruits every day? (Enter y or n): ";
    cin >> fruitsDaily;

    // Veg input

    cout << "Do you eat vegetables every day? (Enter y or n): ";
    cin >> vegDaily;

    // Friends input

    cout <<"Do you hang out with your friends?\n";
    cout <<"(1)Never, (2)Periodically, (3)Often\n";
    cout << "(Enter 1, 2 or 3): ";
    cin >> hangFriends;

    // Education input

    cout << "What is your education level?\n";
    cout << "(1)No degrees, (2)Highschool degree, (3)Associates degree, (4)Bachelors degree, (5)Masters/PHD degree\n";
    cout << "(Enter 1, 2, 3, 4, or 5): ";
    cin >> eduLvl;

    // Sets age to current age if below
    if(lifeExp<= currentAge)
        lifeExp = currentAge;


    // Output each calculation

    // Age

    if(currentAge <= 60)
        lifeExp = 60;
    else if(currentAge > 60)
        lifeExp = currentAge;

    int startLifeExp;
        if(currentAge <= 60)
        startLifeExp = 60;
    else if(currentAge > 60)
        startLifeExp = currentAge;
    cout << "Starting Life Expectancy: " << startLifeExp << endl;

    // Gender
    if(gender == 'm')
        lifeExp += 0;
    else if(gender == 'f')
        lifeExp += 4;
        cout << "Life Expectancy after gender: " << lifeExp << endl;
    
    // Weight
        if(currentWeight==1)
        lifeExp -=1;    
    else if(currentWeight==2)
        lifeExp +=5;
    else if(currentWeight==3)
        lifeExp -=2;
    else if(currentWeight==4)
        lifeExp -=5;
        cout << "Life Expectancy after weight: " << lifeExp << endl;

    // Smoke
    if(smokeVape == 'y')
        lifeExp -=5;
    else if(smokeVape == 'n')
        lifeExp +=5;
    cout << "Life Expectancy after smoke: " << lifeExp << endl;

    // Alc

    if(drinkAlc == 'y')
        lifeExp -=5;
    else if(drinkAlc == 'n')
        lifeExp +=2;
        cout << "Life Expectancy after alcohol: " << lifeExp << endl;
    
    // Exercise

    if(exercise==1)
        lifeExp -=5;    
    else if(exercise==2)
        lifeExp -=2;
    else if(exercise==3)
        lifeExp += 0;
    else if(exercise==4)
        lifeExp +=5;
    else if(exercise==5)
    lifeExp +=7;
    cout << "Life Expectancy after exercise: " << lifeExp << endl;

    // Pet

    if(ownPet == 'y')
    lifeExp +=3;
    else if(ownPet == 'n')
    lifeExp -=1;
    cout << "Life Expectancy after pet: " << lifeExp << endl;

    // Married

    if(married==1)
        lifeExp -=5;    
    else if(married==2)
        lifeExp -=2;
    else if(married==3)
        lifeExp +=5;
    else if(married==4)
        lifeExp +=7;
    cout << "Life Expectancy after married: " << lifeExp << endl;

    // Caretaker

    if(caretaker== 'y')
        lifeExp -=2;
    else if(caretaker== 'n')
        lifeExp +=0;
    cout << "Life Expectancy after caretaker: " << lifeExp << endl;

    // Job Stress

    if(job==1)
        lifeExp -=5;    
    else if(job==2)
        lifeExp -=2;
    else if(job==3)
        lifeExp += 0;
    else if(job==4)
        lifeExp +=2;
    else if(job==5)
        lifeExp +=5;
    cout << "Life Expectancy after job stress: " << lifeExp << endl;

    // Breakfast

    if(eatBfast=='y')
        lifeExp +=5;
    else if(eatBfast=='n')
        lifeExp -=2;
        cout << "Life Expectancy after breakfast: " << lifeExp << endl;

    // Died

    if(parentsDeath=='y')
        lifeExp -=2;
    else if(parentsDeath=='n')
        lifeExp +=5;
    cout << "Life Expectancy after died: " << lifeExp << endl;

    // Fruits

    if(fruitsDaily=='y')
        lifeExp +=5;
    else if(fruitsDaily=='n')
        lifeExp -=5;
    cout << "Life Expectancy after fruits: " << lifeExp << endl;

    // Vegetables

    if(vegDaily=='y')
        lifeExp +=5;
    else if(vegDaily=='n')
        lifeExp -=5;
    cout << "Life Expectancy after vegetables: " << lifeExp << endl;

    // Friends

    if(hangFriends==1)
        lifeExp -=2;
    else if(hangFriends==2)
        lifeExp +=0;
    else if(hangFriends==3)
        lifeExp +=2;
    cout << "Life Expectancy after friends: " << lifeExp << endl;

    // Education level

    if(eduLvl==1)
        lifeExp -=5;
    else if(eduLvl==2)
        lifeExp -=2;
    else if(eduLvl==3)
        lifeExp +=2;
    else if(eduLvl==4)
        lifeExp +=5;
    else if(eduLvl==5)
        lifeExp +=7;
    cout << "Life Expectancy after education level: " << lifeExp << endl;
    
    // Output final life expectancy
    cout << "************************************************\n";
    cout << "Name: " << userName << endl;
    cout << "Current Age: " << currentAge << endl;
    cout << "Life Expectancy: " << lifeExp << endl;
    cout << "************************************************\n";

    
}

