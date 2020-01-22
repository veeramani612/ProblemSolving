#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {

long length = s.length(); 
long flag = 0;
long temp = 0;
long rem = 0; 
long div = 0;
long countFlag = 0;
for (int i =0; i<length; i++)
{
    if(s[i]=='a')
    flag = flag + 1;
    else 
    temp = temp + 1;
}
rem = n%(flag+temp);
for (int i=0; i<rem; i++)
{
    if(s[i] == 'a')
    {
        countFlag = countFlag + 1;
    }
}
div = n/(flag + temp); 
return ((flag*div)+countFlag);
/*string lilasString;
long flag = 0; 
int length = s.length();
for (long i=1; i<=n; )
{
    lilasString = lilasString + s;
    i = i+length;
}
long diff = 0;
diff= lilasString.length() - n;
if(lilasString.length() > n)
{
    int i=0;
    do
    {
        lilasString.erase(lilasString.length() - i);
        i++;
    }while(i<diff);   
}
for (long i=0; i<lilasString.length(); i++)
{
    if(lilasString[i] == 'a')
      flag = flag +1;   
}
return flag;*/
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
