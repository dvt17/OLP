#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

// Hàm chuẩn hóa chuỗi (C=1)
void normalizeString(const string &s)
{
    stringstream ss(s);
    string word;
    vector<string> words;
    while (ss >> word)
    {
        words.push_back(word);
    }
    for (size_t i = 0; i < words.size(); ++i)
    {
        cout << words[i] << (i == words.size() - 1 ? "" : " ");
    }
    cout << endl;
}

// Hàm đếm từ (C=2)
void countWords(const string &s)
{
    stringstream ss(s);
    string word;
    int count = 0;
    while (ss >> word)
    {
        count++;
    }
    cout << count << endl;
}

// Hàm tìm từ dài nhất (C=3)
void findLongestWord(const string &s)
{
    stringstream ss(s);
    string word;
    string longestWord = "";
    while (ss >> word)
    {
        if (word.length() > longestWord.length())
        {
            longestWord = word;
        }
    }
    cout << longestWord << endl;
}

// Hàm viết hoa chữ cái đầu (C=4)
void capitalizeFirstLetter(string s)
{
    if (s.empty())
    {
        cout << endl;
        return;
    }
    // Chuyển toàn bộ chuỗi về chữ thường
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    // Viết hoa chữ cái đầu tiên
    s[0] = toupper(s[0]);

    // Viết hoa chữ cái sau mỗi khoảng trắng
    for (size_t i = 1; i < s.length(); ++i)
    {
        if (s[i - 1] == ' ' && isalpha(s[i]))
        {
            s[i] = toupper(s[i]);
        }
    }
    cout << s << endl;
}

// Hàm thay thế chuỗi (C=5)
void replaceSubstring(string s, const string &from, const string &to)
{
    size_t start_pos = 0;
    while ((start_pos = s.find(from, start_pos)) != string::npos)
    {
        s.replace(start_pos, from.length(), to);
        start_pos += to.length(); // Di chuyển con trỏ tới sau chuỗi vừa thay thế
    }
    cout << s << endl;
}

int main()
{
    // Tăng tốc độ nhập xuất
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string line;
    getline(cin, line);

    int c;
    cin >> c;

    // Xử lý xuống dòng còn lại sau khi đọc số C
    cin.ignore();

    switch (c)
    {
    case 1:
        normalizeString(line);
        break;
    case 2:
        countWords(line);
        break;
    case 3:
        findLongestWord(line);
        break;
    case 4:
        capitalizeFirstLetter(line);
        break;
    case 5:
    {
        string from, to;
        getline(cin, from);
        getline(cin, to);
        replaceSubstring(line, from, to);
        break;
    }
    default:
        break;
    }

    return 0;
}
