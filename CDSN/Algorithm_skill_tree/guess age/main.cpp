1 public class 蓝桥杯_第四届_猜年龄
 2 {
 3     public static void main(String[] args) {
 4         // TODO code application logic here
 5         long t3=0,t4=0;
 6         for(int i=11;i<30;i++)
 7         {
 8             String str="";
 9             t3=i*i*i;
10             t4=i*i*i*i;
11             str=String.valueOf(t3) + String.valueOf(t4);
12             if(str.length()!=10)
13                continue;
14             else if(noRepeat(str))
15             {
16                 System.out.print(i);
17                 break;
18             }
19         }
20     }
21     
22     public static boolean noRepeat(String str)
23     {
24         for(int j=0;j<str.length()-1;j++)
25         {
26             char x=str.charAt(j);
27             for(int m=j+1;m<str.length();m++)
28             {
29                 char y=str.charAt(m);
30                 if(y==x)
31                 {
32                     return false;
33                 }
34             }
35         }
36         return true;
37     }
38 }