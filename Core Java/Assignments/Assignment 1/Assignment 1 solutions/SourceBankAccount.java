class BankAccount{
 int accountNumber;
 String holderName;
 int currentBalance;
 double interestRate;
 
 BankAccount()
{
System.out.println("In Default constructor");
 this.accountNumber=542316;
 this.holderName="Claire";
 this.currentBalance=76543;
 this.interestRate=4.5;
}

BankAccount(int accountName,String holderName,int currentBalance,double interestRate)
{
System.out.println("In Parametarised constructor");
 this.accountNumber=accountName;
 this.holderName=holderName;
 this.currentBalance=currentBalance;
 this.interestRate=interestRate;
}

  void display()
        {
          System.out.println("Account number is"+ accountNumber);
          System.out.println("Holder Name is"+ holderName);
          System.out.println("current balance is"+ currentBalance);
          System.out.println("Interest Rate is"+ interestRate);
        }
}

class CheckBankAccount{
  public static void main(String[]args){
          BankAccount b1,b2;
          b1=new BankAccount();
          b1.display();

          b2=new BankAccount(425236,"Phil",6622325,4.69);
          b2.display();

             }
}


