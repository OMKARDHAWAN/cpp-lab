#include <iostream>
using namespace std;
class Book{
    private:
    int BookId;
    string Title;
    string Author;
    int Price;
    public:
    Book(){
        BookId = 0;
        Title = " " ;
        Author = " ";
        Price = 0;
    }

    void input(){
        cout << "Enter Book Id :" << "\n";
        cin >> BookId;
        cout << "Enter Title Of the Book : " << "\n";
        cin >> Title;
        cout << "Enter Author name : " << "\n";
        cin >> Author;
        cout << "Enter Price of the book :" << "\n";
        cin >> Price;
        cout << "\n";
    };
    
    void display(){
        cout << "Id of Book is : " << BookId << "\n";
        cout << "Title of Book is : " << Title << "\n";
        cout << "Author of Book is : " << Author << "\n";
        cout << "Price of Book is : " << Price << "\n";
        cout << "\n";
    }
};

int main(){
    int n;
    cout << "Enter how many book need to create :" << "\n";
    cin >> n;
    Book B[n];
    for(int i = 0 ; i < n ; i ++){
     B[i].input();
    }
    for(int i = 0 ; i < n ; i ++){
     B[i].display();
    }
    return 0;
}