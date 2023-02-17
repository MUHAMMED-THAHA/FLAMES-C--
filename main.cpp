#include <string>
#include <iostream>

using namespace std;

int main()
{
    int count;
    string str1 = "thaha";
    string str2 = "trisha";
    
    cin>>str1;
    cin>>str2;
    
    int n1 = str1.length();
    int n2 = str2.length();
    
    for(int i = 0; i < n1; i++)
    {
        for(int j = 0;j < n2; j++)
        {
                if(str1[i] == str2[j] )
                {
                    str1[i] = '0';
                    str2[j] = '0';
                    count++;
                    break;  
                }
        }
    }
    
    cout<<count<<endl;
    int value = (n1 +n2)- 2*(count);
    
    string love[6] = {"Friends", "Love", "Affection", "Marriage", "Enemy", "Sister"};
    string flames =  "flames";
    int k = 0;
    for(int i = 0; i<5; i++)
    {
        for(int j = 0;j < value; j++)
        {
            if(flames[k] == '0')
            {
                j = j-1;
            }
            if(j!= value - 1)
            {
                 k++;
            }
            
            if(k == 6)
            {
                k=0;
            }
        }
        flames[k] ='0';
      //  cout<<"\n";
    }
    for(int i=0;i<6;i++)
    {
        if(flames[i]!='0')
        {
            k=i;
            break;
        }
        
    }
    cout<<love[k]<<endl;
}
