/*Problem 1: 													30Marks
There are 100 houses located on a straight line. The first house is numbered 1 and the last one is numbered 100. Some M houses out of these 100 are occupied by cops.
Thief Devu has just stolen PeePee's bag and is looking for a house to hide in.
PeePee uses fast 4G Internet and sends the message to all the cops that a thief named Devu has just stolen her bag and ran into some house.
Devu knows that the cops run at a maximum speed of x houses per minute in a straight line and they will search for a maximum of y minutes. Devu wants to know how many houses are safe for him to escape from the cops. Help him in getting this information.
Input
First line contains T, the number of test cases to follow.
First line of each test case contains 3 space separated integers: M, x and y.
For each test case, the second line contains M space separated integers which represent the house numbers where the cops are residing.
Output
For each test case, output a single line containing the number of houses which are safe to hide from cops.
ConstraintsProblem 1: 													30Marks
There are 100 houses located on a straight line. The first house is numbered 1 and the last one is numbered 100. Some M houses out of these 100 are occupied by cops.
Thief Devu has just stolen PeePee's bag and is looking for a house to hide in.
PeePee uses fast 4G Internet and sends the message to all the cops that a thief named Devu has just stolen her bag and ran into some house.
Devu knows that the cops run at a maximum speed of x houses per minute in a straight line and they will search for a maximum of y minutes. Devu wants to know how many houses are safe for him to escape from the cops. Help him in getting this information.
Input
First line contains T, the number of test cases to follow.
First line of each test case contains 3 space separated integers: M, x and y.
For each test case, the second line contains M space separated integers which represent the house numbers where the cops are residing.
Output
For each test case, output a single line containing the number of houses which are safe to hide from cops.
Constraints
•	1 ≤ T ≤ 104
•	1 ≤ x, y, M ≤ 10
Example
Input:
3
4 7 8
12 52 56 8
2 10 2
21 75
2 5 8
10 51

Output:
0
18
9
Explanation
Example 1 : Cops in house 12 can cover houses 1 to 68, and cops in house 52 can cover the rest of the houses. So, there is no safe house.
Example 2 : Cops in house 21 can cover houses 1 to 41, and cops in house 75 can cover houses 55 to 95, leaving houses numbered 42 to 54, and 96 to 100 safe. So, in total 18 houses are safe.
3
4 7 8
12 52 56 8
2 10 2
21 75
2 5 8
10 51
•	1 ≤ T ≤ 104
•	1 ≤ x, y, M ≤ 10
Example
Input:
3
4 7 8
12 52 56 8
2 10 2
21 75
2 5 8
10 51

Output:
0
18
9
Explanation
Example 1 : Cops in house 12 can cover houses 1 to 68, and cops in house 52 can cover the rest of the houses. So, there is no safe house.
Example 2 : Cops in house 21 can cover houses 1 to 41, and cops in house 75 can cover houses 55 to 95, leaving houses numbered 42 to 54, and 96 to 100 safe. So, in total 18 houses are safe.
*/


#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    std::cin >> t;
    int n1=0;
    int ans[t];
    while(n1 < t)
    {
        int n,h,m;
        std::cin >> n >> h >> m;
        long long int num[n];
        for(int i=0;i<n;i++) std::cin >> num[i];
        long long int mul = h*m;
        int cnt = 0;
        long long int s= 101;
        long long int e =0;
        long long int temp;
        long long int a[101];
        for(int i=1;i<101;i++) a[i] = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=num[i] ; (j <= num[i] + mul) && j <= 100 ; j++)
            {
                a[j] = 1;
                //cout << j << " , ";
            }
            for(int j=num[i]; (j >=num[i] - mul) && j >0 ; j-- )
            {
                a[j] =1;
                 // cout << j << " , ";
            }
        }
        for(int i=1;i<101;i++)
        {
            if(a[i] != 1)
                cnt++;
        }

        ans[n1] = cnt;
        n1++;
    }
    for(int i=0;i<t;i++)
        cout << ans[i] << endl ;
return 0;
}