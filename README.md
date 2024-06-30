Calendar in C with Happy/Sad Mode
This repository contains a C program that prints a calendar for a given year and month. The program takes the year, month, date to decorate, and mood (happy or sad) as input from the user and then prints the calendar with the specified date highlighted according to the mood.

Features
Prints a calendar for a given year and month.
Highlights the specified date.
Prints a congratulatory message if the mood is happy.
Usage
To use the program, simply compile and run it. You will be prompted to enter the year, month, and date to decorate. You will also be asked to enter the mood (happy or sad). The program will then print the calendar.

Example
Enter the year: 2898
Enter the month (1-12): 3
Enter the date you want to decorate (1-31): 5
Is this date sad (s) or happy (h)? h


        ***** Welcome to 2898 *****



------------------January------------------ 
   Sun   Mon   Tue   Wed   Thu   Fri   Sat  
                       1     2     3     4  
     5     6     7     8     9    10    11  
    12    13    14    15    16    17    18  
    19    20    21    22    23    24    25  
    26    27    28    29    30    31        
------------------February------------------
   Sun   Mon   Tue   Wed   Thu   Fri   Sat  
                                         1  
     2     3     4     5     6     7     8  
     9    10    11    12    13    14    15  
    16    17    18    19    20    21    22  
    23    24    25    26    27    28        
------------------March------------------   
   Sun   Mon   Tue   Wed   Thu   Fri   Sat  
                                         1  
     2     3     4     H     6     7     8  //Here 5 march is highlighted and replaced by H
     9    10    11    12    13    14    15  
    16    17    18    19    20    21    22  
    23    24    25    26    27    28    29  
    30    31
------------------April------------------   
   Sun   Mon   Tue   Wed   Thu   Fri   Sat  
                 1     2     3     4     5  
     6     7     8     9    10    11    12  
    13    14    15    16    17    18    19  
    20    21    22    23    24    25    26  
    27    28    29    30
------------------May------------------     
   Sun   Mon   Tue   Wed   Thu   Fri   Sat  
                             1     2     3  
     4     5     6     7     8     9    10  
    11    12    13    14    15    16    17  
    18    19    20    21    22    23    24  
    25    26    27    28    29    30    31  

------------------June------------------    
   Sun   Mon   Tue   Wed   Thu   Fri   Sat  
     1     2     3     4     5     6     7  
     8     9    10    11    12    13    14
    15    16    17    18    19    20    21
    22    23    24    25    26    27    28
    29    30
------------------July------------------
   Sun   Mon   Tue   Wed   Thu   Fri   Sat
                 1     2     3     4     5
     6     7     8     9    10    11    12
    13    14    15    16    17    18    19
    20    21    22    23    24    25    26
    27    28    29    30    31
------------------August------------------
   Sun   Mon   Tue   Wed   Thu   Fri   Sat
                                   1     2
     3     4     5     6     7     8     9
    10    11    12    13    14    15    16
    17    18    19    20    21    22    23
    24    25    26    27    28    29    30
    31
------------------September------------------
   Sun   Mon   Tue   Wed   Thu   Fri   Sat
           1     2     3     4     5     6
     7     8     9    10    11    12    13
    14    15    16    17    18    19    20
    21    22    23    24    25    26    27
    28    29    30
------------------October------------------
   Sun   Mon   Tue   Wed   Thu   Fri   Sat
                       1     2     3     4
     5     6     7     8     9    10    11
    12    13    14    15    16    17    18
    19    20    21    22    23    24    25
    26    27    28    29    30    31
------------------November------------------
   Sun   Mon   Tue   Wed   Thu   Fri   Sat
                                         1
     2     3     4     5     6     7     8
     9    10    11    12    13    14    15
    16    17    18    19    20    21    22
    23    24    25    26    27    28    29
    30
------------------December------------------
   Sun   Mon   Tue   Wed   Thu   Fri   Sat
           1     2     3     4     5     6
     7     8     9    10    11    12    13
    14    15    16    17    18    19    20
    21    22    23    24    25    26    27
    28    29    30    31

Congratulations! in March!
