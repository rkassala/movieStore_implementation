//
//  business.cpp
//  Lab4
//
//  Created by Nguyen Nguyen on 12/10/16.
//  Copyright © 2016 Nguyen Nguyen. All rights reserved.
//

#include "business.h"
#include <iostream>
#include <stdio.h>
#include <ifstream>

Business::Business()
{
 //nothing to do unless we wnat to include business name
}

Business::~Business()
{
 //nothing to do here
}

void Business::buildMovies(istream& input)
{
    string entireLine;

    while(!input.eof())
    {
        getline(input, entireLine);
        
        if(input.eof())
        {
            break;
        }
        Movie* newMovie = MovieFactory::createMovie(entireLine);
        switch(entireLine[0])
        {
            case Comedy::GENRE:
                allComedies.insert(newMovie);
            case Classic::GENRE:
                allClassics.insert(newMovie);
            case Drama::GENRE:
                allDramas.insert(newMovie);
            default:
                break;
        }
        
    }
}
        /*
        //get the genre type for movie
        if(genre == 'F'| genre =='D'| genre=='C'){
            MovieFactory* moviePtr=factory.create(genre);
            moviePtr=0;
        }else{
            input.ignore(256,'\n');
        }
        if(moviePtr !=NULL){
            moviePtr ->setData(input);
            insert(moviePtr, amount);
        }
     */  

void Business::buildCustomers(istream& input)
{
    //*********************************************************
    //*********************************************************
    //*********************************************************
    //*********************************************************
}

void Business::processTransactions(istream& input)
{
    //*********************************************************
    //*********************************************************
    //*********************************************************
    //*********************************************************
}
