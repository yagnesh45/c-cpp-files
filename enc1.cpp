#include <iostream.h>

string caesar_encrypt(string msg, int s)
{
    string ans = "";

    for (int i=0;i<msg.length();i++)
    {
        if (isupper(msg[i]))
            ans += char(int(msg[i]+s-65)%26 +65);
    else
        ans += char(int(msg[i]+s-97)%26 +97);
    }
    return ans;
}

string caesar_decrypt(string msg, int s)
{
    string ans = "";

    for (int i=0;i<msg.length();i++)
    {
        if (isupper(msg[i]))
            ans += char(int(msg[i]-s-65)%26 +65);
    else
        ans += char(int(msg[i]-s-97)%26 +97);
    }
    return ans;
}

int main()
{
    string msg; int s;
    cout << "Enter String to be encrypted   ";
    cin>>msg;
    cout << "Enter Shift value   ";
    cin>>s;
    cout << "Message : " <<msg;
    cout << "\nShift: " << s;
    string encrypt = caesar_encrypt(msg, s);
    string decrypt = caesar_decrypt(encrypt, s);
    cout << "\n Encrypted message: " << encrypt;
    cout << "\n Encrypted message: " << decrypt;
    return 0;
}