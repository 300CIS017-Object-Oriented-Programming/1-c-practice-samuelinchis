Ejercicio 1 (Input and Output):
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num1;
    int num2;
    int num3;
    cin >> num1 >> num2 >> num3;
    int suma=num1 + num2 + num3;
    cout<<suma<<endl; 
    return 0;
}

Ejercicio 2 (Conditional Statements):
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    int num;
    cin >> num;
    if(num>9){
        printf("Greater than 9");
        
    }
    else{
        if(num == 1){
            printf("one");
        }
        if(num == 2){
            printf("two");
        }
        if(num == 3){
            printf("three");
        }
        if(num == 4){
            printf("four");
        }
        if(num == 5){
            printf("five");
        }
        if(num == 6){
            printf("six");
        }
        if(num == 7){
            printf("seven");
        }
        if(num == 8){
            printf("eight");
        }
        if(num == 9){
            printf("nine");
        }
        
    }

    return 0;
}

Ejercicio 3 (For Loop):
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int min , max ;
    cin >> min >> max;
    for(int i= min ; i <= max ; ++i){
        if(i>9){
            if(i%2 == 0){
                printf("even\n");
            }
            else{
                printf("odd\n");
            }
        }
        else{
        if(i == 1){
            printf("one\n");
        }
        if(i == 2){
            printf("two\n");
        }
        if(i == 3){
            printf("three\n");
        }
        if(i == 4){
            printf("four\n");
        }
        if(i == 5){
            printf("five\n");
        }
        if(i == 6){
            printf("six\n");
        }
        if(i == 7){
            printf("seven\n");
        }
        if(i == 8){
            printf("eight\n");
        }
        if(i == 9){
            printf("nine\n");
        }
        
    }

    }
    return 0;
}

Ejercicio 4 (Functions):
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a,int b,int c,int d){
    int max = a;
    for(int i = 0 ; i < 4 ; ++i){
    if(max < b){
        max = b;
    }
    else if(max < c){
        max = c;
    }
    else if(max < d){
        max = d;
    }
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

Ejercicio 5 (Arrays Introduction):  
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, E;
    cin >>N;
    int arr[N];
    for(int i= 0; i<N; ++i){
        cin >> E;
        arr[i] = E;
    }
    for(int i = N-1; i>=0; --i){
        cout << arr[i]<< " ";
    }
    return 0;
}

Ejercicio 6 (Strings): 
using namespace std;

int slen(string word){
    int l = word.size();
    return l;
}

string conc(string a, string b){
    string c = a + b ;
    return c;
}

string swap(string desti, string mut){
    desti[0]= mut[0];
    return desti;
}


int main() {
	string one, two;
    cin >> one;
    int lone = slen(one);
    cin >> two;
    int ltwo = slen(two);
    cout << lone << " " << ltwo << endl;
    string concatenated = conc(one, two);
    cout << concatenated << endl;
    string newstr1 = swap(one, two);
    string newstr2 = swap(two, one);
    cout << newstr1 << " " << newstr2;
  
    return 0;
}

Ejercicio 7 (Class):
#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
        int age;
        string firstName;
        string lastName;
        int standard;
    
   public:
    void set_age(int age){
        this ->age = age;
    }
    void set_standard(int n){
        standard = n;
    }
    void set_first_name(string name){
        firstName = name;
    }
    void set_last_name(string cognome){
        lastName = cognome;
    }
    int get_age(){
        return age;
    }
    int get_standard(){
        return standard;
    }
    string get_last_name(){
        return lastName;
    }
    string get_first_name(){
        return firstName;
    }
    string to_string(){
        stringstream ss;
        ss << this->age << "," << firstName << "," << lastName << "," << standard;
        string sso;
        ss >> sso;
        return sso;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

Ejercicio 8 (Classes and Objects) :
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
class Student{
    private:
    int scores[5];
    public:
        void input(){
            int grade;
            for(int i = 0; i < 5 ;++i ){
                cin >> grade;
                scores[i]= grade;
            }
        }
        int calculateTotalScore(){
            int sum = 0;
            for(int i = 0 ; i< 5 ;++i){
                sum += scores[i];
            }
            return sum;
        }
};


int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}