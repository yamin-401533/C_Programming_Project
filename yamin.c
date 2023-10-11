#include <stdio.h>

int getFirstDayOfTheYear(int yr)
{
    int day = (yr * 365 + ((yr - 1) / 4) - ((yr - 1) / 100) + ((yr - 1) / 400)) % 7;
    return day;
}

int main()
{
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysInMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, j, td, wd = 0, count = 0, yr, month, dateToDecorate;
    char mood;

    printf("Enter the year: ");
    scanf("%d", &yr);

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    printf("Enter the date you want to decorate (1-31): ");
    scanf("%d", &dateToDecorate);

    printf("Is this date sad (s) or happy (h)? ");
    scanf(" %c", &mood);

    if (yr < 1 || month < 1 || month > 12 || dateToDecorate < 1 || dateToDecorate > daysInMonths[month - 1] || (mood != 's' && mood != 'h'))
    {
        printf("Invalid input. Please enter a valid year, month, date, and mood (s for sad, h for happy).\n");
        return 1;
    }

    printf("\n\n\x1b[101m        ***** Welcome to %d *****         \n\x1b[0m\n\n", yr);

    if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0))
    {
        daysInMonths[1] = 29;
    }

    wd = getFirstDayOfTheYear(yr);

    for (i = 0; i < 12; i++)
    {
        printf("\n\x1b[105m------------------%s------------------\x1b[0m\n", months[i]);
        printf("\x1b[103m   Sun   Mon   Tue   Wed   Thu   Fri   Sat\x1b[0m\n");

        for (count = 1; count <= wd; count++)
        {
            printf("      ");
        }

        td = daysInMonths[i];

        for (j = 1; j <= td; j++)
        {
            if (i + 1 == month && j == dateToDecorate)
            {
                if (mood == 's')
                {
                    printf("\x1b[45m     S\x1b[0m");
                }
                else if (mood == 'h')
                {
                    printf("\x1b[45m     H\x1b[0m");
                }
            }
            else
            {
                printf("%6d", j);
            }

            wd++;

            if (wd > 6)
            {
                wd = 0;
                printf("\n");
            }
        }
    }

    if (mood == 'h')
    {
        printf("\n\n\x1b[45mCongratulations! in %s!\x1b[0m\n", months[month - 1]);
    }

    return 0;
}

// High Intensty backgrounds  Value Color :  1) \e[0;100m  Black   ;  2) \e[0;101m	 Red ;  3) \e[0;103m  Yellow ;  4) \e[0;104m  Blue ;  5) \e[0;105m  Purple ; 6)  \e[0;106m	Cyan ;