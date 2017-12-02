#include <vector>
#include <map>
#include <iostream>

using namespace std;

class Stooge
{
  public:
    static Stooge *get(int choice);
    virtual void slap_stick() = 0;
};

int main()
{
  vector<int> choices;
  int choice;

  while (true)
  {
    cout << "Larry(1) Moe(2) Curly(3) Go(0): ";
    cin >> choice;
    if (choice == 0) break;
    choices.push_back(choice);
  }
  for (int i = 0; i < choices.size(); i++){
      Stooge::get(choices[i] )->slap_stick();
  }
}

class Larry: public Stooge
{
  public:
    void slap_stick() 
    {
        cout << "Larry: poke eyes\n";
    }
};
class Moe: public Stooge
{
  public:
    void slap_stick()
    {
        cout << "Moe: slap head\n";
    }
};
class Curly: public Stooge
{
  public:
    void slap_stick()
    {
        cout << "Curly: suffer abuse\n";
    }
};

Stooge *Stooge::get(int choice)
{
    static map<int, Stooge*> stooges;

    if(stooges.count(choice) == 1 ) return stooges[choice];
    cout << "Making new "<<choice<<endl;
    switch(choice){
        case 1:
            stooges[choice]=new Larry;
            break;
        case 2:
            stooges[choice]=new Moe;
            break;
        case 3:
            stooges[choice]=new Curly;
            break;
        default:
            return nullptr;
            break;
    }
    return stooges[choice];
}

