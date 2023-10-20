#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void rotation()
{string s1,s2,dubles; bool r;
cout<<"input the 2 strings: \n";
getline(cin, s1);
getline(cin, s2);
dubles=s1+s1;
int k=0;

for(int i=0; i<s2.size(); i++)
    { k=0;
    if (s2[k]==dubles[i])
        {
        r=true;
        for(k=1;k<s2.size();k++)
            {
                if (s2[k]!=dubles[i+k]){r=false; break;}
            }
        if(r) break;
        }
    }
if(r)cout<<"its a rotation \n";
else cout<<"its not a rotation \n";
}

void sentence()
{string s,punt="!?,'.;:"; int k=0;
cout<<"\n input the sentence:";
getline(cin, s);
for(int i=0;i<s.size();i++)
    for(int j=0;j<punt.size();j++)
        if(s[i]==punt[j]) k++;

cout<<"\n there are "<<k<<" punctuations \n";
}

bool isletter(string s , int p)
{ bool r=false; string alphabet="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
for(int i=0;i<alphabet.size();i++)
    if(s[p]==alphabet[i]) r=true;
    return r;
}

bool isclean(string s)
{bool r=true;

for(int i=0; i<s.size(); i++)
    if(isletter(s,i)==false) r=false;

    return r;
}

string stringclean(string s)
{string result; int b=0;

while(isclean(s)==false)
    {
    if(isletter(s,b)==true) {b++;}
    else {s.erase(b,1);}
    }
return s;
}


void superpolidrome()
{ string s,temp; cout<<"input the string:";
getline(cin,s);
s=stringclean(s);
transform(s.begin(), s.end(), s.begin(), ::toupper);

bool r=true;
for(int i=0;i<s.size()/2;i++)
    if(s[i]!=s[s.size()-i-1])r=false;
if(r)
cout<<"string is a polidrome"<<endl;
else cout<<"string is not a polidrome"<<endl;
}

void polidrome()
{ string s,temp;
cout<<"enter a word:";
getline(cin,s);

transform(s.begin(), s.end(), s.begin(), ::toupper);

bool r=true;
for(int i=0;i<s.size()/2;i++)
    if(s[i]!=s[s.size()-i-1])r=false;
if(r)
cout<<"string is a polidrome"<<endl;
else cout<<"string is not a polidrome"<<endl;
}

void upper()
{string s; cout<<"type the sentence";
getline(cin,s);

transform(s.begin(), s.end(), s.begin(), ::toupper);

cout<<"transformed sentence is:"<<s<<endl;
}

void isemail()
{string s; cout<<"type the email:"; getline(cin, s);
bool ats=false, dts=false; int atp,atc=0; int dtp;
for(int i=0; i<=s.size(); i++)
    if(s[i]=='@') {ats=true; atp=i; atc++;}
for(int i=0; i<=s.size(); i++)
    if(s[i]=='.') {dts=true; dtp=i;}
if(ats && dts && atc==1 && dtp>atp+1)
    cout<<"valid email";
else cout<<"invalid email";

}
int main()
{cout<<"Easy tastks: \n\n";
polidrome();
upper();
cout<<"Hard tasks: \n \n";
rotation();
sentence();
superpolidrome();
isemail();
    return 0;
}
