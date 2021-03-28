#include <simplecpp>
#include <iomanip>

main_program
{
    int n,s1=0,s2=0,s3=0,a,b;
    cin >>n;

    repeat(n)
    {
        cin>>a>>b;
        s1+=a*a;
        s2+=b*b;
        s3+=a*b;
    }

    long double cos=s3/(sqrt(s1*s2));
    cout<<setprecision(2)<<cos<<endl;
}
