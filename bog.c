void myRecur(int n)
{
   if (n < 1) return;
   cout << n << " ";
   myRecur(n/2);
   cout << n << " ";
   myRecur(n/2);
}
