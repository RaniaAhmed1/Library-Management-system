#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

bool flag;

void main_page()
{
    string choice1;
    string type,customer_name,telephone,manager_password;
    cin>>choice1;
    cout<<"\033[2J\033[H";

    while(choice1!="1" && choice1!="2")
    {
      cout<<"\n\n\t\t\t\t\t\t   Welcome to library\n\n\n\n\n\t\t\t\t\t\t\t1- manager\n\t\t\t\t\t\t\t2- customer\n\n\n\t\t\t\t\t\tplease enter a valid number : ";
      cin>>choice1;
      cout<<"\033[2J\033[H";

    }


    if(choice1=="1")
    {    flag=true;

    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\tenter the password : " ;
    cin>>manager_password;
    if(manager_password!="1234")
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\tenter a valid password : ";
    while (manager_password!="1234")
    {
        cout<<"\033[2J\033[H";
        cout<<"\n\n\n\n\n\n\t\t\t\t\t\tenter a valid password : ";
        cin>>manager_password;
    }
    cout<<"\033[2J\033[H";
    cout<<"\n\n\n\n\t\t\t\t\t\t\t1- add a book\n\n\t\t\t\t\t\t\t2- update a book\n\n\t\t\t\t\t\t\t3-delete a book\n\n\n\t\t\t\t\t\tplease enter your number : ";
    }
    // chioce2 will take the manager choice

    else if(choice1=="2")
    {  flag=false;

    cout<<"\n\t\t\t\t\t\t\tenter your data :\n\n\n\n\n";
    cout<<"\ttype (student / staff): ";
    cin>>type;
    cout<<"\n\n\tname : ";
    cin.ignore();
    getline (cin,customer_name);
    cout<<"\n\n\ttelephone : ";
    cin>>telephone;
    cout<<"\033[2J\033[H";
    cout<<"\n\n\n\n\t\t\t\t\t\tregisteration completed!\n\n\n\n\n\n\n\n\n";

    cout<<"\n\n\n\t\t\t\t\t\t\t1- borrow\n\n\t\t\t\t\t\t\t2- return\n\n\n\t\t\t\t\t\tplease enter your number : ";
    // choice3 will take the customer choice
    }
}

                    //********************************************************


 vector<string>science_books={"Chemistry","Physics","Biology"}; //category 1
 vector<string>history_books={"Ancient Egypt","Cleopatra","Nefertiti"};//category 2
 vector<string>math_books={"Basic Mathematics","Genius","Theorems"}; //category 3



void manager_interface()
{
string add_update_delete,category_add,category_update,update_element,category_delete,delete_element;
int i;
string new_book_name,updated_name;

 cin>>add_update_delete;
 cout<<"\033[2J\033[H";
 while (add_update_delete!="1" && add_update_delete!="2" && add_update_delete!="3")
 {
    cout<<"\n\n\n\n\t\t\t\t\t\t\t1- add a book\n\n\t\t\t\t\t\t\t2- update a book\n\n\t\t\t\t\t\t\t3-delete a book\n\n\n\t\t\t\t\t\tplease enter a valid number : ";
    cin>>add_update_delete;
    cout<<"\033[2J\033[H";

 }


        if(add_update_delete=="1")  //add new book
       {

         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t1- science\n\n\t\t\t\t\t\t\t2- hitory\n\n\t\t\t\t\t\t\t3- math\n\n\n\n\t\t\t\t\t\tenter the category number : ";
         cin>>category_add;
         cout<<"\033[2J\033[H";



         while(category_add!="1" && category_add!="2" && category_add!="3")
          {
            cout<<"\033[2J\033[H";
            cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t1- science\n\n\t\t\t\t\t\t\t2- hitory\n\n\t\t\t\t\t\t\t3- math\n\n\n\n\t\t\t\t\t\tenter a valid category number : ";
            cin>>category_add;
           cout<<"\033[2J\033[H";

          }


         if(category_add=="1")       //add in category of science
           {
             cout<<"\n\n\n\n\n\t\t\t\t\tenter the new book name : ";
             cin.ignore();
             getline (cin,new_book_name);
             science_books.push_back(new_book_name);
             cout<<"\n\n\n\n\n\t\t\t\t"<< science_books.at(0)<<"      "<<science_books.at(1)<<"      "<<science_books.at(2)<<"       "<<science_books.at(3);
             cout<<"\n\n\n\n\t\t\t\t\t         added successfully !";
           }



           if(category_add=="2")       //add in category of hitory
           {
             cout<<"\n\n\n\n\n\t\t\t\t\tenter the new book name : ";
             cin.ignore();
             getline (cin,new_book_name);
             history_books.push_back(new_book_name);
             cout<<"\n\n\n\n\n\t\t\t\t"<< history_books.at(0)<<"      "<<history_books.at(1)<<"      "<<history_books.at(2)<<"       "<<history_books.at(3);
             cout<<"\n\n\n\n\t\t\t\t\t         added successfully !";

           }


          if(category_add=="3")         //add in category of math
           {
             cout<<"\n\n\n\n\n\t\t\t\t\tenter the new book name : ";
             cin.ignore();
             getline (cin,new_book_name);
             math_books.push_back(new_book_name);
             cout<<"\n\n\n\n\n\t\t\t\t"<< math_books.at(0)<<"      "<<math_books.at(1)<<"      "<<math_books.at(2)<<"      "<<math_books.at(3);
             cout<<"\n\n\n\n\t\t\t\t\t           added successfully !";

           }
       }

                                //*second feature******************


       if(add_update_delete=="2")  //update book
       {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t1- science\n\n\t\t\t\t\t\t\t2- hitory\n\n\t\t\t\t\t\t\t3- math\n\n\n\n\t\t\t\t\t\tenter the category number : ";
         cin>>category_update;
         cout<<"\033[2J\033[H";



         while(category_update!="1" && category_update!="2" && category_update!="3")
          {
            cout<<"\033[2J\033[H";
            cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t1- science\n\n\t\t\t\t\t\t\t2- hitory\n\n\t\t\t\t\t\t\t3- math\n\n\n\n\t\t\t\t\t\tenter a valid category number : ";
            cin>>category_update;
            cout<<"\033[2J\033[H";

          }


         if(category_update=="1")   //update in category of science
         {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<science_books.at(0)<<"     "<<"1- "<<science_books.at(1)<<"     "<<"2- "<<science_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tchoose a number from 0 to 2 : ";
            cin>>update_element;
            cout<<"\033[2J\033[H";

          while (update_element!="0" && update_element!="1" && update_element!="2")
          {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<science_books.at(0)<<"     "<<"1- "<<science_books.at(1)<<"     "<<"2- "<<science_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tchoose a valid number from 0 to 2 : ";
            cin>>update_element;
            cout<<"\033[2J\033[H";

          }


             if(update_element=="0")   //the index of updated element
             {
                cout<<"\n\n\n\n\t\t\t\t\tenter the updated name : ";
                cin.ignore();
                getline (cin,updated_name);
                science_books.at(0)=updated_name;
                cout<<"\n\n\n\n\n\t\t\t\t\t"<< science_books.at(0)<<"      "<<science_books.at(1)<<"      "<<science_books.at(2);
                cout<<"\n\n\n\n\t\t\t\t\t         updated successfully !";
             }


             if(update_element=="1")   //the index of updated element
             {
                cout<<"\n\n\n\n\t\t\t\t\tenter the updated name : ";
                cin.ignore();
                getline (cin,updated_name);
                science_books.at(1)=updated_name;
                cout<<"\n\n\n\n\n\t\t\t\t\t"<< science_books.at(0)<<"      "<<science_books.at(1)<<"      "<<science_books.at(2);
                cout<<"\n\n\n\n\t\t\t\t\t         updated successfully !";
             }


             if(update_element=="2")   //the index of updated element
             {
                cout<<"\n\n\n\n\t\t\t\t\tenter the updated name : ";
                cin.ignore();
                getline (cin,updated_name);
                science_books.at(2)=updated_name;
                cout<<"\n\n\n\n\n\t\t\t\t\t"<< science_books.at(0)<<"      "<<science_books.at(1)<<"      "<<science_books.at(2);
                cout<<"\n\n\n\n\t\t\t\t\t         updated successfully !";
             }

         }


       }

          if(category_update=="2")   //update in category of hitory
         {

             cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<history_books.at(0)<<"     "<<"1- "<<history_books.at(1)<<"     "<<"2- "<<history_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t        choose a number from 0 to 2 : ";
            cin>>update_element;
            cout<<"\033[2J\033[H";


             while (update_element!="0" && update_element!="1" && update_element!="2")
          {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<history_books.at(0)<<"     "<<"1- "<<history_books.at(1)<<"     "<<"2- "<<history_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tchoose a valid number from 0 to 2 : ";
            cin>>update_element;
            cout<<"\033[2J\033[H";

          }


             if(update_element=="0")   //the index of updated element
             {
                cout<<"\n\n\n\n\t\t\t\t\tenter the updated name : ";
                cin.ignore();
                getline (cin,updated_name);
                history_books.at(0)=updated_name;
                cout<<"\n\n\n\n\n\t\t\t\t\t"<< history_books.at(0)<<"      "<<history_books.at(1)<<"      "<<history_books.at(2);
                cout<<"\n\n\n\n\t\t\t\t\t        updated successfully !";
             }


               if(update_element=="1")   //the index of updated element
             {
                cout<<"\n\n\n\n\t\t\t\t\tenter the updated name : ";
                cin.ignore();
                getline (cin,updated_name);
                history_books.at(1)=updated_name;
                cout<<"\n\n\n\n\n\t\t\t\t\t"<< history_books.at(0)<<"      "<<history_books.at(1)<<"      "<<history_books.at(2);
                cout<<"\n\n\n\n\t\t\t\t\t        updated successfully !";
             }


               if(update_element=="2")   //the index of updated element
             {
                cout<<"\n\n\n\n\t\t\t\t\tenter the updated name : ";
                cin.ignore();
                getline (cin,updated_name);
                history_books.at(2)=updated_name;
                cout<<"\n\n\n\n\n\t\t\t\t\t"<< history_books.at(0)<<"      "<<history_books.at(1)<<"      "<<history_books.at(2);
                cout<<"\n\n\n\n\t\t\t\t\t        updated successfully !";
             }



         }

             if(category_update=="3")   //update in category of math
         {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<math_books.at(0)<<"     "<<"1- "<<math_books.at(1)<<"     "<<"2- "<<math_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t        choose a number from 0 to 2 : ";
            cin>>update_element;
            cout<<"\033[2J\033[H";


             while (update_element!="0" && update_element!="1" && update_element!="2")
          {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<math_books.at(0)<<"     "<<"1- "<<math_books.at(1)<<"     "<<"2- "<<math_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tchoose a valid number from 0 to 2 : ";
            cin>>update_element;
            cout<<"\033[2J\033[H";

          }



             if(update_element=="0")   //the index of updated element
             {
                cout<<"\n\n\n\n\t\t\t\t\tenter the updated name : ";
                cin.ignore();
                getline (cin,updated_name);
                math_books.at(0)=updated_name;
                cout<<"\n\n\n\n\n\t\t\t\t\t"<< math_books.at(0)<<"      "<<math_books.at(1)<<"      "<<math_books.at(2);
                cout<<"\n\n\n\n\t\t\t\t\t       updated successfully !";
             }


              if(update_element=="1")   //the index of updated element
             {
                cout<<"\n\n\n\n\t\t\t\t\t      enter the updated name : ";
                cin.ignore();
                getline (cin,updated_name);
                math_books.at(1)=updated_name;
                cout<<"\n\n\n\n\n\t\t\t\t\t"<< math_books.at(0)<<"      "<<math_books.at(1)<<"      "<<math_books.at(2);
                cout<<"\n\n\n\n\t\t\t\t\t             updated successfully !";
             }



             if(update_element=="2")   //the index of updated element
             {
                cout<<"\n\n\n\n\t\t\t\t\t      enter the updated name : ";
                cin.ignore();
                getline (cin,updated_name);
                math_books.at(2)=updated_name;
                cout<<"\n\n\n\n\n\t\t\t\t\t"<< math_books.at(0)<<"      "<<math_books.at(1)<<"      "<<math_books.at(2);
                cout<<"\n\n\n\n\t\t\t\t\t             updated successfully !";
             }


         }

                //third feature**************************
       if(add_update_delete=="3")
       {
           cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t1- science\n\n\t\t\t\t\t\t\t2- hitory\n\n\t\t\t\t\t\t\t3- math\n\n\n\n\t\t\t\t\t\tenter the category number : ";
           cin>>category_delete;
           cout<<"\033[2J\033[H";


           while(category_delete!="1" && category_delete!="2" && category_delete!="3")
          {
            cout<<"\033[2J\033[H";
            cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t1- science\n\n\t\t\t\t\t\t\t2- hitory\n\n\t\t\t\t\t\t\t3- math\n\n\n\n\t\t\t\t\t\tenter a valid category number : ";
            cin>>category_delete;
            cout<<"\033[2J\033[H";

          }


           if (category_delete=="1")   //delete in category of science
           {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<science_books.at(0)<<"     "<<"1- "<<science_books.at(1)<<"     "<<"2- "<<science_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tchoose a number from 0 to 2 : ";
            cin>>delete_element; //index of deleted element
            cout<<"\033[2J\033[H";


      while (delete_element!="0" && delete_element!="1" && delete_element!="2")
          {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<science_books.at(0)<<"     "<<"1- "<<science_books.at(1)<<"     "<<"2- "<<science_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tchoose a valid number from 0 to 2 : ";
            cin>>delete_element;
            cout<<"\033[2J\033[H";

          }

             for(i=0 ; i<2 ; i++)
             {
                if(i==stoi(delete_element))
                {
                  science_books.erase(science_books.begin()+i);
                }

             }
                cout<<"\n\n\n\n\t\t\t\t\t\t    "<<science_books.at(0)<<"     "<<science_books.at(1);
                cout<<"\n\n\n\n\n\n\n\t\t\t\t\tthe element has been deleted successfully !";



           }


            if (category_delete=="2")   //delete in category of history
           {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<history_books.at(0)<<"     "<<"1- "<<history_books.at(1)<<"     "<<"2- "<<history_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tchoose a number from 0 to 2 : ";
            cin>>delete_element; //index of deleted element
            cout<<"\033[2J\033[H";

      while (delete_element!="0" && delete_element!="1" && delete_element!="2")
          {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<history_books.at(0)<<"     "<<"1- "<<history_books.at(1)<<"     "<<"2- "<<history_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tchoose a valid number from 0 to 2 : ";
            cin>>delete_element;
            cout<<"\033[2J\033[H";

          }

             for(i=0 ; i<2 ; i++)
             {
                if(i==stoi(delete_element))
                {
                  history_books.erase(history_books.begin()+i);
                }

             }
                cout<<"\n\n\n\n\t\t\t\t\t\t    "<<history_books.at(0)<<"     "<<history_books.at(1);
                cout<<"\n\n\n\n\n\n\n\t\t\t\t\t   the element has been deleted successfully !";

           }


            if (category_delete=="3")   //delete in category of math
           {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<math_books.at(0)<<"     "<<"1- "<<math_books.at(1)<<"     "<<"2- "<<math_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tchoose a number from 0 to 2 : ";
            cin>>delete_element; //index of deleted element
            cout<<"\033[2J\033[H";

      while (delete_element!="0" && delete_element!="1" && delete_element!="2")
          {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<math_books.at(0)<<"     "<<"1- "<<math_books.at(1)<<"     "<<"2- "<<math_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tchoose a valid number from 0 to 2 : ";
            cin>>delete_element;
            cout<<"\033[2J\033[H";

          }

             for(i=0 ; i<2 ; i++)
             {
                if(i==stoi(delete_element))
                {
                  math_books.erase(math_books.begin()+i);
                }

             }
                cout<<"\n\n\n\n\t\t\t\t\t\t    "<<math_books.at(0)<<"     "<<math_books.at(1);
                cout<<"\n\n\n\n\n\n\n\t\t\t\t\t   the element has been deleted successfully !";


           }


       }

}

               //**************************************************************************

  bool flag2;

void user_interface()
{

  string borrow_return,category_borrow,borrow_element,borrowOrNot;
  string full_name,address,book_name,book_author;

  cin>>borrow_return;
  cout<<"\033[2J\033[H";

  while (borrow_return!="1" && borrow_return!="2")
  {
    cout<<"\n\n\n\t\t\t\t\t\t\t1- borrow\n\n\t\t\t\t\t\t\t2- return\n\n\n\t\t\t\t\t\tplease enter a valid number : ";
     cin>>borrow_return;
     cout<<"\033[2J\033[H";

  }

  if (borrow_return=="1")
  {
  cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t1- science\n\n\t\t\t\t\t\t\t2- hitory\n\n\t\t\t\t\t\t\t3- math\n\n\n\n\t\t\t\t\t\tenter the category number : ";
  cin>>category_borrow;
   cout<<"\033[2J\033[H";

   while (category_borrow!="1" && category_borrow!="2" && category_borrow!="3")
   {

    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t1- science\n\n\t\t\t\t\t\t\t2- hitory\n\n\t\t\t\t\t\t\t3- math\n\n\n\n\t\t\t\t\t\tenter the category number : ";
    cin>>category_borrow;
    cout<<"\033[2J\033[H";



   }


           if (category_borrow=="1")   //borrow in category of science
           {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<science_books.at(0)<<"     "<<"1- "<<science_books.at(1)<<"     "<<"2- "<<science_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tchoose a number from 0 to 2 : ";
            cin>>borrow_element; //index of borrow element
            cout<<"\033[2J\033[H";
            while(borrow_element!="0" && borrow_element!="1" && borrow_element!="2")
            {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<science_books.at(0)<<"     "<<"1- "<<science_books.at(1)<<"     "<<"2- "<<science_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tchoose a valid number from 0 to 2 : ";
            cin>>borrow_element;
            cout<<"\033[2J\033[H";

            }
           }


           if (category_borrow=="2")   //borrow in category of history
           {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<history_books.at(0)<<"     "<<"1- "<<history_books.at(1)<<"     "<<"2- "<<history_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tchoose a number from 0 to 2 : ";
            cin>>borrow_element; //index of borrow element
            cout<<"\033[2J\033[H";
            while(borrow_element!="0" && borrow_element!="1" && borrow_element!="2")
            {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<history_books.at(0)<<"     "<<"1- "<<history_books.at(1)<<"     "<<"2- "<<history_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tchoose a valid number from 0 to 2 : ";
            cin>>borrow_element;
            cout<<"\033[2J\033[H";

            }
           }


           if (category_borrow=="3")   //borrow in category of math
           {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<math_books.at(0)<<"     "<<"1- "<<math_books.at(1)<<"     "<<"2- "<<math_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tchoose a number from 0 to 2 : ";
            cin>>borrow_element; //index of borrow element
            cout<<"\033[2J\033[H";
            while(borrow_element!="0" && borrow_element!="1" && borrow_element!="2")
            {
            cout<<"\n\n\n\n\t\t\t\t\t"<<"0- "<<math_books.at(0)<<"     "<<"1- "<<math_books.at(1)<<"     "<<"2- "<<math_books.at(2);
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tchoose a valid number from 0 to 2 : ";
            cin>>borrow_element;
            cout<<"\033[2J\033[H";

            }
           }


           cout<<"\n\n\n\n\n\t\t\t\t\tthe due date for return will be after 14 days";
           cout<<"\n\n\n\n\n\n\t\t\t\t\t\t if you want to continue enter 1\n\t\t\t\t\t    if you want to logout and exit enter 0 :";
           cin>>borrowOrNot;
           cout<<"\033[2J\033[H";

           while (borrowOrNot!="1" && borrowOrNot!="0")
           {
           cout<<"\n\n\n\n\n\t\t\t\t\tthe due date for return will be after 14 days";
           cout<<"\n\n\n\n\n\n\t\t\t\t\t\t if you want to continue enter 1\n\t\t\t\t\t    if you want to logout and exit enter 0\n\n\t\t\t\t\t\t     please enter 0 or 1 : ";
           cin>>borrowOrNot;
           cout<<"\033[2J\033[H";


           }

           if(borrowOrNot=="1")
           {
            flag2=true;

            cout<<"\n\n\n\n\n\t\t\t\t\tenter your full name : ";
            cin.ignore();
            getline (cin,full_name);
            cout<<"\n\n\t\t\t\t\tenter your address : ";
            cin.ignore();
            getline (cin,address);
            cout<<"\n\n\t\t\t\t\tenter the book name : ";
            cin.ignore();
            getline (cin,book_name);
            cout<<"\033[2J\033[H";
            cout<<"\n\n\n\t\t\t\t\tthe process has been completed successfully !";
           }
       }


        if (borrow_return=="2")
        {
         flag2=true;

          cout<<"\n\n\n\n\n\t\t\t\t\tenter your full name : ";
          cin.ignore();
          getline (cin,full_name);
          cout<<"\n\n\t\t\t\t\tenter the book name : ";
          cin.ignore();
          getline (cin,book_name);
          cout<<"\n\n\t\t\t\t\tenter the book author : ";
          cin.ignore();
          getline (cin,book_author);
          cout<<"\033[2J\033[H";
          cout<<"\n\n\n\t\t\t\t\tthe process has been completed successfully !";
        }


}


void logout_interface()
{
   string logout;
   cout<<"\n\n\n\n\n\n\t\t\t\t\tif you want to logout and exit enter 1 : ";
   cin>>logout;
   cout<<"\033[2J\033[H";
   while(logout!="1")
   {
       cout<<"\033[2J\033[H";
       cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\tplease enter 1 : ";
       cin>>logout;
   }
    cout<<"\033[2J\033[H";
   cout<<"\n\n\n\n\n\n\t\t\t\t\t\t     logged out successfully !";


}


                     //*********************************************************


int main()
{
    system("color B0");
    string choice1,choice2,choice3,add_update_delete;
    string type,customer_name,telephone;
    cout<<"\n\n\t\t\t\t\t\t   Welcome to library\n\n\n\n\n\t\t\t\t\t\t\t1- manager\n\t\t\t\t\t\t\t2- customer\n\n\n\t\t\t\t\t\tplease enter your number : ";


      main_page();


      if (flag==true)
      manager_interface();
      else
      user_interface();

    if(flag2!=true)
    {
     logout_interface();
     cout<<"\n\n\t\t\t\t\t\t thank you for dealing with us !\n";
     return 0;
    }
     logout_interface();
     cout<<"\n\n\t\t\t\t\t\t thank you for dealing with us !\n";
    return 0;
}
