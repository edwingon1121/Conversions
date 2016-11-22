//  Edwin Gonzalez
//  ITP 165, Spring 2016
//  Homework 2
//  edwingon@usc.edu
//  hw02.cpp
//  hw02
//
//  Created by Edwin Gonzalez on 1/22/16.
//  Copyright © 2016 Edwin Gonzalez. All rights reserved.
//

#include <iostream>
#include <string>

int main()
{
    int userMenuChoice=0;
    std::string conversionType="anything";
    double userNumberBeingCoverted=0;
    double degreesC=0;
    double degressF=0;
    double kilometers=0;
    double miles=0;
    double liters=0;
    double gallons=0;

    std::cout<<"Welcome to to 165's SI <-> Metric Calulator"<<std::endl;
    std::cout<<"\t\t Menu:"<<std::endl;
    std::cout<<"\t1: Temperature (Fahrenheit/Celsius)\n";
    std::cout<<"\t2: Distance (Miles/Kilometers)"<<std::endl;
    std::cout<<"\t3: Volumetric (Gallons/Liters)"<<std::endl;
    
    //Prompting the user for what unit they start with and the number they wish to convert
    std::cout<<"What would you like to convert? ";
    std::cin>>userMenuChoice;
    std::cout<<"Are you starting with SI or Metric units? ";
    std::cin>>conversionType;
    std::cout<<"Enter value to convert: ";
    std::cin>>userNumberBeingCoverted;
    
    //The switch below is setting up the menu for temperature, distance, and volumetric
    switch (userMenuChoice)
    {
            //This is for temperature.
        case 1:
            if ( conversionType=="Metric"||conversionType=="metric")
            {
                degreesC=userNumberBeingCoverted;
                double degreesF=(degreesC*1.8)+32;
                std::cout<<"Your final result is: "<<degreesF<<" degrees Fahrenheit"<<std::endl;
            }
            else if (conversionType=="SI"||conversionType=="si")
            {
                degressF=userNumberBeingCoverted;
                double  degreesC=(degressF-32)/1.8;
                std::cout<<"Your final result is: "<<degreesC<<" degrees Celsius"<<std::endl;
            }
            else
            {
                std::cout<<"You did not choose SI or Metric"<<std::endl;
            }
            break;
            
            //This is for distance.
        case 2:
            if (conversionType=="Metric"||conversionType=="metric")
            {
                kilometers=userNumberBeingCoverted;
                double miles=kilometers*0.62137;
                std::cout<<"Your final result is: "<<miles<<" miles"<<std::endl;
            }
            else if (conversionType=="SI"||conversionType=="si")
            {
                miles=userNumberBeingCoverted;
                double kilometers=miles/0.62137;
                std::cout<<"Your final result is: "<<kilometers<<" kilometers"<<std::endl;;
            }
            else
            {
                std::cout<<"You did not choose SI or Metric"<<std::endl;
            }
        
            break;
            
            //This is for volumetric.
        case 3:
            if (conversionType=="Metric"||conversionType=="metric")
            {
                liters=userNumberBeingCoverted;
                double gallons=liters*0.26417;
                std::cout<<"Your final result is: "<<gallons<<" gallons"<<std::endl;
            }
            else if (conversionType=="SI"||conversionType=="si")
            {
                gallons=userNumberBeingCoverted;
                double liters=gallons/0.26417;
                std::cout<<"Your final result is: "<<liters<<" liters"<<std::endl;
            }
            else
            {
                std::cout<<"You did not choose SI or Metric"<<std::endl;
            }
            break;
            
         //If the user does not enter a number 1-3 the case below will run and display an invalid input
        default:
            std::cout<<"Please try again. Typed in a invalid input for menu. Choose a value either 1, 2, or 3"<<std::endl;
            break;
    }
    return 0;
}
