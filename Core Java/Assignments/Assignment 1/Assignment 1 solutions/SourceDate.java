class Date{
 int day;
 int month;
 int year;
String dow;
Date()
{
System.out.println("In Default constructor");
 this.day=15;
 this.month=8;
 this.year=1947;
 this.dow="Friday";
}
 
Date(int day,int month,int year,String dow)
{
System.out.println("In Parameterised constructor");
 this.day=day;
 this.month=month;
 this.year=year;
 this.dow=dow;
}

   /*void setDay(int a)
    {
    this.day=a;
    }
    void setMonth(int n)
    {
      this.month=n;
    }
   void setYear(int y)
     {
      this.year=y;
     }
    void setDow(String m)
   {
    this.dow=m;
   }*/
   void display()
  {
   System.out.println(this.day);
   System.out.println(this.month);
   System.out.println(this.year);
   System.out.println(this.dow);

  }

 /* int getDay()
  {
   return this.day;
  }
 
  int getMonth()
  {
   return this.month;
  }
  
  int getYear()
  {
   return this.year;
  }

  String getDow()
  {
   return this.dow;
  }*/

}

class CheckDate{
 public static void main(String[]args){
   Date d1,d2;
   d1=new Date(15,07,2026,"Friday");
  /* d1.setDay(18);
   d1.setMonth(7);
   d1.setYear(2026);
   d1.setDow("Thursday");*/
   d1.display();
   
   d2=new Date();
  /* d2.setDay(17);
   d2.setMonth(7);
   d2.setYear(2026);
   d2.setDow("Wednessday");*/
   d2.display();

 /* if(d1.getDay()>d2.getDay())
    {
      System.out.println("D1 is younger");
    }
  else{
      System.out.println("D2 is younger");
      }
 
  if(d1.getMonth()>d2.getMonth())
    {
      System.out.println("D1 is younger");
    }
  else{
      System.out.println("D2 is younger");
      }
   
  if(d1.getYear()>d2.getYear())
    {
      System.out.println("D1 is younger");
    }
  else{
      System.out.println("D2 is younger");
      }
  
  if(d1.getDow()>d2.getDow())
    {
      System.out.println("D1 is younger");
    }
  else{
      System.out.println("D2 is younger");
      }*/
 }
}
