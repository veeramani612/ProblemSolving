#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    int length = s.length();
    int hh = stoi(s.substr(0,2));
    int mm = stoi(s.substr(3,2));
    int ss = stoi(s.substr(6,2));
    char temp = s.at(8);
    string res;
    if (temp == 'A' && hh == 12)
      {
          hh = 00;
          s[0] = '0';
          s[1] = '0';

          
      }
          else if (temp == 'P' && hh != 12) 
          {
              hh = hh + 12;
              res = to_string(hh);
              s[0] = res[0];
              s[1] = res[1];
              
          }
          else if (temp == 'P' && hh == 12)
          {
                hh = 12;
                res = to_string(hh);
                s[0] = res[0];
                s[1] = res[1];
               
          }
          s.pop_back();
          s.pop_back();
          return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
