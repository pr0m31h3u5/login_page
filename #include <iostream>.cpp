#include <iostream>
#include <fstream> 
#include <cstring>
using namespace std;
bool IsloggedIn()
{
    string username, password, un, pw;

    cout << "ведите имя пользователя :";
    cin >> username;

    cout << "введите пароль :";
    cin >> password;

    ifstream read("data\\" + username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password)
    {
        return true; 
    }
    else
    {
        return false;
    }
}

int main()
{
    int choice;
    cout << "1 : регистрация \n2 :войти\nДругое :";
    cin >> choice;
    if (choice == 1)
    {
        string username, password;
        cout << "выберите имя пользователя: ";
        cin >> username;
        cout << "придумайте пароль: ";
        cin >> password;

        //

        ofstream file;
        file.open("data\\" + username + ".txt");

  //rewrite in the file
        file<<"имя пользователя :"<<username<<endl<<"пароль :"<<password;
        file.close();
    main();
    }
    else if(choice==2)
    {
       bool status =IsloggedIn();

       if(!status)
       {
          cout<<"неправильное имя пользоваттеля или пароль :"<<endl;
          return 0;
       }
       else
       {
           cout<<"регистрация завершена успешно"<<endl;
           return 1;
       }
    }
}