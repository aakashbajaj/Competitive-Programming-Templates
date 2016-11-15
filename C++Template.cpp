//				C++ Template For Competitive Programming				// 
//					    By Aakash Bajaj						//
//				Birla Institute Of Technology And Science				//
//						Pilani							//

#include <cstdio>
#include <cmath>
#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <map>
#include <cassert>
#include <string>
#include <cstring>
#include <queue>
#include <limits.h>
#include <string.h>
 
using namespace std;
 
#define rep(i,a,b)  for(int i=a; a<b; i++)
#define strlp(s,i,a)	for(int i=a;s[i]!='\0';i++)
#define all(v)  v.begin(),v.end()
 
typedef long long int LL;
typedef pair<int, int > pii;
typedef vector<int > vi;
 
inline void scn(int &a)
{
  char k = 0;
  while(k<33)
 
  k=getc(stdin);
  a=0;
  while(k>33)
  {
    a = a*10 + k - '0';
    k = getc(stdin);
  }
}

int main()
{
	int t;
	scn(t);
	while(t--)
	{

	}
	return 0;
}
