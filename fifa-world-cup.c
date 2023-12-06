//Author: Plabon Rahman
//Github: https://github.com/rahmanplabon
//Last Modified: 06/12/2023; 13:19
//Code Purpose: FIFA World Cup History
#include<stdio.h>
int  main()
{
    printf("FIFA World Cup History");
    int year;
    printf("\n");
    printf("Enter Year:");
    scanf("%d", &year);
    
    switch(year)
    {
        case 1930:
        printf(" 🏆 Uruguay 4 - 2 Argentina\n");
        printf("Golden Ball ⚽: Guillermo Stabile ");        
        break;
        
        case 1934:
        printf(" 🏆 Italy 2 - 1 Czechoslovakia\n");
        printf("Golden Ball ⚽:  Oldrich Nejedly\n");
        break;
        
        case 1938:
        printf(" 🏆 Italy 4 - 2 Hungary\n");
        printf("Golden Ball ⚽: Leonidas\n");
        break;
        
        case 1950:
        printf(" 🏆 Uruguay 2 - 1 Brazil\n");
        printf("Golden Ball ⚽: Zinedine Zidane\n");
        break;
        
        case 1954:
        printf(" 🏆 West German 3 - 2 Hungary\n");
        printf("Golden Ball ⚽: Zinedine Zidane\n");
        
        case 1958:
        printf(" 🏆 Brazil 5 - 2 Sweden\n");
        printf("Golden Ball ⚽: Zinedine Zidane\n");
        break;
        
        case 1962:
        printf(" 🏆 Brazil 3 - 1 Czechoslovakia\n");
        printf("Golden Ball ⚽: Zinedine Zidane\n");
        break;
        
        case 1966:
        printf(" 🏆 England 4 - 2 West German\n");
        printf("Golden Ball ⚽: Zinedine Zidane\n");
        break;
        
        case 1970:
        printf(" 🏆 Brazil 4 - 1 Italy\n");
        printf("Golden Ball ⚽: Zinedine Zidane\n");
        break;
        
        case 1974:
        printf(" 🏆 West Germany 2 - 0 Netherlands\n");
        printf("Golden Ball ⚽: Zinedine Zidane\n");
        break;
        
        case 1978:
        printf(" 🏆 Argentina 3 - 0 Netherlands\n");
        printf("Golden Ball ⚽: Zinedine Zidane\n");
        break;
        
        case 1982:
        printf(" 🏆 Italy 3 - 1 West German");
        break;
        
        case 1986:
        printf(" 🏆 Argentina 3 - 0 West German");
        break;
        
        case 1990:
        printf(" 🏆 Germany 1 - 0 Argentina");
        break;
        
        case 1994:
        printf(" 🏆 Brazil 0 - 0 Italy\nPenalties 3 - 2");
        break;
        
        case 1998:
        printf(" 🏆 France 3 - 0 Brazil");
        printf("Golden Ball ⚽: Zinedine Zidane");
        printf("Golden Boot 👟: Miroslav Klose");
        printf("Golden Gloves 🧤: Gianluigi Buffon");
        printf("Best Young Player 👦: Lukas Podolski");
        break;
        
        case 2002:
        printf(" 🏆 Brazil 2 - 0 Germany\n");
        printf("Golden Ball ⚽: Zinedine Zidane\n");
        printf("Golden Boot 👟: Miroslav Klose\n");
        printf("Golden Gloves 🧤: Gianluigi Buffon\n");
        printf("Best Young Player 👦: Lukas Podolski\n");
        break;
        
        case 2006:
        printf(" 🏆 Italy 1 - 1 France\nPenalties 5 - 3\n");
        printf("Golden Ball ⚽: Zinedine Zidane\n");
        printf("Golden Boot 👟: Miroslav Klose\n");
        printf("Golden Gloves 🧤: Gianluigi Buffon\n");
        printf("Best Young Player 👦: Lukas Podolski\n");
        break;
        
        case 2010:
        printf(" 🏆 Spain 1 - 0 Netherlands\n");
        printf("Golden Ball ⚽: Diego Forlan\n");
        printf("Golden Boot 👟: Thomas Muller\n");
        printf("Golden Gloves 🧤: Iker Casillas\n");
        printf("Best Young Player 👦: Thomas Muller\n");
        break;
        
        case 2014:
        printf(" 🏆 Germany 1 - 0 Argentina\n");
        printf("Golden Ball ⚽: Lionel Messi\n");
        printf("Golden Boot 👟: James Rodriguez\n");
        printf("Golden Gloves 🧤: Manuel Neuer\n");
        printf("Best Young Player 👦: Paul Pogba\n");
        break;
        
        case 2018:
        printf(" 🏆 France 4 - 2 Croatia\n");
        printf("Golden Ball ⚽: Luka Modric\n");
        printf("Golden Boot 👟: Harry Kane\n");
        printf("Golden Gloves 🧤: Thibaut Courtois\n");
        printf("Best Young Player 👦: Kylian Mbappe\n");
        break;
        
        case 2022:
        printf(" 🏆 Argentina 3 - 3 France(Penalties 4 - 2)\n");
        printf("Golden Ball ⚽: Lionel Messi\n");
        printf("Golden Boot 👟: Kylian Mbappe\n");
        printf("Golden Gloves 🧤:Emiliano Martinez\n");
        printf("Best Young Player 👦: Enzo Farnandez\n");
        break;

        default:
        printf("Type the years when FIFA world cup were held. 1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974, 1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014, 2018, 2022");
        break;

    }
    return 0;
    
}
