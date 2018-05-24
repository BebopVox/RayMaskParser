#include <iostream>
#include <string>
#include <bitset>

#include "Masks.h"

using namespace std;

bool StartsWith(const string &str, const string &start)
{
  if (start.length() > str.length())
    return false;

  for (size_t i = 0; i < start.length(); i++)
  {
    if (str[i] != start[i])
      return false;
  }
  return true;
}

int main()
{
  string sMask;
  unsigned int uiMask = 0;

  cout << "Hello from Simple Ray contents mask parser!" << endl;
  cout << "Examples: 16384, 0b1011100, 0812434, 0x2004083" << endl << endl;

  while (sMask.empty())
  {
    cout << "Input contents mask: ";
    getline(cin, sMask);
  }

  cout << endl;

  if (sMask.length() == 1)
  {
    cout << "Its dec(len=1): " << sMask << endl;
    uiMask = stoi(sMask, nullptr, 10);
  }
  else
  {
    if (StartsWith(sMask, "0x"))
    {
      sMask.replace(0, 2, "");
      cout << "Its hex: " << sMask << endl;
      uiMask = stoi(sMask, nullptr, 16);
    }
    else if (StartsWith(sMask, "0b"))
    {
      sMask.replace(0, 2, "");
      cout << "Its bin: " << sMask << endl;
      uiMask = stoi(sMask, nullptr, 2);
    }
    else if (StartsWith(sMask, "08"))
    {
      sMask.replace(0, 2, "");
      cout << "Its oct: " << sMask << endl;
      uiMask = stoi(sMask, nullptr, 8);
    }
    else
    {
      cout << "Its dec: " << sMask << endl;
      try
      {
        uiMask = stoi(sMask, nullptr, 10);
      }
      catch (...)
      {
        cout << "Error mask!!!" << endl;
      }
    }
  }

  cout << "Contents mask(bin): " << bitset<32>(uiMask) << endl << endl;

  if (uiMask & CONTENTS_EMPTY) cout << "CONTENTS_EMPTY\t\t\t" << bitset<32>(CONTENTS_EMPTY) << endl;

  if (uiMask & CONTENTS_SOLID) cout << "CONTENTS_SOLID\t\t\t" << bitset<32>(CONTENTS_SOLID) << endl;
  if (uiMask & CONTENTS_WINDOW) cout << "CONTENTS_WINDOW\t\t\t" << bitset<32>(CONTENTS_WINDOW) << endl;
  if (uiMask & CONTENTS_AUX) cout << "CONTENTS_AUX\t\t\t" << bitset<32>(CONTENTS_AUX) << endl;
  if (uiMask & CONTENTS_GRATE) cout << "CONTENTS_GRATE\t\t\t" << bitset<32>(CONTENTS_GRATE) << endl;
  if (uiMask & CONTENTS_SLIME) cout << "CONTENTS_SLIME\t\t\t" << bitset<32>(CONTENTS_SLIME) << endl;
  if (uiMask & CONTENTS_WATER) cout << "CONTENTS_WATER\t\t\t" << bitset<32>(CONTENTS_WATER) << endl;
  if (uiMask & CONTENTS_BLOCKLOS) cout << "CONTENTS_BLOCKLOS\t\t\t" << bitset<32>(CONTENTS_BLOCKLOS) << endl;
  if (uiMask & CONTENTS_OPAQUE) cout << "CONTENTS_OPAQUE\t\t\t" << bitset<32>(CONTENTS_OPAQUE) << endl;
  if (uiMask & LAST_VISIBLE_CONTENTS) cout << "LAST_VISIBLE_CONTENTS\t\t\t" << bitset<32>(LAST_VISIBLE_CONTENTS) << endl;

  if (uiMask & CONTENTS_TESTFOGVOLUME) cout << "CONTENTS_TESTFOGVOLUME\t\t\t" << bitset<32>(CONTENTS_TESTFOGVOLUME) << endl;
  if (uiMask & CONTENTS_UNUSED) cout << "CONTENTS_UNUSED\t\t\t" << bitset<32>(CONTENTS_UNUSED) << endl;

  if (uiMask & CONTENTS_UNUSED6) cout << "CONTENTS_UNUSED6\t\t\t" << bitset<32>(CONTENTS_UNUSED6) << endl;

  if (uiMask & CONTENTS_TEAM1) cout << "CONTENTS_TEAM1\t\t\t" << bitset<32>(CONTENTS_TEAM1) << endl;
  if (uiMask & CONTENTS_TEAM2) cout << "CONTENTS_TEAM2\t\t\t" << bitset<32>(CONTENTS_TEAM2) << endl;

  if (uiMask & CONTENTS_IGNORE_NODRAW_OPAQUE) cout << "CONTENTS_IGNORE_NODRAW_OPAQUE\t\t\t" << bitset<32>(CONTENTS_IGNORE_NODRAW_OPAQUE) << endl;

  if (uiMask & CONTENTS_MOVEABLE) cout << "CONTENTS_MOVEABLE\t\t\t" << bitset<32>(CONTENTS_MOVEABLE) << endl;

  if (uiMask & CONTENTS_AREAPORTAL) cout << "CONTENTS_MOVEABLE\t\t\t" << bitset<32>(CONTENTS_MOVEABLE) << endl;

  if (uiMask & CONTENTS_PLAYERCLIP) cout << "CONTENTS_PLAYERCLIP\t\t\t" << bitset<32>(CONTENTS_PLAYERCLIP) << endl;
  if (uiMask & CONTENTS_MONSTERCLIP) cout << "CONTENTS_MONSTERCLIP\t\t\t" << bitset<32>(CONTENTS_MONSTERCLIP) << endl;

  if (uiMask & CONTENTS_CURRENT_0) cout << "CONTENTS_CURRENT_0\t\t\t" << bitset<32>(CONTENTS_CURRENT_0) << endl;
  if (uiMask & CONTENTS_CURRENT_90) cout << "CONTENTS_CURRENT_90\t\t\t" << bitset<32>(CONTENTS_CURRENT_90) << endl;
  if (uiMask & CONTENTS_CURRENT_180) cout << "CONTENTS_CURRENT_180\t\t\t" << bitset<32>(CONTENTS_CURRENT_180) << endl;
  if (uiMask & CONTENTS_CURRENT_270) cout << "CONTENTS_CURRENT_270\t\t\t" << bitset<32>(CONTENTS_CURRENT_270) << endl;
  if (uiMask & CONTENTS_CURRENT_UP) cout << "CONTENTS_CURRENT_UP\t\t\t" << bitset<32>(CONTENTS_CURRENT_UP) << endl;
  if (uiMask & CONTENTS_CURRENT_DOWN) cout << "CONTENTS_CURRENT_DOWN\t\t\t" << bitset<32>(CONTENTS_CURRENT_DOWN) << endl;

  if (uiMask & CONTENTS_ORIGIN) cout << "CONTENTS_ORIGIN\t\t\t" << bitset<32>(CONTENTS_ORIGIN) << endl;

  if (uiMask & CONTENTS_MONSTER) cout << "CONTENTS_MONSTER\t\t\t" << bitset<32>(CONTENTS_MONSTER) << endl;
  if (uiMask & CONTENTS_DEBRIS) cout << "CONTENTS_DEBRIS\t\t\t" << bitset<32>(CONTENTS_DEBRIS) << endl;
  if (uiMask & CONTENTS_DETAIL) cout << "CONTENTS_DETAIL\t\t\t" << bitset<32>(CONTENTS_DETAIL) << endl;
  if (uiMask & CONTENTS_TRANSLUCENT) cout << "CONTENTS_TRANSLUCENT\t\t\t" << bitset<32>(CONTENTS_TRANSLUCENT) << endl;
  if (uiMask & CONTENTS_LADDER) cout << "CONTENTS_LADDER\t\t\t" << bitset<32>(CONTENTS_LADDER) << endl;
  if (uiMask & CONTENTS_HITBOX) cout << "CONTENTS_HITBOX\t\t\t" << bitset<32>(CONTENTS_HITBOX) << endl;

  cout << endl;

  system("pause");

  return 0;
}