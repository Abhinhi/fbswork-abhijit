class SmartPhone{
 int modelNo;
 String brandName;
 int price;
 int storage;
 
 SmartPhone()
 {
  System.out.println("In Default Constructor");
  this.modelNo=122;
  this.brandName="Xiomi";
  this.price=15000;
  this.storage=64;
 }
 SmartPhone(int modelNo,String brandName,int price,int storage)
 {
  System.out.println("In Parameterised Constructor");
  this.modelNo=modelNo;
  this.brandName=brandName;
  this.price=price;
  this.storage=storage;
 }
 void setModelNo(int mn)
 {
   this.modelNo=mn;
 }
 void setBrandName(String n)
 {
   this.brandName=n;
 }
 void setPrice(int p)
 {
   this.price=p;
 }
 void setStorage(int s)
 {
   this.storage=s;
 }
 void display()
 {
   System.out.println("Model no is"+ modelNo);
   System.out.println("Brand Name is"+ brandName);
   System.out.println("Price is"+ price);
   System.out.println("Storage is"+ storage);
 }
int getModelNo()
{
   return this.modelNo;
}

int getPrice()
{
   return this.price;
}

int getStorage()
{
   return this.storage;
}
}

class CheckSmartPhone{
 public static void main(String[]args){
   SmartPhone p1;
   p1=new SmartPhone();
   /*p1.setModelNo(12345);
   p1.setBrandName("oppo");
   p1.setPrice(24356);
   p1.setStorage(256);*/
   p1.display();

   SmartPhone p2;
   p2=new SmartPhone(123,"POCO",20000,128);
   /*p2.setModelNo(12346);
   p2.setBrandName("Samsung");
   p2.setPrice(30000);
   p2.setStorage(128);*/
   p2.display();

   /*if(p1.getModelNo()>p2.getModelNo())
   {
      System.out.println("P1 Model Number is Greater");
   }
   else
   {
      System.out.println("P2 Model Number is Greater");
   }

   if(p1.getPrice()>p2.getPrice())
   {
      System.out.println("P1 Price is Higher");
   }
   else
   {
      System.out.println("P2 Price is Higher");
   }

   if(p1.getStorage()>p2.getStorage())
   {
      System.out.println("P1 Storage is Higher");
   }
   else
   {
      System.out.println("P2 Storage is Higher");
   }*/
 }
}