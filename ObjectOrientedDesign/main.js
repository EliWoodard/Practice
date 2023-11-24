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

 // Inheritance
 // Base class for all user types
class User {
    constructor(name, email) {
        this.name = name;
        this.email = email;
    }

    login() {
        console.log(`${this.name} has logged in.`);
    }

    logout() {
        console.log(`${this.name} has logged out.`);
    }
}

// Admin user with additional privileges
class Admin extends User {
    constructor(name, email) {
        super(name, email);
    }

    deleteUser(user) {
        console.log(`${this.name} deleted the user ${user.name}.`);
    }
}

// Moderator user with some moderation capabilities
class Moderator extends User {
    constructor(name, email) {
        super(name, email);
    }

    moderateContent() {
        console.log(`${this.name} is moderating content.`);
    }
}

// Regular user with basic features
class RegularUser extends User {
    constructor(name, email) {
        super(name, email);
    }

    postComment(comment) {
        console.log(`${this.name} posts a comment: "${comment}"`);
    }
}

// Usage
let admin = new Admin('Alice', 'alice@example.com');
let moderator = new Moderator('Bob', 'bob@example.com');
let regularUser = new RegularUser('Charlie', 'charlie@example.com');

admin.login();
admin.deleteUser(regularUser);
moderator.moderateContent();
regularUser.postComment('Hello world!');
