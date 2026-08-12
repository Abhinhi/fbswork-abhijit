class Fan{
 int id;
 String name;
 String color;
 int price;
 int speed;
 
Fan()
{
System.out.println("In Default constructor");
 this.id=12;
 this.name="Bajaj";
 this.color="Red";
 this.price=2500;
 this.speed=5;
}
Fan(int id,String name,String color,int price,int speed)
{
System.out.println("In Parametarised constructor");
 this.id=id;
 this.name=name;
 this.color=color;
 this.price=price;
 this.speed=speed;
}


   void setId(int id)
   {
   this.id=id;
   }
  void setName(String ch)
  {
   this.name=ch;
  } 
  void setColor(String co)
 {
  this.color=co;
 }
  void setPrice(int p)
 {
  this.price=p;
 }
  void setSpeed(int s)
 {
  this.speed=s;
  }
  void display()
  {
    System.out.println("Id is" + id);
    System.out.println("name is" + name);
    System.out.println("color is" + color);
    System.out.println("price is" + price);
    System.out.println("speed is" + speed);
  }
 int getId()
{
   return this.id;
}

int getPrice()
{
   return this.price;
}

int getSpeed()
{
   return this.speed;
}
}

class CheckFan{
 public static void main(String[]args){
   Fan f1,f2;
   f1=new Fan();
   /*f1.setId(101);
   f1.setName("Sheldon");
   f1.setColor("Blue");
   f1.setPrice(1234);
   f1.setSpeed(3);*/
   f1.display();  
   f2=new Fan(102,"Philips","Black",2000,4);
   /*f2.setId(102);
   f2.setName("Raj");
   f2.setColor("Black");
   f2.setPrice(1500);
   f2.setSpeed(5);*/
   f2.display();

   /*if(f1.getId()>f2.getId())
   {
      System.out.println("F1 Id is Greater");
   }
   else
   {
      System.out.println("F2 Id is Greater");
   }

   if(f1.getPrice()>f2.getPrice())
   {
      System.out.println("F1 Price is Higher");
   }
   else
   {
      System.out.println("F2 Price is Higher");
   }

   if(f1.getSpeed()>f2.getSpeed())
   {
      System.out.println("F1 Speed is Higher");
   }
   else
   {
      System.out.println("F2 Speed is Higher");
   }*/
 
   }
}
   

   