//Mohammad Imran
//Write MyBook class
class MyBook : public Book {
    private:
        int price;
    
    public:
        MyBook(string title, string author, int price) : Book(title, author), price(price){
            
        }
    
        void display()
        {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: " << price << endl;
        }
}