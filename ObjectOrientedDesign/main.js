// Encapsulation
function BankAccount (accountNumber, accountHolderName, balance) {
    this.accountNumber = accountNumber;
    this.accountHolderName = accountHolderName;
    this.balance = balance;
 
    this.showAccountDetails = function() {
        console.log("Account Number: " + accountNumber);
        console.log("Account Holder Name: " + accountHolderName);
        console.log("Remaining Balance: " + balance);
        console.log();
    }
 
    this.deposit = function(amount) {
        balance += amount;
    }
 
    this.withdraw = function(amount) {
        balance -= amount;
    }
 }
 
 let myBankAccount = new BankAccount("122", "John", 1000);
 
 myBankAccount.showAccountDetails();
 myBankAccount.deposit(1000);
 myBankAccount.withdraw(500);
 myBankAccount.showAccountDetails();