
class Hello
{
  int x = 0;
  int y = 0;
  Hello(int a,int b)
  {
    this.x = a;
    this.y = b;
  }
  int add()
  {
    this.x += 1;
    this.y += 1;
    return this.x + this.y;
  }
}


void main()
{
  var t = Hello(1,2);
  for(int i=0;i<100;i++)
  {
    t.add();
  }
  print(t.add());
}