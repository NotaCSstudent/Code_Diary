class Test
{
  int x = 0;
  int y = 0;
  int z = 0;
 
  Test(int a,int b, int c)
  {
    x = a;
    y = b;
    z = c;
  }

}



class Test_2 extends Test//Inheritence
{
  double g = 0;
  Test_2(int a,int b,int c) : super(a,b,c);
}

int hello()
{
  return 3;
}

void main()
{
  print('Hello Dart');
  hello();
  print(hello());
  var first = Test(1,2,3);
  var second = Test_2(1,2,3);
  print(first.x);
}