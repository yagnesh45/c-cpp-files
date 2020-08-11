#include<iostream>
#include<string.h>
using namespace std;

class person
{
    protected:
    char name[20],team[20];int age,no_matches;

    public:
        /*person(char n[],char t[],int a,int m)
        {
            strcpy(name,n);strcpy(team,t);
            age=a;no_matches=m;
        }*/

        virtual void put_data(char n[],char t[],int a,int m)
        {

        }

        virtual void get_data()
        {

        }

};


class batsman : public person
{
    int runs,no_centuries;
    float avg,strike_rate;

    public:
        /*batsman(char n[],char t[],int age,int m,int r,int c,float a,float s):person(n,t,age,m)
        {
            runs=r;no_centuries=c;
            avg=a;strike_rate=s;
        }*/

        void put_data(char n[],char t[],int ag,int m,int r,int c,float a,float s)
        {
            strcpy(name,n);strcpy(team,t);
            age=ag;no_matches=m;
            runs=r;no_centuries=c;
            avg=a;strike_rate=s;
        }

        void get_data()
        {
            cout<<"\nname: "<<name;
            cout<<"\nteam: "<<team;
            cout<<"\nage: "<<age;
            cout<<"\nno_matches: "<<no_matches;

            cout<<"\nruns: "<<runs;
            cout<<"\nno of centuries: "<<no_centuries;
            cout<<"\naverage: "<<avg;
            cout<<"\nstrike rate: "<<strike_rate;
        }

};

class bowler : public person
{
    int wickets,no_5w;
    float eco,avg;

    public:
        /*bowler(char n[],char t[],int age,int m,int w,int wi,float a,float e):person(n,t,age,m)
        {
            wickets=w;no_5w=wi;
            avg=a;eco=e;
        }*/

        void put_data(char n[],char t[],int ag,int m,int w,int wi,float a,float e)
        {
            strcpy(name,n);strcpy(team,t);
            age=ag;no_matches=m;
            wickets=w;no_5w=wi;
            avg=a;eco=e;
        }

        void get_data()
        {
            cout<<"\nname: "<<name;
            cout<<"\nteam: "<<team;
            cout<<"\nage: "<<age;
            cout<<"\nno_matches: "<<no_matches;

            cout<<"\nwickets: "<<wickets;
            cout<<"\nno of 5 wicket hauls: "<<no_5w;
            cout<<"\naverage: "<<avg;
            cout<<"\neconomy: "<<eco;
        }
};

int main()
{
    person * team[3];
    batsman b1;b1.put_data("msd","india",38,200,600,34,56,120);
    batsman b2;b2.put_data("virat","india",30,100,1000,60,80,90);
    bowler b3;b3.put_data("bhuvi","india",30,100,150,20,20,4.9);
    team[0]=&b1;team[1]=&b2;team[2]=&b3;
    for(int i=0;i<3;i++)
    {
        team[i]->get_data();
    }
    return 0;
}
