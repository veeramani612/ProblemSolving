#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the designerPdfViewer function below.
int designerPdfViewer(vector<int> h, string word) {

    int stringLength = word.length(); 
    int breadth = 0;
    int max = 0; 
    for(int i=0; i<word.size(); i++)
    {
        if(word[i] == 'A' || word[i] == 'a')
        {
            breadth = h[0]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'B' || word[i] == 'b')
        {
            breadth = h[1]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'C' || word[i] == 'c')
        {
            breadth = h[2]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'D' || word[i] == 'd')
        {
            breadth = h[3]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'E' || word[i] == 'e')
        {
            breadth = h[4]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'F' || word[i] == 'f')
        {
            breadth = h[5]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'G' || word[i] == 'g')
        {
            breadth = h[6]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'H' || word[i] == 'h')
        {
            breadth = h[7]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'I' || word[i] == 'i')
        {
            breadth = h[8]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'J' || word[i] == 'j')
        {
            breadth = h[9]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'K' || word[i] == 'k')
        {
            breadth = h[10]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'L' || word[i] == 'l')
        {
            breadth = h[11]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'M' || word[i] == 'm')
        {
            breadth = h[12]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'N' || word[i] == 'n')
        {
            breadth = h[13]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'O' || word[i] == 'o')
        {
            breadth = h[14]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'P' || word[i] == 'p')
        {
            breadth = h[15]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'Q' || word[i] == 'q')
        {
            breadth = h[16]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'R' || word[i] == 'r')
        {
            breadth = h[17]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'S' || word[i] == 's')
        {
            breadth = h[18]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'T' || word[i] == 't')
        {
            breadth = h[19]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'U' || word[i] == 'u')
        {
            breadth = h[20]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'V' || word[i] == 'v')
        {
            breadth = h[21]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'W' || word[i] == 'w')
        {
            breadth = h[22]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'X' || word[i] == 'x')
        {
            breadth = h[23]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'Y' || word[i] == 'y')
        {
            breadth = h[24]; 
            if(breadth > max)
                max = breadth;
        }
        if(word[i] == 'Z' || word[i] == 'z')
        {
            breadth = h[25]; 
            if(breadth > max)
                max = breadth;
        }
    }
    return max*stringLength;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string h_temp_temp;
    getline(cin, h_temp_temp);

    vector<string> h_temp = split_string(h_temp_temp);

    vector<int> h(26);

    for (int i = 0; i < 26; i++) {
        int h_item = stoi(h_temp[i]);

        h[i] = h_item;
    }

    string word;
    getline(cin, word);

    int result = designerPdfViewer(h, word);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
