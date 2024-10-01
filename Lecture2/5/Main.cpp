import std;


void pp(int& i)
{
    std::cout << &i << " " << i << " " << sizeof(i) << "\n";

}
int main()
{
    int a = 10;
    int* pa = &a;
    int b = 25;
    //int* pb = &b;
    
    pp(a);
    pp(b);
    
    *pa = 17;
    
    pp(a);

    int arr[10] = {};

    for (size_t i = 0; i < 10; i++)
    {
        pp(arr[i]);
    }


    return 0;
}
