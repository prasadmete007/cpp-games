/******************************************************************************
Rock Paper Scissor game in C++
simple and easy solution
*******************************************************************************/
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int
rps (int user, int comp)
{
  if (comp == 1)
    {
      cout << "computers chooses Rock\n";
    }
  else if (comp == 2)
    {
      cout << "computers chooses paper\n";
    }
  else if (comp == 3)
    {
      cout << "computer chooses Scissors\n";
    }

  if (user == comp)
    {
      cout << "Tie\n";
    }

  else if (user == 1)
    {
      if (comp = 3)
	{
	  cout << "user wins\n";
	}
      if (comp == 2)
	{
	  cout << "user loses\n";
	}
    }

  else if (user == 2)
    {
      if (comp = 1)
	{
	  cout << "user wins\n";
	}
      if (comp == 3)
	{
	  cout << "user loses\n";
	}
    }

  else if (user == 3)
    {
      if (comp = 2)
	{
	  cout << "user wins\n";
	}
      if (comp == 1)
	{
	  cout << "user loses\n";
	}
    }
  return 0;

}

int
main ()
{
  int user = 0;
  int comp = 0;
  cout << "1) Rock\n" << "2) Paper\n" << "3) Scissors\n";
  std::cin >> user;
  comp = rand () % 3;

  rps (user, comp);
  return 0;
}
